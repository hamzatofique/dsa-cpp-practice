#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val): data(val),next(nullptr){}

};
class List{
    Node* head;
    Node* tail;
    public:
    List():head(nullptr),tail(nullptr){}
    void push_front(int val){
        Node* newNode=new Node(val);//creates new node
        if(head==nullptr){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }

    }
    void print()const{
        Node* temp= head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;

        }
        cout<<"NULL"<<endl;;
    }

};
int main(){
    List l1;
    l1.push_front(1);   
    l1.push_front(2);
    l1.push_front(3);
    l1.print();

}