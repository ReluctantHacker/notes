// this is inspired by the test42.c code provided by copilot. When we do the round-robin scheduling, we don't actually need flag at all, here's the code below
// this is a practice for round-robin scheduling algorithm with non-continuous method without flag
#include <stdio.h>
#include <stdlib.h>

#define task_num 3
#define quantum 1

typedef struct tasks {
    int time[task_num];
} tasks;

void scheduling(tasks *tsk) {
    int i = 0;
    int done = 0;
    while (done < task_num) {
        if ((tsk->time)[i] > 0) {
            (tsk->time)[i] -= quantum;
            printf("task_%d\n", i);
            if ((tsk->time)[i] == 0) done++;
        }
        i = (i + 1) % task_num;
    }
    return;
}

int main() {
    tasks *test_tsk = (tasks *)malloc(sizeof(tasks));
    (test_tsk->time)[0] = 3;
    (test_tsk->time)[1] = 4;
    (test_tsk->time)[2] = 2;

    scheduling(test_tsk);
    return 0;
}

