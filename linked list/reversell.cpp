#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;


    }

};
void  creation(node* &head,int x){
    node* newnode=new node(x);
    if(head==NULL){
        head=newnode;
        }
    else{
        newnode->next=head;
        head=newnode;

    }

}
node*  reverse(node*curr,node*prev){
    if(curr==NULL){
        return prev;

    }
    node* forward=curr->next;
    curr->next=prev;
    prev=curr;
    
    return reverse(forward,curr);



}
int main(){
    node* head=NULL;
    creation(head,5);
    creation(head,6);
    creation(head,7);
    creation(head,8);
    node* prev=NULL;
    node* curr=head;
    node* head1=head;
    while(head1!=NULL){
        cout<<head1->data<<endl;
        head1=head1->next;

    }
    head1=reverse(curr,prev);
    while(head1!=NULL){
        cout<<head1->data;
        cout<<endl;
        head1=head1->next;
    }
    

}

