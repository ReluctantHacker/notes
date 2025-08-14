// how to call if a recursion is ended inside the recursive function?
#include <stdio.h>
#include <stdlib.h>

int recursiveFunct() {
    static int i = 0;
    if (i<10) {
        printf("%d->", i);
        i++;
        recursiveFunct();
    }
    i--;
    if (i==0) {
        printf("\nthe recursive function is ended\n");
        return 0;
    }
    return 0;
}

int main() {
    recursiveFunct();
    return 0;
}
