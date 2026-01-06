#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue Q;
    createQueue(Q);

    enqueue(Q, 7);
    enqueue(Q, 15);
    enqueue(Q, 3);
    enqueue(Q, 20);
    enqueue(Q, 8);
    
    cout << "Elemen queue: ";
    printQueue(Q);
    
    cout << "Jumlah elemen dalam Queue: " << countQueue(Q) << endl;

    reverseQueue(Q);
    cout << "Reverse queue: ";
    printQueue(Q);
    
    return 0;
}