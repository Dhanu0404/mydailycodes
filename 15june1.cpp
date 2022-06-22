#include<iostream>
using namespace std;

node* takeinput(){
    int data ;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;

    while(data!=-1){
        node *newnode=new node(data);
        if(head==0){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    
    }
    return head;
}