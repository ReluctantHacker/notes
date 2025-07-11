// this is a test for priority queue example with students's id and names(simplest array method)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stdArrLength 6
#define name_max_length 10

typedef struct student {
    int id;
    char name[name_max_length];
} student;

typedef struct student_queue {
    int queue_size;
    student std_array[stdArrLength];
} student_queue;

void enqueue(student_queue *std_que, student *std) {
    if (std_que->queue_size > stdArrLength) {
        printf("the queue is already full\n");
        return;
    }
    (std_que->queue_size)++;
    (std_que->std_array)[std_que->queue_size-1] = *std;
    return;
}

void dequeue(student_queue *std_que) {
    if (std_que->queue_size <= 0) {
        printf("The queue is already empty\n");
        return;
    }
    int maxIndex = 0;
    for (int i = 0; i < std_que->queue_size; i++) {
        if ((std_que->std_array)[i].id > (std_que->std_array)[maxIndex].id) {
            maxIndex = i;
        }
    }
    student dequeue_student = (std_que->std_array)[maxIndex];
    for (int i = maxIndex; i < std_que->queue_size-1; i++) {
        (std_que->std_array)[i] = (std_que->std_array)[i+1];
    }

    (std_que->queue_size)--;

    printf("dequeue_student->id: %d\n", dequeue_student.id);
    printf("dequeue_student->name: %s\n", dequeue_student.name);
    return;
}

int main() {
    student_queue *test_std_que = (student_queue *)malloc(sizeof(student_queue));
    test_std_que->queue_size = 0;

    student *studentA = (student *)malloc(sizeof(student));
    studentA->id = 3;
    strcpy(studentA->name, "Peter");
    enqueue(test_std_que, studentA);

    student *studentB = (student *)malloc(sizeof(student));
    studentB->id = 7;
    strcpy(studentB->name, "Sandra");
    enqueue(test_std_que, studentB);


    student *studentC = (student *)malloc(sizeof(student));
    studentC->id = 2;
    strcpy(studentC->name, "Thomas");
    enqueue(test_std_que, studentC);

    dequeue(test_std_que);
    dequeue(test_std_que);
    dequeue(test_std_que);
    dequeue(test_std_que);
    dequeue(test_std_que);
    return 0;
}

