// this is a test for round-robin scheduling algorithm with continuous method task_done method
#include <stdio.h>
#include <stdlib.h>

#define task_num 3
#define time_slice 1 // time quantum

typedef struct tasks {
    int task_time[task_num]; // Remaining  time for each task
} tasks;

void scheduling(tasks *tsk) {
    int i = 0;
    int  task_done = 0; // continuously accumutive 3 times
    while (1) {
        if (task_done >= 3) break;
        if ((tsk->task_time)[i] == 0) {
            task_done += 1;
            i = (i + 1) % task_num;
            continue;
        }
        (tsk->task_time)[i] -= time_slice;
        printf("task_%d\n", i+1);
        i = (i + 1) % task_num;
        task_done -= 1;
    }
    return;
}

int main() {
    tasks *test_tasks = (tasks *)malloc(sizeof(tasks));
    test_tasks->task_time[0] = 3;
    test_tasks->task_time[1] = 6;
    test_tasks->task_time[2] = 1;

    scheduling(test_tasks);
    return 0;
}


