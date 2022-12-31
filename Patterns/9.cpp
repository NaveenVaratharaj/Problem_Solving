// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
#include <iostream>
using namespace std;

int main(){
  int n = 5;
  int val = n+1;
  int count = 0;

  for(int i=1; i<=5; i++)
  {
    for(int j=5; j>=i; j--)
    {
        cout<<i+count<<" ";
        count++;
    }
    count = 0;
    cout<<endl;
  }
}
