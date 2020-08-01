#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
	
	node(int data){
		this->data = data;
		next = NULL;
	}
};

struct node* head = NULL;
struct node* tail = NULL;

