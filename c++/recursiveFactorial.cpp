#include<iostream>

using namespace std;

int factorial(int number);

int main(){
	int number;
	cout<<"\n\nplease enter a positive integer : "; cin>>number;
	if(number <= 0){
		cout<<"\n\n thats not a positive integer"<<endl;
		
	}else
	
	cout<<"\n\nthe factorial of "<<number<<" is --> "<<factorial(number)<<"\n\n";
	
	return 0;
}

int factorial(int number)
{    
    int temp;
	if(number==1){
		return 1;
	}else
	
	temp = number * factorial(number-1);//recursion
	
	return temp;	
}
