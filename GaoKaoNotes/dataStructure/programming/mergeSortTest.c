// This is provided by ChatGPT
#include <stdio.h>
#include <stdlib.h>

// 合併兩個已排序的子數組
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // 創建臨時數組
    int L[n1], R[n2];

    // 拷貝數據到臨時數組 L[] 和 R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // 合併臨時數組回到 arr[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 拷貝剩餘的元素，如果有的話
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 主函數進行合併排序
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        //int mid = left + (right - left) / 2;
        int mid = (right + left) / 2; // 跟上面那行感覺效果是一樣的

        // 遞歸排序左半部分和右半部分
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // 合併已排序的兩個部分
        merge(arr, left, mid, right);
    }
}

// 打印數組元素
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// 主函數
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("給定的數組：\n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("排序後的數組：\n");
    printArray(arr, arr_size);
    return 0;
}
