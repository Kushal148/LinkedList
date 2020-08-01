#include "linkedListheader.h"

void insert(int newdata){
	node* newNode = new node(newdata);
//	newNode->next = newNode;
	if(tail == NULL){
		//head = newNode;
		tail = newNode;	
		tail->next = tail;	
	}
	else{
		//newNode->next = head;
		newNode->next = tail->next;
		tail->next = newNode;
		
	}
}

void remove(){
	node* tempNode;
	if(tail == NULL){
		cout<<"\nqueue is empty\n";
		return;
	}
	if(tail == tail->next){
		cout<<"\ndeleted node:"<<tail->data;
		tail = NULL;
	}
	else{
		tempNode = tail->next;
		cout<<"\ndeleted node: "<<tempNode->data;
		tail->next = tempNode->next;
		tempNode = NULL;
	}
	
}


void display(node* head){
	node* temp = head;
	if(tail == NULL){
		cout<<"\nqueue is empty";
	}
	else{
			temp = tail->next;
			do{
				cout<<temp->data<<" ";
				temp = temp -> next;
	
			}while(temp!= tail->next);	
			}
}


int main(){	
	int choice;
	bool con = true;
	do {
		cout<<"\nto insert enter 1:\nto delete enter 2: \nto display queue enter 3: \nto exit enter any key:  ";
		cin>>choice;
		switch(choice){
			case 1:
				int data;
				cin>>data;
				insert(data);
				break;
			case 2:
				remove();
				break;
			case 3:
				display(head);
				break;
			default:
				con = false;
				break;
		};
	} while (con);
}

