// this is a practice for double ended queue with circular array method
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 6

typedef struct deque {
    int head;                    // index just before first element
    int tail;                    // index of last element
    int data[ARRAY_LEN];
} deque;

// initialize to empty
void init_deque(deque *d) {
    d->head = 0;
    d->tail = 0;
}

// is empty?
int is_empty(deque *d) {
    return d->head == d->tail;
}

// is full?  (one slot must remain empty to distinguish full vs empty)
int is_full(deque *d) {
    return ((d->tail + 1) % ARRAY_LEN) == d->head;
}

// insert at end (back)
void push_back(deque *d, int v) {
    if (is_full(d)) {
        printf("deque is full, cannot push_back(%d)\n", v);
        return;
    }
    d->tail = (d->tail + 1) % ARRAY_LEN;
    d->data[d->tail] = v;
}

// insert at front
void push_front(deque *d, int v) {
    if (is_full(d)) {
        printf("deque is full, cannot push_front(%d)\n", v);
        return;
    }
    // move head backwards
    d->data[d->head] = v;
    d->head = (d->head - 1 + ARRAY_LEN) % ARRAY_LEN;
}

// remove from front
void pop_front(deque *d) {
    if (is_empty(d)) {
        printf("deque is empty, cannot pop_front()\n");
        return;
    }
    // head points one before the first, so advance head
    d->head = (d->head + 1) % ARRAY_LEN;
}

// remove from back
void pop_back(deque *d) {
    if (is_empty(d)) {
        printf("deque is empty, cannot pop_back()\n");
        return;
    }
    // just move tail backward
    d->tail = (d->tail - 1 + ARRAY_LEN) % ARRAY_LEN;
}

// print contents from front → back
void show_deque(deque *d) {
    if (is_empty(d)) {
        printf("deque is empty\n");
        return;
    }
    int idx = (d->head + 1) % ARRAY_LEN;
    while (1) {
        printf("%d ", d->data[idx]);
        if (idx == d->tail) break;
        idx = (idx + 1) % ARRAY_LEN;
    }
    printf("\n");
}

int main() {
    /*
    deque d;
    init_deque(&d);

    push_back(&d, 10);
    push_back(&d, 20);
    push_front(&d, 5);
    push_back(&d, 30);
    show_deque(&d);    // should print: 5 10 20 30

    pop_front(&d);
    show_deque(&d);    // 10 20 30

    pop_back(&d);
    show_deque(&d);    // 10 20

    // fill to capacity
    push_back(&d, 40);
    push_front(&d, 1);
    push_back(&d, 50); // now full
    show_deque(&d);    // 1 10 20 40 50

    // attempting one more should error
    push_back(&d, 60);
    */
    deque d;
    init_deque(&d);
    push_back(&d, 10);
    show_deque(&d);
    push_back(&d, 20);
    show_deque(&d);
    push_back(&d, 10);
    show_deque(&d);
    push_back(&d, 20);
    show_deque(&d);
    push_back(&d, 10);
    show_deque(&d);
    push_back(&d, 20);
    show_deque(&d);

    pop_front(&d);
    show_deque(&d);
    pop_front(&d);
    show_deque(&d);
    pop_front(&d);
    show_deque(&d);
    pop_front(&d);
    show_deque(&d);
    pop_front(&d);
    show_deque(&d);
    pop_front(&d);
    show_deque(&d);

    push_front(&d, 31);
    show_deque(&d);
    push_front(&d, 32);
    show_deque(&d);
    push_front(&d, 33);
    show_deque(&d);
    push_front(&d, 34);
    show_deque(&d);

    return 0;
}


