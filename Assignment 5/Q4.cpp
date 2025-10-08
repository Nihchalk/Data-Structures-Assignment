#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int val){
data=val;
next=NULL;
}
};
class List{
Node*head;
public:
List(){
head=NULL;
}
void inAtEnd(int val){
Node* newnode=new Node(val);
  if(head==NULL){
head=newnode;
    return;
  }
Node*temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newnode;
}
void reverse(){
Node* prev=NULL;
Node* curr=head;
Node* next=NULL;

while(curr!=NULL){
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}
head=prev;
}
void print(){
Node* temp=head;
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}
};
int main(){
  List l;
l.inAtEnd(1);
l.inAtEnd(2);
l.inAtEnd(3);
l.inAtEnd(4);
cout<<"original list:";
l.print();
  
l.reverse();
  
cout<<"Reversed list";
l.print();
  
return 0;
}

