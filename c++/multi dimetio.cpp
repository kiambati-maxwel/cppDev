#include<iostream>
using namespace std;

int arra_print(int my_argument[], int i );
int main()
{
	int a[4][2];
	for (int i=0; i<=4; i++){
		for(int j=0; j<=2; j++){
			a[i][j]=7;
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	//array as arguments 
	int myArray[]={1, 4, 6, 7, 43, 9, 3};
	int x=4;
	arra_print(myArray, x);
	
	
	return 0;
	
}

int arra_print(int my_argument[], int i ){
	for(int n=0; n<i; n++){
		cout<<my_argument[n]<<" ";
	}
}

