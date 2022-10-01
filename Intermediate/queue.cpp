// My Github name : Anmol-Prasad
// My Github profile : https://github.com/Anmol-Prasad
// 8. Write a program to perform queue operations. The program should contain the following functions -
// -> add - for adding an item to queue -> pop - for delete an item from queue -> show - for showing all the items in queue in a tidy way -> clear - for cleaning the queue the queue should be of definite size which could deal with overflow as well as underflow

#include <iostream>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    void Add(int num);
    void Pop();
    void Show();
    void Clear();
    Queue(int n);
};

Queue::Queue(int n)
{
    size = n;
    front = rear = -1;
    Q = new int[n];
}

void Queue::Add(int num)
{
    if (rear == size - 1)
    {
        cout << "Queue Overflow";
    }
    else
    {
        rear++;
        Q[rear] = num;
    }
}

void Queue::Pop()
{
    if (front == rear)
    {
        cout << "Empty Queue";
    }
    else
    {
        Q[++front] = -1;
    }
}

void Queue::Show()
{
    int i = 0;
    while (i < size)
    {
        if (Q[i] != -1)
            cout << Q[i] << " ";
        i++;
    }
}

void Queue::Clear()
{
    size = 0;
    front = rear = -1;
    Q = nullptr;
}

int main()
{
    int A[] = {1, 3, 5, 7, 9};
    Queue q(5);
    for (int i = 0; i < 5; i++)
    {
        q.Add(A[i]);
    }
    q.Show();
}