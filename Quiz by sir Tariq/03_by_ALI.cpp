#include<iostream>
using namespace std;

int main()
{
    // int n;/
    for(int i=1;i<=5;i++)
    {
        for(int j=5-1;j>=i;j--)
        cout<<" ";
        for(int k=1;k<=i;k++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
//     *
//    **
//   ***
//  ****
// *****