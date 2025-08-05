#include<iostream>
using namespace std;
#define SIZE 100
class StackArr{
    private:
    int top;
    int arr[SIZE];
    public:
    StackArr(){
        top=-1;
        int arr[SIZE];
    }
    void push(int valve){
        if(top>SIZE){
            cout<<"Stack Overflows";
            return;
        }
        top++;
        arr[top]=valve;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflows ";
            return;
        }
        cout<<arr[top];
        top--;
    }
    void Peek(){
        if(top==-1){
            cout<<"Stack Empty";
            return; 
        }
        else{
            cout<<arr[top];
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else
        return false;
    }
    void Display(){
        for(int i=top;top>=0;top--){
            cout<<arr[top];
        }
    }
};
int main(){}