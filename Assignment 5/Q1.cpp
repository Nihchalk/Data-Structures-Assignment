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
Node* head;
Node* tail;
public:
List(){
head=NULL;
tail=NULL;
}
void inAtBeg(int a){
  Node* newnode=new Node(a);
  if (head==NULL){
head=newnode;
tail=newnode;
  }
else{
newnode->next=head;
head=newnode;
}
}
void inAtEnd(int a){
  Node* newnode=new Node(a);
if (head==NULL){
head=newnode;
tail=newnode;
  }
else{
tail->next=newnode;
  tail=newnode;
}
}
void inAtPos(int val, int pos){
if (pos < 0) {
  cout<<"invalid"; 
  return; }
if (pos == 0)
{ inAtBeg(val);
 return; }
Node* temp = head;
for (int i=0; i < pos-1; ++i)
  temp = temp->next;
if (temp == NULL)
{ cout << "position out of range"; 
 return; }
Node* newnode = new Node(val);
newnode->next = temp->next;
temp->next = newnode;
if (newnode->next == NULL) tail = newnode;
}
void delAtBeg(){
  if(head==NULL)
    cout<<"empty list";
else{
Node* temp=head;
head=head->next;
delete temp;
}
}
void delAtEnd(){
   if(head==NULL)
    cout<<"empty list";
else{
Node* temp=head;
  while(temp->next!= tail){
    temp=temp->next;
  }
temp->next=NULL;
delete tail;
  tail=temp;
}
}
void display(){
  Node*temp;
temp=head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}

int main() {
List l;
cout << "Insert at beginning:" << endl;
l.inAtBeg(10);
l.inAtBeg(20);
l.inAtBeg(30); // list: 30->20->10
l.display();
cout << "Insert at end:" << endl;
l.inAtEnd(40);
l.inAtEnd(50); // list: 30->20->10->40->50
l.display();
cout << "Insert at position 2 (0-based):" << endl;
l.inAtPos(99, 2); // list: 30->20->99->10->40->50
l.display();
cout << "Delete at beginning:" << endl;
l.delAtBeg(); // removes 30
l.display();
cout << "Delete at end:" << endl;
l.delAtEnd(); // removes 50
l.display(); //20->99->10->40
return 0;
}
   

