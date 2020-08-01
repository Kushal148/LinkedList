#include "linkedListheader.h"

void insertBegining(int newdata){
	node *temp = new node(newdata);
	if(head == NULL){
		head = temp;
		tail = temp;
		
	}
	else{
			temp->next = head;
			head = temp;
		}
}
void insertEnd(int newdata){
	node *temp = new node(newdata);

	if(head == NULL){
		head = temp;
		tail = temp;
	}
	else{
			tail->next= temp;
			tail = temp;
		}
}

void deleteElement(int data){
	node *prev  = NULL;
	node *temp = head;
	if(head == NULL){
		cout<<"\nlist is  empty";
	}
	
	if(head->data == data){
		head = head->next;
	}
	else{
	
		while(temp!= NULL && temp->data!=data){
		prev = temp;
		temp = temp->next;		
		}
		if(temp->data == data){
		
		//else{
		prev->next = temp->next;
		temp = NULL;
		//}
		}
	
	}
}
void display(node* head){
	
	if(head == NULL){
		cout<<"\nlist is  empty";
	}
	
	while(head!= NULL){
		cout<<head->data;
		head = head->next;
	}
	
}	

void middleInsert(int index, int newdata){
	node *newNode = new node(newdata);
	node * temp = head;
	if(temp == NULL){
		head = newNode;
	}
	while(temp){
		index--;
		if(index == -1){
			newNode->next = temp->next;
			temp->next = newNode;
		}
		temp = temp->next;		
	}
}
//node* insert(int newdata);
int main(){
	int choice;
	bool loop = true;
	do {
		cout<<"\nto insert in the begining enter 1:\nto insert at the end enter 2: \nto insert in middle enter 3: \nto delete an element enter 4: \nto display stack enter 5: \nto exit enter any key:  ";
		cin>>choice;
		switch(choice){
			case 1:
				int data;
				cin>>data;
				insertBegining(data);
				break;
			case 2:
				int Data;
				cin>>Data;
				insertEnd(Data);
				break;
			case 3:
				int index, newdata;
				cout<<"\nenter index: ";   
				cin>>index;
				cout<<"\nenter data";
				cin>>newdata;
				middleInsert(index,newdata);
				break;
			case 4:
				int ndata;
				cout<<"\nenter data";
				cin>>ndata;
				deleteElement(ndata);
				break;
			case 5:
				display(head);
				break;
			default:
				loop = false;
				break;
		};
	} while (loop);
return 0;
}

