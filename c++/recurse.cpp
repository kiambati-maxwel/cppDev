 #include<iostream>
 
 using namespace std;
  
 void getPut();
 int main(){
 	
 	cout<<"please enter a line of text: \n";
 	getPut();
 	cout<<"Bye! Bye!"<<endl;
 	
 	return 0;
 	
 }
 void getPut(){
 	char c;
 	if(cin.get(c) && c!='\n')
 	 getPut();
 	 cout.put(c);
 }

#include "recurse.h"
