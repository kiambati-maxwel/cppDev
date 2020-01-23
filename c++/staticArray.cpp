#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int array[10];
	
	for(int i=0; i<10; i++){
		array[i]=i+100;
	}
	
	for(int i=0; i<10; i++){
		cout<<setw(8)<<array[i];
	}
	
	cout<<"\n\n\n";
	int array2[10];
	int sum=0;
	cout<<"enter 10 numbers"<<endl;
	
	for(int i=0; i<10; i++){
		cout<<"enter the "<<i+1<<"st NO : ";
		cin>>array2[i];
		cout<<endl;
		
		sum=sum+array2[i];
		
	}
	
	cout<<sum<<"\n\n\n";
	
	return 0;
	
	
}
