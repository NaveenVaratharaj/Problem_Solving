// a
// a b
// a b c
// a b c d
// a b c d e

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c", j+96);
        }
        cout<<endl;
    }

    return 0;
}
