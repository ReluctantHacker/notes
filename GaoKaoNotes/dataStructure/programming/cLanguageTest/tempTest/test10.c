#include <stdio.h>

#define MAX 10

int main() {
    int n, bt[MAX], rem_bt[MAX], wt[MAX] = {0}, tat[MAX];
    int quantum, time = 0, done;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i]; // initialize remaining burst time
    }

    printf("Enter time quantum: ");
    scanf("%d", &quantum);

    // Round-Robin scheduling loop
    do {
        done = 1;
        for (int i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                done = 0;
                if (rem_bt[i] > quantum) {
                    time += quantum;
                    rem_bt[i] -= quantum;
                } else {
                    time += rem_bt[i];
                    wt[i] = time - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }
    } while (!done);

    // Calculate turnaround time
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];

    // Display results
    printf("\nProcess\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++)
        printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);

    return 0;
}
