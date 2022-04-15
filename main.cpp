#include<iostream>
using namespace std;

int main ()
{
    int n1,n2;
    char op;
    cout<<"Enter the value of the numbers: "<<endl;
    cin>>n1>>n2;
    cout<<"enter the operand"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        default:
        cout<<"another operand is inserted"<<endl;
        break;
    }
    return 0;
}
