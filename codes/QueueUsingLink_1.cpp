#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int valve){
        data=valve;
        next=NULL;
    }
};
class QueueLink{
    private:
    Node*head;
    Node*front,*rear;
    int length;
    QueueLink(){
        head==NULL;
        front=rear=NULL;
        length=0;
    }
    void Enqueue(int valve){
        Node*n=new Node(valve);
        if(head==NULL){
            head=front=rear=n;
            length++;
        }
        else{
            rear->next=n;
            rear=rear->next;
            length++;
        }
    }
    void Dequeue(){
        if(front==NULL){
            cout<<"Queue Underflows.... ";
            return;
        }
        else{
            Node*vamp=front;
            cout<<front->data;
            front=front->next;
            delete vamp;    
            length--;
        }
    }
    bool isEmpty(){
        if(front==NULL){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    return 0;
}