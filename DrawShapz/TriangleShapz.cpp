#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int height;
    char symbol;
    cin>>height>>symbol;
    system ("cls");

        for(int b = 1;b<=height;b++)
        {
            for(int c = 1;c<=b;c++)
            {
                cout<<setw(3)<<symbol;
            }
            cout<<endl;
        }
    system("pause>0");
}
