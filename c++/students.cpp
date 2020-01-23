#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;



int main()
{
	int x=1;
	const int y=3;
	int avg=0;
	int counter=1;
    int ptrarray[x][y];
    
  
   
    ofstream writer("students_weight.txt");//a function in the fstream that creates a .txt file in the project folder
    
    writer<<setw(8)<<"NO"<<setw(8)<<"STD_NO"<<setw(8)<<"WEIGHT"<<setw(8)<<"AVG\n"<<endl; //writer writes data in the txt file created above.
     
	cout<<"\n*************press ctrl+c when done...*****\n"<<endl;

	while( counter<100){
	
	for(int i=0; i<x; i++)//loop to set the number of rows in the x axis
	{
			
		
		for(int j=0; j<y; j++)//loop to set and feed data to colamns  in y axis
		{   
			if(j==0)
			{
				cout<<setw(8)<< "    student no : "; cin>>ptrarray[i][j];
				
			}
			else if(j==1)
			{
				cout<<setw(8)<< "    enter weight : "; cin>>ptrarray[i][j];
				avg=(avg +  ptrarray[i][j])/(i+counter);
				cout<<endl;
				
			}
			else if (j==2)
			{
				ptrarray[i][j]=avg;
				cout<<setw(8)<<"    avg = "<<ptrarray[i][j];
				
			}
			
		}
		cout<<"\n\n";
		
		writer<<setw(8)<<counter<<setw(8)<<ptrarray[i][0]<<setw(8)<<ptrarray[i][1]<<setw(8)<<ptrarray[i][2]<<"\n"<<endl;
}
counter++;	
}
}


