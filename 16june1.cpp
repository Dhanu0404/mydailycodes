#include<iostream>
using namespace std;

class node{
public :
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
 

};
void insertinmiddle(node* &head,int val,int i){
    
    node* n=new node(val);
    node* temp=head;
    if(i==0){
     n->next=temp;
     head=n;
     return ;

    }
    while(i!=1){
        temp=temp->next;
        i--;

    }
    n->next=temp->next;
    temp->next=n;

}
void insertattail(node* &head,int val ){
    
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    node* head=NULL;
    insertattail(head,1);
     insertattail(head,2);
      insertattail(head,3);
      insertattail(head,4);
      insertinmiddle(head,5,4);
      display(head);

      return 0;
    
    
}