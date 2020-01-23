#include<iostream> 
using namespace std;
int main() 
{ 
int  **a,m,n;  // double pointer for 2d arry 

cout<<" \n enter the number of rows and columns for matrix:"; 
cin>>m>>n; 

a=new int *[m];    // dynamic allocation of pointers array for rows 
for(int i=0;i<m;i++) 
a=new int*[n];     // dynamic allocation of colomns for each rows 

cout<<"\n enter the elements:"; 
for(int i=0;i<m;i++) 
  for(int j=0;j<n;j++) 
     cin>>*a[j]; 

cout<<"\n the elements r:"; 
for(int i=0;i<m;i++) 
{ 
  for(int j=0;j<n;j++) 
     cout<<a[j]<<"  "; 
cout<<"\n"; 
} 

}


