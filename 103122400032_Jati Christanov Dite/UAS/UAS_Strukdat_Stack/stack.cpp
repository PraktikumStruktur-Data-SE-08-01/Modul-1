#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack &S) {
    S.top = -1;
}

bool isEmpty(Stack S) {
    return S.top == -1;
}

bool isFull(Stack S) {
    return S.top == nMax - 1;
}

void push(Stack &S, int x) {
    if (!isFull(S)) {
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "penuh" << endl;
    }
}

void pop(Stack &S, int &x) {
    if (!isEmpty(S)) {
        x = S.info[S.top];
        S.top--;
    } else {
        cout << "kosong" << endl;
    }
}

void printStack(Stack S) {
    if (isEmpty(S)) {
        cout << "kosong" << endl;
    } else {
        cout << "Stack: ";
        for (int i = S.top; i >= 0; i--) {
            cout << S.info[i];
            if (i > 0) cout << ", ";
        }
        cout << endl;
    }
}

int findMaxInStack(Stack S) {
    int max = -999999;
    
    if (!isEmpty(S)) {
        for (int i = 0; i <= S.top; i++) {
            if (S.info[i] > max) {
                max = S.info[i];
            }
        }
    }
    
    return max;
}