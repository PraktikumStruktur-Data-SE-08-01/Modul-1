#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S;
    createStack(S);

    push(S, 7);
    push(S, 15);
    push(S, 3);
    push(S, 20);
    push(S, 8);
    

    printStack(S);
    cout << "\nStack setelah findMax: " << endl;
    int maxElement = findMaxInStack(S);
    cout << "Elemen terbesar dalam stack: " << maxElement << endl;
    
    
    return 0;
}