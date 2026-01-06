#ifndef STACK_H
#define STACK_H

const int nMax = 5;

struct Stack {
    int info[nMax];
    int top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, int x);
void pop(Stack &S, int &x);
void printStack(Stack S);
int findMaxInStack(Stack S);

#endif