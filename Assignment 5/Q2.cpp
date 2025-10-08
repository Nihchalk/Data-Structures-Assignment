#include <iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int a){
data=a;
next=NULL;
}
};
class List{
Node* head;
Node* tail;
public :
List(){
head=NULL;
tail=NULL;
}
void inAtBeg(int b){
  Node* newnode=new Node(b);
if (head==NULL){
head=newnode;
tail=newnode;
}
else{
newnode->next=head;
head=newnode;
}
}
void print(){
Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}
void search(int key){
Node* temp=head;
Node* prev=NULL;
int c=0;
while(head!=NULL && temp->data==key)
{
Node* del=head;
head=head->next;
delete del;
c++;
}
temp=head;
while(temp!=NULL){
if(temp->data==key)
{
prev->next=temp->next;
delete temp;
temp=prev->next;
c++;
}
else 
{
prev=temp;
temp=temp->next;
}
}
cout<<"total occurences"<<c<<endl;
}

int main(){
  List l;
l.inAtBeg(1);
l.inAtBeg(3);
l.inAtBeg(1);
l.inAtBeg(2);
l.inAtBeg(1);
l.inAtBeg(2);
l.inAtBeg(1);
cout<<"original list:"<<endl;
l.print();
l.search(1);
cout<<"Updated list:"<<endl;
l.print();
return 0;
}






