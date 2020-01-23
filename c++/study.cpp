#include<iostream>

using namespace std;

int main()
{
	int myarray[5];
	cout<<"enter 5 numbers : "<<endl;
	for(int i=0; i<5; ++i )
	{
		cin>>myarray[i];
		cout<<myarray[i]<<", ";
	}
	
	return 0;
}
