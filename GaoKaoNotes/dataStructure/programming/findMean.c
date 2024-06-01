#include <stdio.h>
#include <stdlib.h>

// 比較函數，用於qsort函數排序
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 函數原型
double findMedian(int arr[], int n);

int main() {
    int arr[] = {3, 1, 4, 2, 5}; // 陣列
    int n = sizeof(arr) / sizeof(arr[0]); // 陣列長度

    // 調用函數，找到中位數
    double median = findMedian(arr, n);

    // 輸出結果
    printf("中位數為：%f\n", median);

    return 0;
}

// 函數定義
double findMedian(int arr[], int n) {
    // 對陣列進行排序
    qsort(arr, n, sizeof(int), compare);

    // 如果陣列長度是偶數
    if (n % 2 == 0) {
        return (double)(arr[n / 2 - 1] + arr[n / 2]) / 2.0; // 中位數是中間兩個數的平均值
    } 
    // 如果陣列長度是奇數
    else {
        return (double)arr[n / 2]; // 中位數是中間的數
    }
}
