#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
     data=x;
     next=NULL;
    }
};
//function to create a linked list from vector
Node *createlinkedlist(const vector<int>&arr){
    Node* head=NULL;
    Node* current=NULL;
    for(int i=0;i<arr.size();i++)
    {
        Node* newNode=new Node(arr[i]);
        if(head==NULL){
            head=current=newNode;
        }
        else{
            current->next=newNode;
            current=newNode;
        }
    }
    return head;
}
void printlist(Node* head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
vector<int>arr;
for(int i=0;i<arr.size();++i)
{
    cin>>arr[i];
}
Node *head=createlinkedlist(arr);
cout<<"Linked list:";
printlist(head);
return 0;
}