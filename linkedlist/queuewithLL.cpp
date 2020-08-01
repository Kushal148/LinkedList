#include "linkedListheader.h"

void insert(int newdata){
	node *newNode = new node(newdata);

	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
			tail->next= newNode;
			tail = newNode;
		}
}

void deleteElement(){
	node* current = head;

	if(head == NULL){
		return;
	}
	else{
		current = head;
		head = head->next;
		current = NULL;
	}
}

void printQueue(node* head){
	
	if(head == NULL){
		cout<<"list is  empty";
	}
	
	while(head!= NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

int main(){	
	int choice;
	bool con = true;
	do {
		cout<<"\nto insert enter 1:\nto delete enter 2: \nto display stack enter 3: \nto exit enter any key:  ";
		cin>>choice;
		switch(choice){
			case 1:
				int data;
				cin>>data;
				insert(data);
				break;
			case 2:
				deleteElement();
				break;
			case 3:
				printQueue(head);
				break;
			default:
				con = false;
				break;
		};
	} while (con);
}


