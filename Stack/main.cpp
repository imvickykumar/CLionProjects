/* C++ program to implement basic stack
   operations */
#include<bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack
{
    int top;
public:
    int a[MAX];    //Maximum size of Stack

    Stack()  { top = -1; }//initialization of top data member using constructor;


    void push(int x){
        if (top >= (MAX-1))
        {
            cout << "Stack Overflow";

        }
        else
        {
            a[++top] = x;

        }
    }

    int pop(){
        if (top < 0)
        {
            cout << "Stack Underflow";
            return 0;
        }
        else
        {
            int x = a[top--];
            return x;
        }
    }

    void isEmpty(){
        if(top < 0){
            cout<<"Stack is Empty";
        }
        else{
            cout<<"Stack is not Empty";
        }
    }

    int display(){
        if(MAX==-1){
            cout<<"Stack is empty";
        }
        else{
            cout<<"Contents of Stack are ";
            for(int i=0;i<=top;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
    }
};



int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "top item "<< s.pop() <<" is Popped from stack\n";

    s.display();

    s.isEmpty();

    return 0;
}
