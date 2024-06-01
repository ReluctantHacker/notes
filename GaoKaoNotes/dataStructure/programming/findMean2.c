#include <stdio.h>

// 函數原型
double findMedian(int arr[], int n);

// 函數定義
double findMedian(int arr[], int n) {
    // 如果陣列長度是奇數
    if (n % 2 != 0) {
        int k = n / 2;
        double median = arr[k]; // 中位數是中間的數
        return median;
    } 
    // 如果陣列長度是偶數
    else {
        int k1 = n / 2 - 1;
        int k2 = n / 2;
        double median = (arr[k1] + arr[k2]) / 2.0; // 中位數是中間兩個數的平均值
        return median;
    }
}

int main() {
    int arr[] = {3, 1, 4, 2, 5}; // 陣列
    int n = sizeof(arr) / sizeof(arr[0]); // 陣列長度

    // 調用函數，找到中位數
    double median = findMedian(arr, n);

    // 輸出結果
    printf("中位數為：%f\n", median);

    return 0;
}
