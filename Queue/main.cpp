/* Simple Queue Program Using Class and Member Functions in C++*/
#include <iostream>
#include<stdlib.h>

#define MAX_SIZE 100

using namespace std;

class Queue {
private:
    int item, i;
    int arr_queue[MAX_SIZE];
    int rear;
    int front;

public:
    //constructor of queue initializing the values of rear and front;
    Queue() {
        rear = 0;
        front = 0;
    }

    void enqueue() {
        if (rear == MAX_SIZE)
            cout << "\n## Queue Reached Max!";
        else {
            cout << "\nEnter The Value to be Insert : ";
            cin>>item;
            cout << "\n## Position : " << rear + 1 << " , Insert Value  : " << item;
            arr_queue[rear++] = item;
        }
    }

    void Dequeue() {
        if (front == rear)
            cout << "\n## Queue is Empty!";
        else {
            cout << "\n## Position : " << front << " , Remove Value  :" << arr_queue[front];
            front++;
        }
    }

    void display() {
        cout << "\n## Queue Size : " << (rear - front);
        for (i = front; i < rear; i++)
            cout << "\n## Position : " << i << " , Value  : " << arr_queue[i];
    }
};

int main() {
    int choice, exit_p = 1;
    Queue obj;
    cout << "\nQueue implementation using class";
    do {
        cout << "\n\n Queue Main Menu";

        cout << "\n1.enqueue 2.Dequeue 3.Display :-Others to exit";
        cout << "\nEnter Your Choice : ";
        cin>>choice;
        switch (choice) {
            case 1:
                obj.enqueue();
                break;
            case 2:
                obj.Dequeue();
                break;
            case 3:
                obj.display();
                break;
            default:
                exit_p = 0;
                break;
        }
    } while (exit_p);

    return 0;
}