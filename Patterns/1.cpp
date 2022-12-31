// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// Outer Loop Defines the number of lines that has to be used for the pattern
// Inner Loop Defines what has to be printed on the screen

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
