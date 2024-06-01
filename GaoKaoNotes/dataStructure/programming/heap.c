// provided by chatGPT
#include <stdio.h>
#include <stdlib.h>

// 定義最小堆結構
typedef struct {
    int *arr; // 存儲元素的數組
    int capacity; // 最大容量
    int size; // 當前大小
} MinHeap;

// 創建一個新的最小堆
MinHeap* createMinHeap(int capacity) {
    MinHeap* minHeap = (MinHeap*)malloc(sizeof(MinHeap));
    minHeap->arr = (int*)malloc(sizeof(int) * capacity);
    minHeap->capacity = capacity;
    minHeap->size = 0;
    return minHeap;
}

// 交換兩個元素的值
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 獲取父節點的索引
int parent(int i) {
    return (i - 1) / 2;
}

// 獲取左子節點的索引
int leftChild(int i) {
    return 2 * i + 1;
}

// 獲取右子節點的索引
int rightChild(int i) {
    return 2 * i + 2;
}

// 向最小堆中插入一個元素
void insert(MinHeap* minHeap, int value) {
    if (minHeap->size >= minHeap->capacity) {
        printf("Heap is full. Cannot insert.\n");
        return;
    }
    
    // 將新元素添加到最小堆的末尾
    minHeap->arr[minHeap->size] = value;
    int i = minHeap->size;
    minHeap->size++;

    // 調整最小堆，保持最小堆性質
    while (i != 0 && minHeap->arr[parent(i)] > minHeap->arr[i]) {
        swap(&minHeap->arr[parent(i)], &minHeap->arr[i]);
        i = parent(i);
    }
}

// 最小堆化操作，用於維護最小堆性質
void minHeapify(MinHeap* minHeap, int i) {
    int smallest = i;
    int left = leftChild(i);
    int right = rightChild(i);

    // 找到左右子節點中的最小值
    if (left < minHeap->size && minHeap->arr[left] < minHeap->arr[smallest]) {
        smallest = left;
    }
    if (right < minHeap->size && minHeap->arr[right] < minHeap->arr[smallest]) {
        smallest = right;
    }

    // 如果最小值不是當前節點，則交換它們並遞歸調整
    if (smallest != i) {
        swap(&minHeap->arr[i], &minHeap->arr[smallest]);
        minHeapify(minHeap, smallest);
    }
}

// 從最小堆中獲取並刪除最小值
int extractMin(MinHeap* minHeap) {
    if (minHeap->size <= 0) {
        printf("Heap is empty. Cannot extract minimum value.\n");
        return -1;
    }
    if (minHeap->size == 1) {
        minHeap->size--;
        return minHeap->arr[0];
    }

    // 將最後一個元素移到最小值的位置，然後對堆進行最小堆化操作
    int root = minHeap->arr[0];
    minHeap->arr[0] = minHeap->arr[minHeap->size - 1];
    minHeap->size--;
    minHeapify(minHeap, 0);
    return root;
}

// 測試最小堆的功能
int main() {
    MinHeap* minHeap = createMinHeap(10);

    insert(minHeap, 5);
    insert(minHeap, 3);
    insert(minHeap, 8);
    insert(minHeap, 2);
    insert(minHeap, 7);

    printf("Min heap after insertions: ");
    for (int i = 0; i < minHeap->size; i++) {
        printf("%d ", minHeap->arr[i]);
    }
    printf("\n");

    int min = extractMin(minHeap);
    printf("Extracted minimum value: %d\n", min);

    printf("Min heap after extraction: ");
    for (int i = 0; i < minHeap->size; i++) {
        printf("%d ", minHeap->arr[i]);
    }
    printf("\n");

    return 0;
}


