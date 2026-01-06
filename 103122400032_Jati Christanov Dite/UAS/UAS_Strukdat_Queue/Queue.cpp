#include <iostream>
#include "queue.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = 0;
}

bool isEmptyQueue(Queue Q) {
    return Q.head == Q.tail;
}

bool isFullQueue(Queue Q) {
    return Q.tail == nMaxQueue;
}

void enqueue(Queue &Q, int x) {
    if (!isFullQueue(Q)) {
        Q.info[Q.tail] = x;
        Q.tail++;
    } else {
        cout << "Queue penuh!" << endl;
    }
}

void dequeue(Queue &Q, int &x) {
    if (!isEmptyQueue(Q)) {
        x = Q.info[Q.head];
        for (int i = Q.head; i < Q.tail - 1; i++) {
            Q.info[i] = Q.info[i + 1];
        }
        Q.tail--;
    } else {
        cout << "Queue kosong!" << endl;
    }
}

void printQueue(Queue Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
    } else {
        for (int i = Q.head; i < Q.tail; i++) {
            cout << Q.info[i];
            if (i < Q.tail - 1) cout << ",";
        }
        cout << endl;
    }
}

int countQueue(Queue Q) {
    return Q.tail - Q.head;
}

void createStackHelper(StackHelper &S) {
    S.top = -1;
}

bool isEmptyStackHelper(StackHelper S) {
    return S.top == -1;
}

bool isFullStackHelper(StackHelper S) {
    return S.top == nMaxStack - 1;
}

void pushHelper(StackHelper &S, int x) {
    if (!isFullStackHelper(S)) {
        S.top++;
        S.info[S.top] = x;
    }
}

void popHelper(StackHelper &S, int &x) {
    if (!isEmptyStackHelper(S)) {
        x = S.info[S.top];
        S.top--;
    }
}

// ========== REVERSE QUEUE FUNCTION ==========
void reverseQueue(Queue &Q) {
    StackHelper tempStack;
    createStackHelper(tempStack);
    int temp;
    
    while (!isEmptyQueue(Q)) {
        dequeue(Q, temp);
        pushHelper(tempStack, temp);
    }
    
    while (!isEmptyStackHelper(tempStack)) {
        popHelper(tempStack, temp);
        enqueue(Q, temp);
    }
}