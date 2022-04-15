#include<iostream>
using namespace std;

int main()
{
	char alphabet;
	cout<<"enter the alphabet"<<endl;
	cin>>alphabet;
	
	switch (alphabet)
	{
		case 'a':
			cout<<"vovel"<<endl;
			break;
			
		case 'e':
			cout<<"vovel"<<endl;
			break;
			
		case 'i':
			cout<<"vovel"<<endl;
			break;
			
		case 'o':
			cout<<"vovel"<<endl;
			break;
			
		case 'u':
			cout<<"vovel"<<endl;
			break;
			
		default:
			cout<<"consonant"<<endl;
			break;
	}
}
