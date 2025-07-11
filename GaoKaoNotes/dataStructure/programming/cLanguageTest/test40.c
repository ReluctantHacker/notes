// this is a test for round-robin scheduling with flag emthod
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define task_num 3
#define quantum 1

typedef struct tasks {
    int task_time[task_num];
} tasks;

void scheduling(tasks *tsk) {
    int i = 0;
    int done_flag[task_num] = {false}; // you actually don't need this flag at all because (tsk->task_time)[i] = 0 means true, != 0 means false already!
    int task_done = 0; 

    while (task_done < task_num) {
        if (!(done_flag[i])) {
            if ((tsk->task_time)[i] == 0) {
                done_flag[i] = true;
                task_done += 1;
            } else {
                printf("task_%d\n", i);
                (tsk->task_time)[i] -= quantum;
            }
        }
        i = (i + 1) % task_num;
    }
    return;
}

int main() {
    tasks *test_task = (tasks *)malloc(sizeof(tasks));
    (test_task->task_time)[0] = 3;
    (test_task->task_time)[1] = 5;
    (test_task->task_time)[2] = 2;

    scheduling(test_task);
    return 0;
}

