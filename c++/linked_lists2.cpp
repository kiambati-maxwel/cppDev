#include<iostream>
using namespace std;
class node
  {  
private:
		char name[20];    // Name of up to 20 letters
		int age;          // D.O.B. would be better
		float height;     // In metres
		node *nxt;// Pointer to next node
		node *start_ptr;

public:
	node() {start_ptr = NULL;} //this is a conatructor
	void add_node_at_end();  // this is a method
	void display_list();
	void delete_start_node(); 
	void delete_end_node(); 
	void move_current_on();
	void move_current_back();

  };


node *current;		 // Used to move along the list
int option = 0;
int main(){
	cout << "Please enter the name of the person: ";
cin >> temp->name;
cout << "Please enter the age of the person : ";
cin >> temp->age;
cout << "Please enter the height of the person : ";
cin >> temp->height;
temp->nxt = NULL;

}

