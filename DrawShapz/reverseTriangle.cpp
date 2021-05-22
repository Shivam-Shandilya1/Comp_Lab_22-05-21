#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int height;
    char symbol;
    cin>>height>>symbol;
    for(int a=height;a>0;a--)
    {
        for(int b = 1;b<=a;b++)
        {
            cout<<setw(2)<<symbol;
        }
        cout<<endl;
    }
    system("pause>0");
}
