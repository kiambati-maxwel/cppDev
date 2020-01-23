#include <iostream>
using namespace std;

void dym_array (int i);
int main(){
int num;

cout<<" enter n "; cin>> num;
dym_array(num);
 
 
 
 return 0;
}
void dym_array (int num)
{
	int *ptr;
	ptr = new int [num];	
	for(int i=0; i<num; i++){
		cout<<"my number is ";cin>>ptr[i]; cout<<endl;
	}
	for(int i=0; i<num; i++){
		cout<<ptr[i]<<" ";
	}
	delete [] ptr;
	
	
	
}
