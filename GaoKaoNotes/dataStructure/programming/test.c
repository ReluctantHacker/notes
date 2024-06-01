/* 參考（引用）的教學如下：
《動畫圖解資料結構（第二版）》，作者：李春雄 */

#include <stdio.h>
#include <stdlib.h>
#define Vertex_Num 6	              	//定義圖形頂點的總數 
#define Edge_Num 7		        //定義圖形邊的總數 

int Graph[Vertex_Num][Vertex_Num];	//圖形的相鄰矩陣                   
int Graph_Node[7][2] = {{1, 2}, {1, 3}, {2, 4}, {2, 5}, {3, 6}, {4, 6}, {5, 6}};
int Visited[Vertex_Num];    	//記錄已被拜訪過的節點 
int row, column, i;
void CreateGraph();	    	//宣告建立圖形，在main函數之後定義

void DFS(int);		    	//宣告深度優先搜尋法，在main函數之後定義

int Queue[Vertex_Num + 1];	//佇列的陣列宣告，用於廣度優先搜尋法
int First = -1;		        //佇列的前端(第一筆)，用於廣度優先搜尋法
int Last = -1;		        //佇列的尾端(最後一筆)，用於廣度優先搜尋法
int Size = 0;			//佇列目前的大小，用於廣度優先搜尋法
void BFS(int);			//宣告廣度優先搜尋法，在main函數之後定義
void Enqueue(int a);		//從佇列尾端存入資料，在BFS函數之後定義，用於廣度優先搜尋法
int Dequeue();			//從佇列前端移除資料，在BFS函數之後定義，用於廣度優先搜尋法
int isEmpty();			//檢查佇列是否為空，在BFS函數之後定義，用於廣度優先搜尋法
 
int main( ){
	
	//將二維陣列的內容轉換成相鄰矩陣
	int R_node;
 
	for(row = 0; row <= Vertex_Num - 1; row++){
		for(column = 0; column <= Vertex_Num - 1; column++)
			Graph[row][column]=0;	//將相鄰矩陣預設為0
	}
  
	//設定圖形頂點的起點
	for(row = 0; row <= Edge_Num - 1; row++){
		R_node = Graph_Node[row][0] - 1;     
		for(column = 0; column <= 1; column++)
			Graph[R_node][Graph_Node[row][column] - 1] = 1;
	}

	//設定圖形頂點的終點
	for(row = 0; row <= Edge_Num - 1; row++){
		R_node = Graph_Node[row][1] - 1;
		for(column = 0; column <= 1; column++)
			Graph[R_node][Graph_Node[row][column] - 1] = 1;
  	}

	//將對角線設定為0
	for(row = 0; row <= Vertex_Num - 1; row++){    
		for(column = 0; column <= Vertex_Num - 1; column++){
			if(row == column)
				Graph[row][column]=0;
		}
	}

	CreateGraph();	//建立圖形 

	for(i = 0; i <= Vertex_Num - 1; i++)
		Visited[i] = 0;			//將節點都設定為尚未被拜訪
	     
	printf("圖形的深度優先搜尋法（DFS）走訪順序：\n");
	DFS(0);	//呼叫深度優先搜尋法
	printf("\n");

	for(i = 0; i <= Vertex_Num - 1; i++)
		Visited[i] = 0;			//將節點都設定為尚未被拜訪
	printf("圖形的廣度優先搜尋法（BFS）走訪順序：\n");
	BFS(0);	//呼叫廣度優先搜尋法
	printf("\n");

	return 0;
}

void CreateGraph(){
	printf("圖形的相鄰矩陣內容如下:\n");
	for(row = 0; row <= Vertex_Num - 1; row++){
		for(column = 0; column <= Vertex_Num - 1; column++)
		printf("%3d", Graph[row][column]);
		printf("\n");
	}
}

void DFS(int i){
	Visited[i] = 1;
	printf("v%d  ", i + 1);
	for(int j = 0; j <= Vertex_Num - 1; j++){
		if(Graph[i][j] == 1){
			if (Visited[j] != 1)	//判斷是否已經被拜訪過
				DFS(j);
		}
	}
}

void BFS(int i){
	Visited[i] = 1;
	printf("v%d  ",i + 1);
	for(int j = 0; j <= Vertex_Num - 1; j++){
		if(Graph[i][j] == 1){
			if (Visited[j]!=1)	//判斷是否已經被拜訪過
				Enqueue(j);
		}
	}
	while (First != Last){
		i = Dequeue();
		if(Visited[i] != 1)
			BFS(i);
   	}
}

void Enqueue(int a){
	if(Last >= (Vertex_Num + 1)){
		printf("佇列滿囉");
	}else{
		Queue[++Last] = a;
		Size+=1;
		if(First == -1){First = 0;}
	}
}

int Dequeue(){   
	if(isEmpty()){
		printf("佇列為空\n");
	}else{ 
		int data;
		data = Queue[First];
		for(int i=First; i<=Last;i++){
			Queue[i] = Queue[i+1];
		}
		Last -=1;
		Size -= 1;
		return data;
	}
}

int isEmpty(){
	if(Size<=0){
		First = -1;
		Last = -1;
		return 1;
	}else{
		return 0;
	}
}
