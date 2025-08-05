#include<iostream>
using namespace std;
class QueueArr{
    public:
    int *arr;
    int rear,front;
    int noOfElements;
    int size;   
    public:
    QueueArr(int s){
        arr=new int[s];
        size=s;
        noOfElements=0;
        rear=-1;
        front=0;
    }
    void Enqueue(int value){
        if(isFull()){
            cout<<"Queue Overflow";
            return;
        }
        rear++;
        arr[rear]=value;
        noOfElements++;
    }
    int Dequeue(){
        if(isEmpty()){
            cout<<"Queue Underflow";
            return 0;
        }
        int val=arr[front];
        if(front==(size-1)){
            front=0;
        }
        else{
            front++;
            noOfElements--;
            return val;
        }
    }
    bool isFull(){
        if(noOfElements==size){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty(){
        if(noOfElements==0){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){}