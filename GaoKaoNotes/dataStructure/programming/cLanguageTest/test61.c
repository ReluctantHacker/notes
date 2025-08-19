// this is a practice for 2d-array building in c language by two different ways
#include <stdio.h>
#include <stdlib.h>

#define Rows 5
#define Cols 5

void show2dArr(int **arr) {
    for (int i=0; i<Rows; i++) {
        for (int j=0; j<Cols; j++) {
            printf("%d->", arr[i][j]);
        }
        printf("\n");
    }
    return;
}

void show2dArrX(int arr[Rows][Cols]) {
    for (int i=0; i<Rows; i++) {
        for (int j=0; j<Cols; j++) {
            printf("%d->", arr[i][j]);
        }
        printf("\n");
    }
    return;
}

int main() {
    int **arr = (int **)malloc(Rows*sizeof(int *));
    for (int i=0; i<Rows; i++) {
        arr[i] = (int *)malloc(Cols*sizeof(int));
    }
    // build test array
    for (int i=0; i<Rows; i++) {
        for (int j=0; j<Cols; j++) {
            arr[i][j] = i*i + j;
        }
    }
    show2dArr(arr);
    printf("-------------------------\n");

    // ------------------------
    int arrX[Rows][Cols];
    // build test array2
    for (int i=0; i<Rows; i++) {
        for (int j=0; j<Cols; j++) {
            arrX[i][j] = i*i + j;
        }
    }
    show2dArrX(arrX);
    return 0;
}
