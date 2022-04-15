#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;


        node(int val){
            data = val;
            next=NULL;
        }



};
//
//we are taking reference of head as we are modifying head here
void insertAtTail(node* &head, int val){

    node* n = new node(val);

    
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
//not taking reference of head as we arent modifying head here
void display(node* head){

    node* temp=head;;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;

}


int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

return 0;
}