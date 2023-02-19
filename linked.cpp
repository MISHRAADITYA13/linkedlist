#include<bits/stdc++.h>                       //ADI
// #include<iostream>
using namespace std;
struct Node
{
int data;
Node *next;
// Node(int x)                  //THIS IS CONSTRUCTOR WHICH MINIMIZES THE CODE AND EFFICIENT TO RUN BUT WE WILL USE 
// {                             FUNCTION INSTEAD😎😎😎😎
//   data=x;                      
//   next= NULL;
// }
};
struct Node *head=NULL,*newnode ,*temp,*temp1;
void create(int x)              //FUNCTION TO CREATE NODE DYNAMICALLY😎😎😎
{
newnode=new Node;        //newnode is the name of newnode we have created while new Node is the method to dynamically
newnode->data=x;         //create the newnode in C++ 🐬🐬🐬🐬🐬🐬
newnode->next=NULL;
if(head==NULL)
{
    temp=head=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
}
void insertatbeg(int x)         //FUNCTION FOR INSETTION AT BEGINNING🤔🤔🤔🤔
{
newnode=new Node;
newnode->data=x;
newnode->next=NULL;
if(head==NULL)
{
    head=newnode;
}
else
{
  temp=head;  
  newnode->next=temp;
  head=newnode;
}
}
void insertatend(int x)    //FUCTION TO INSERT AT THE END🙃😕🤪🤪🥵🤬
{
newnode=new Node;
newnode->data=x;
newnode->next=NULL;
if(head==NULL)
{
    head=newnode;
}
else
{
temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=newnode;
newnode->next=NULL;
}
}
void insertatspecific(int x)      //FUNCTION TO INSERT AT SPECIFIC POSITION OF LINKED LIST😏😏😏😏😏😏😏
{
newnode=new Node;
newnode->data=x;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
temp=head;
int i=1,pos;
cout<<"ENTER THE POSITION U WANT TO INSERT 🙄🙄🙄🙄🙄";
cin>>pos;
while(i<pos-1)
{
    temp=temp->next;
    i++;
}
newnode->next=temp->next;
temp->next=newnode;
}
}
void afterspecificdata(int x)
{
    newnode=new Node;
    newnode->data=x;
    newnode->next=NULL;
    int value;
    cout<<"enter the value after u want to insert😐😐😐😐😐😐😐";
    cin>>value;
    temp=head;
    while(temp->data!=value)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void deleteatbeg()        //FUNCTION FOR DELETION AT BEGINING😤😤😤😤😤😤
{
    temp=head;
    if(head==NULL)
 {
    cout<<"apun ke pas kuch nhi hai 😂😂😂😂";

 }
else if(head->next==NULL)
 {
    free(head);
 }

else
 {
    // temp=head;
 head=temp->next;
 temp->next=NULL;
 free(temp); 
 }
}
void deleteatend()             //FUNCTION TO DELETE AT END🥴🥴🥴🥴🥴🥴🥴
{
    temp=head;
    while (temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
    
}
void deleteatspecific()
{
    temp=head;
    int pos,i=1
    cout<<"ENTER THE POSITION YOU WANT TO DELETE🙂🙂🙂🙂🙂";
    while(i<pos-1)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=NULL;
    free (temp);
}
void print()                  //FUNCTION TO PRINT THE LINKED LIST👣👣👣👣👣
{
    temp=head;
    if(head==NULL)
    {
        cout<<"EMPTY LIST 😁";
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
            
        }
    }
    
}
int main()
{
// Node *head=new Node(10);
// Node *temp=new Node(20);
// Node *temp1=new Node(30);
// head->next=temp;
// temp->next=temp1;
create(10);
create(20);
create(30);
create(40);
create(50);
insertatbeg(60);
insertatbeg(100);
insertatend(70);
insertatspecific(80);
afterspecificdata(90);
deleteatbeg();
deleteatend();
deleteatspecific();
print();
return 0;
}































