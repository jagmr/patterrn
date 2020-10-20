#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<=5;i++)
	{int k=1;
		for(int j=0;j<=10;j++){  // statement of inside loop
		   if(j>=i&&j<=10-i&&k){
		   cout<<"*";
		   k=0;}
		   else{
		   cout<<" ";	
			k=1;}
		}
               // statement of outer loop
   cout<<endl;
	}
	return 0;
}
