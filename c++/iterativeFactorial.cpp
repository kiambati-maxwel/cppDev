#include<iostream>

using namespace std;

int main(){
	int factorial = 1;
	int n;
	cout<<"\n\nplease enter a +ve integer";cin>>n;
	if(n<=0){
		cout<<"\n\nerror!!";
	}else
	while(n>1){
		factorial = factorial * n;
		n--; 
	}
	
	cout<<"\n\nthe factorial of "<<n<<" = " <<factorial;
	
	return 0;
}
