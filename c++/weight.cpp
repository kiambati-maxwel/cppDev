#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream writer("weight__.txt");
	int size,weight[size],serial[size],i,j;
	
	float sum=0,avg,n=1;
	cout<<"enter no of people: ";
	cin>>size;
	
	
	for(i=0;i<size;i++){
		cout<<"enter serial no: ";
		cin>>serial[i];
		cout<<"enter weight: ";
		cin>>weight[i];
	}
	writer<<"SERIAL_NO"<<"\t"<<"WEIGHT"<<"\t\t"<<"AVG"<<"\n";
	for(j=0;j<size;j++){
		sum=sum+weight[j];
		avg=sum/n;
		writer<<serial[j]<<"\t\t\t"<<weight[j]<<"\t\t"<<avg<<"\n";
		n++;
	}
	

	return 0;
}
