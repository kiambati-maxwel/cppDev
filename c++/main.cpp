#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void myfunction(int a,int b);

int main() {

	myfunction(2,2);
	cout<<endl;
	myfunction(22,9);
	cout<<endl;
	
	int x=0;
	while (x<100){
		cout<<x<<" ";
		
		x++;
	}
	
	
	
	return 0;
}
	void myfunction(int a, int b){
	  int sum;
	  sum=a+b;
	  cout<<sum;
	}
