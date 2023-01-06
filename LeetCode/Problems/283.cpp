// Move Zeros
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int>v = {0,1,0,3,12};
	vector <int> v1;
	int n = v.size();
	int zeros = 0;

	if(n == 1) cout<<"!";

	for(int i=0; i<n; i++)
	{
		if(v[i] == 0)++zeros;
		else v1.push_back(v[i]);
	}

	for(int i=0; i<zeros; i++) v1.push_back(0);

	for(auto x:v1) cout<<x<<endl;
}
