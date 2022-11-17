/*
Find minumum num of moves to make all even numbers to start and all 
odd numbers to the end of the array
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {8,7,3,6,4,2,9};
    int n = v.size();
    int even =0, odd =0;

    for(int i=0; i<n; i++)
    {
        if(v[i] %2 == 0)
        {
            ++even;
        }

        else
        {
            ++odd;
        }
    }

    cout<<min(odd,even);

    return 0;
}
