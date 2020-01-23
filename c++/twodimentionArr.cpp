#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int array[5][2]={{2,4},{5,4},{88,3},{21,1}};
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<setw(8)<<array[i][j];
		}
		cout<<endl;
	}
}
