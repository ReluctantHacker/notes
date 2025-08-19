// pascal triangle, it's a classic implement of 2d array
// build pascal triangle
#include <stdio.h>
#include <stdlib.h>

#define rows 7
#define cols 7

void buildPascal(int **arr, int levelNum) {
    for (int i=0; i<levelNum; i++) {
        arr[i][0] = arr[i][i] = 1;
        for (int j=1; j<i; j++) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    return;
}

void showPascal(int **arr, int levelNum) {
    for (int i=0; i<levelNum; i++) {
        for (int j=0; j<=i; j++) {
            printf("%d->", arr[i][j]);
        }
        printf("\n");
    }
    return;
}

int main() {
    int **arr = (int **)malloc(rows*sizeof(int *));
    for (int i=0; i<rows; i++) {
        arr[i] = (int *)malloc(cols*sizeof(int));
    }
    int testLevel = 4;
    buildPascal(arr, testLevel);
    showPascal(arr, testLevel);
    return 0;
}

