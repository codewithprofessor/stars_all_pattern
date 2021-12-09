#include<iostream>
using namespace std;

int main()
{
    char a=65;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<a++;
        cout<<endl;
    }
    return 0;
}
// A
// BC
// DEF
// GHIJ
// KLMNO