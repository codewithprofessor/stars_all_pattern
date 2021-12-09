#include<iostream>
using namespace std;

int main()
{
    char k=65;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<k;
        cout<<endl;
    }
    
    return 0;
}
// A
// AA
// AAA
// AAAA
// AAAAA