// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
#include <iostream>
using namespace std;

int main(){
  int n = 5;
  int val = n+1;
  for(int i=1; i<=5; i++)
  {
    for(int j=5; j>=i; j--)
    {
        cout<<val-j<<" ";
    }

    cout<<endl;
  }
}