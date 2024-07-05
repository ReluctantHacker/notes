#include <iostream>
#include <fstream>  // 這裡有三個跟檔案開啟, 操作, 處理有關的class: ofstream, ifstream, fstream
#include <string>
using namespace std;

// 打開並寫入,  ofstream 法1
void test_ofstream() {  // ---> ofstream用來打開檔案 (open file)
	// 打開檔案, 若不存在則自動創建
	ofstream testFile("testFile.txt");  // 創建一個ofstream object

	// 採用流的方式寫入(這裡我覺得挺方便的)
	testFile << "This is a test text line.";

	// 關閉ofstream物件
	testFile.close(); // close()並不會真的把此物件真的消除你如果想再次打開只要使用testFile.open()即可, 這是因為ofstream 物件本身占用的記憶體不多, 故而如此設計
	
	//testFile.open(); 不需要重新再創建物件.

}

// 打開並寫入, ofstream 法2  , 此法於法1的效果是一樣的
void test_ofstream2() {  // ---> ofstream用來打開檔案 (open file)
	// 打開檔案, 若不存在則自動創建
	ofstream testFile;  // 創建一個ofstream object但不帶參
	testFile.open("testFile.txt");

	// 採用流的方式寫入(這裡我覺得挺方便的)
	testFile << "This is a test text line.";

	// 關閉ofstream物件
	testFile.close();

}

// 讀取
void test_ifstream() {
	// 先創建讀取檔案的物件
	ifstream testReadFile;
	// 開啟文件
	testReadFile.open("testFile.txt");
	// 設定string變數
	std::string line;
	// 使用迴圈讀取(標準做法, 但此法似乎無法只讀取特定內容, 如果要找到特定的行, 例如第10行, 標準作法是必須要設一個變數0, 然後隨著回全累加, 加到10的後break while, 有點麻煩但似乎就是標準方法;)
	while (std::getline(testReadFile, line)) {
		std::cout << line << std::endl;
	}	
	// 關閉檔案(同樣物件不會消失, 隨時可以在open)
	testReadFile.close();
}

int main() {
//	test_ofstream();
//	test_ofstream2();
	test_ifstream();
	return 0;
}	
