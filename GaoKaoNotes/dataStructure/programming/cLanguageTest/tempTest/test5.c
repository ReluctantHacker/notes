#include <stdio.h>

void Function2() {
    static int counter = 0;
    counter++;
    printf("Function2 counter: %d\n", counter);
}

void Function1() {
    Function2();
    Function2();
}

int main() {
    Function1();  // Calls Function2 twice
    Function2();  // Called again directly
    return 0;
}
