#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node*next;
    Node(int vault){
        value=vault;
        next=NULL;
    }
};
class StackLink{
    private:
    Node*head;
    int length;
    public:
    StackLink(){
        head=NULL;
        length=0;
    }
    void push(int vault){
        Node*n=new Node(vault);
        if(head==NULL){
            head=n;
            return;
        }
        n->next=head;
        head=n;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack Underflows";
            return;
        }
        Node*temp=head;
        head=head->next;
        delete temp;
    }
    void peek(){
        cout<<head->value;
    }
    void isEmpty(){
        if(head==NULL)
        cout<<"Stack Underflows";
        return;
    }
    void Display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->value;
            temp=temp->next;
        }
    }
};
int main(){}