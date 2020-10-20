include<iostream>
using namespace std;

int main()
{
	char k;
	for(int i=0;i<=3;i++){
		k='A';                    //the ascii value of A to Z is 65-90
		for(int j=0;j<=6;j++){                 // statement of inside loop
			if(j<=3-i||j>=3+i){  
			cout<<k;
			j<3?k++:k--; }
			else{
			cout<<" ";
			if(j==3)
			k--;}
		}
		cout<<endl;
                         // statement of outer loop
	}
	return 0;
}
