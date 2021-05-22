#include <iostream>
using namespace std;
int main()
{
    int height,width;
    char symbol;
    cin>>height>>width>>symbol;
    for(int b=0;b<width;b++)
    {
          for(int a=0;a<height;a++)
    {
        cout<<symbol;
    }
    cout<<"" <<endl;;
    }
 return 0;
}
