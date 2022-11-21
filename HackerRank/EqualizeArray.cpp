//Problem Solving/Algorithms/Implementation/Equalize the Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v, v1 = {};
    int n,a;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        int ans = count(v.begin(), v.end(), v[i]);
        v1.push_back(ans);
    }

    cout<<n - *max_element(v1.begin(), v1.end());

    return 0;
}
