#include <iostream>
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
public:
Node*head;
List(){
head=NULL;
}
void inAtEnd(int val){
Node* newnode=new Node(val);
  if(head==NULL){
head=newnode;
  }
  else{
Node* temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newnode;
  }
}
void middle(){
  if(head==NULL){
cout<<"empty"<<endl;
    return;
  }
Node* slow=head;
Node* fast=head;
while(fast!=NULL && fast->next!=NULL){
slow=slow->next;
fast=fast->next->next;
}
cout<<"Middle element is "<<slow->data<<endl;
}
void display(){
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
l.inAtEnd(5);

l.display();
l.middle();

return 0;
}



