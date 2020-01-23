#include <iostream>
using namespace std;

void DynArray(int Num);

int main()
{
	int Num; 

	cout<<"\nPlease enter your number"; cin>>Num;

	DynArray(Num);

	
}
void DynArray(int Num)
{
	int *Num_ptr; //Pointer function

	Num_ptr=new int[Num];

	for (int i=0; i<Num;++i)
	{
		cout<<"\nMy "<<i+1<<" number is :"; cin>>Num_ptr[i];
	}

	for (int i=0; i<Num;++i)
	{
		cout<<"\nMy Numbers are "<<Num_ptr[i];
	}
}



