
#include<cstdlib>
#include<iostream>

#include "list.h"

using namespace std;

list::list(){
	head = NULL;
	current = NULL;
	temp = NULL;
}
void list::addnode(int addData){
	nodeptr= new node;
	n-> = NULL;
	n-> = addData;
	
	if(head != NULL){
		current = head;
		while(current->next != NULL){
			current=current->next;
		}
		current->next =n;
	}
	else
	{
	 head=n;	
	}
}

void list::deleteNode(int deleteData){
 	nodeptr delptr = NULL;
 	temp = head;
 	current = head;
 	while(current != NULL && current->deleteData)
	 {
	 	 temp = current;
	 	 current = current->next; 
	 }
	 if(current==NULL
	 	cout<<deleteData<<" was not int the list"<<endl;
	 	delete delptr;
	 }
 		else{
 			delptr = current;
 			current = current->next;
 			temp->next=current;
 			delete delptr;
 			cout<<"the value "<< delData<< "was deleted \n";
		 }
	 }
}

