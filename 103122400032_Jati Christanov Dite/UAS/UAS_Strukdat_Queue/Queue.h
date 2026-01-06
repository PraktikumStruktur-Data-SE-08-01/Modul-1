#ifndef QUEUE_H
#define QUEUE_H

const int nMaxQueue = 5;
const int nMaxStack = 5;

struct Queue {
    int info[nMaxQueue];
    int head;
    int tail;
};

struct StackHelper {
    int info[nMaxStack];
    int top;
};

void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, int x);
void dequeue(Queue &Q, int &x);
void printQueue(Queue Q);
int countQueue(Queue Q);

void createStackHelper(StackHelper &S);
bool isEmptyStackHelper(StackHelper S);
bool isFullStackHelper(StackHelper S);
void pushHelper(StackHelper &S, int x);
void popHelper(StackHelper &S, int &x);

void reverseQueue(Queue &Q);

#endif