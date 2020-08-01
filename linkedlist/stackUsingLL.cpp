#include "linkedListheader.h"

void push(int newdata){
	node *temp = new node(newdata);
	if(head == NULL){
		head = temp;
		tail = temp;d
		
	}
	else{
			temp->next = head;
			head = temp;
		}
}


void pop(){
	node* current = head;

	if(head == NULL){
		cout<<"\nstack is empty";
	}
	else{
		current = head;
		head = head->next;
		current = NULL;
	}
}
void printStack(node* head){
	
	if(head == NULL){
		cout<<"\nstack is  empty";
	}
	
	while(head!= NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}


int main(){
	
	int choice;
	bool loop = true;
	do {
		cout<<"\nto push ennter 1:\nto pop enter 2: \nto display stack enter 3: \nto exit enter any key:  ";
		cin>>choice;
		switch(choice){
			case 1:
				int data;
				cin>>data;
				push(data);
				break;
			case 2:
				pop();
				break;
			case 3:
				printStack(head);
				break;
			default:
				loop = false;
				break;
		};
	} while (loop);
}
