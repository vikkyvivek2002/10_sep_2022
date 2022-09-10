#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};
int main()
{
	struct Node* head;
	struct Node* one = new Node();
	struct Node* two = new Node();
	struct Node* three = new Node();
	struct Node* four = new Node();

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;

    one->next = two;
    two->next = three;
    three->next = four;

    head  = one;
    while(head){
    	cout<<head->data<<" ";
    	head = head->next;
    }
    cout<<"\n";
    head = one;
    struct Node* temp = NULL;
    while(head != NULL){
    	Node* nn = head->next;
    	head->next = temp;
    	temp = head;
    	head = nn;
    }
    while(temp != NULL){
    	cout<<temp->data<<" ";
    	temp = temp->next;
    }

}