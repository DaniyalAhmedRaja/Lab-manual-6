//					TASK 1
//#include <iostream>
//using namespace std;
//int main(){
//	int a,c,b,sum;
//	cout<<"Enter first digit of the fibonacci sequence : ";
//	cin>>c;
//	cout<<"Enter second digit of the fibonacci sequence : ";
//	cin>>b;	
//
//	cout<<"Enter how many times do the fibonacci sequence occur : ";
//	cin>>a;
//	cout<<c;	
//	for(int i=1;i<=a-1;++i){
//		for(int j=i;j<=i;++j){
//		sum=c+b;
//		b=c;
//		c=sum;
//		cout<<"\t"<<sum;
//		}
//	}
//	
//	return 0;
//}
//
//
//					TASK 2
#include <iostream>
using namespace std;
int main()
	{
		int rows,a=1;
		cout<<"Enter number of rows for Floyd's triangle : ";
		cin>>rows;
	for(int i=1;i<=rows;++i){
		for(int j=1;j<=i;++j){
		cout<<a<<"  ";
		++a;
					
			}		
			cout<<endl;
		}
					
	return 0;
	}
