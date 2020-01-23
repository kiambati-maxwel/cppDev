#include<iostream>
using namespace std;

int main(){
	int array[5];
	int sum;
	
	cout<<"please enter a number"<<endl;
	
	for(int i=0; i<5; i++){
		cin>>array[i];
		sum+=array[i];
	}
	
	cout<<"\n"<<sum<<"\n\n\n";
	return 0;
}
