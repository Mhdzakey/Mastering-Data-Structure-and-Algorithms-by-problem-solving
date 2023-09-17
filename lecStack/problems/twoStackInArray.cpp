#include <iostream>
using namespace std;
class Stack{
    //properties
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    //behavior
    Stack(int s){
        this->size = s;
        this->top1 = -1;
        this->top2 = s;
        arr = new int[s];
    }
    
    void push1(int element){
        if(top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    
    }
    void push2(int element){
        if(top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    
    }

    int pop1(){
     if(top1 >= 0)
     {
        int ans = arr[top1];
        top1--;
        return ans;
     }   
     else
     {
        return -1;

     }

    }

    int pop2(){
     if(top2 < size)
     {
        int ans = arr[top2];
        top2++;
        return ans;
     }   
     else
     {
        return -1;

     }

    }
/*
    int peek(){
        if(top >= 0)
        {
            return arr[top];
        }
        else{
            cout << "Stack is empty " << endl;
            return -1; 
        }

    }
    bool isEmpty(){
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;   
        }

    }
    */
   
};
int main()
{
   
   
   


    
    }