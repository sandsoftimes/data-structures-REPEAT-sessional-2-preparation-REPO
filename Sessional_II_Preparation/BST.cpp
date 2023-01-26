#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left,*right;
    Node(int valve){
        data=valve;
        left=right=NULL;
    }
};
class BinarySTree{
    private:
    Node*root;
    public:
    BinarySTree(){
        root=NULL;
    }
    void insertion(int valve){
        Node*n=new Node(valve);
        Node*nodeptr;
        if(root==NULL)
        root=n;
        else{
            nodeptr=root;
            while(nodeptr!=NULL){
                if(valve<nodeptr->data){
                    if(nodeptr->left)
                    nodeptr=nodeptr->left;
                    else{
                        nodeptr->left=n;
                        break;
                    }
                }
                else if(valve>nodeptr->data){
                    if(nodeptr->right){
                        nodeptr=nodeptr->right;
                    }
                    else{
                        nodeptr->right=n;
                        break;
                    }
                }
                else{
                    cout<<"Duplicate Value Found In Tree.";
                    break;
                }
            }
        }
    }
    void deletion(Node*&nodeptr){
        Node*TempNodePtr;
        if(nodeptr==NULL){
            cout<<"Cannot Delete An Empty Node";
        }
        else if(nodeptr->right==NULL){
            TempNodePtr=nodeptr;
            nodeptr=nodeptr->left;
            delete TempNodePtr;
        }
        else if(nodeptr->left==NULL){
            TempNodePtr=nodeptr;
            nodeptr=nodeptr->right;
            delete TempNodePtr;
        }
        else{
            TempNodePtr=nodeptr->right;
            while(TempNodePtr->left){
                TempNodePtr=TempNodePtr->left;
                TempNodePtr->left=nodeptr->left;
                TempNodePtr=nodeptr;
                nodeptr=nodeptr->right;
                delete TempNodePtr;
            }
        }
    }
    void inOrder(Node*root){
        cout<<root->data;
        inOrder(root->left);
        inOrder(root->right);
    }
    void preOrder(Node*root){
        inOrder(root->left);
        cout<<root->data;
        inOrder(root->right);
    }
    void postOrder(Node*root){
        inOrder(root->left);
        inOrder(root->right);
        cout<<root->data;
    }
    void tree_clear(Node*nodeptr){
        if(nodeptr!=NULL){
            tree_clear(nodeptr->left);
            tree_clear(nodeptr->right);
            delete nodeptr;
        }
    }
    bool search(int num){
        Node*nodeptr=root;
        while(nodeptr){
            if(nodeptr->data==num)
            return true;
            else if(num<nodeptr->data){
                nodeptr=nodeptr->left;
            }
            else if(num>nodeptr->data){
                nodeptr=nodeptr->right;
            }
        }
        return false;
    }
};
int main(){
    return 0;
}