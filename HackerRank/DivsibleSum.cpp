//Problem Solving/Algorithms/Implementation/Divisible Sum Pairs

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s, count = 0, sum = 0;
    cin>>n>>s;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int k=0; k<n; k++)
    {
            for(int j=k; j<n; j++)
            {
                if(j!=k)
                {
                    sum = a[k] + a[j];
                    if( sum % s == 0) ++count;
                }
            }
    }
    cout<<count<<endl;
    return 0;
}
