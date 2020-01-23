#include<iostream>

using namespace std;

string name(int num);
int main(){
	int num;
	cin>>num;
	name(num);
}

string name(int num){
	
	string name="max";
	int t = name(num-1);
	return name;
}


