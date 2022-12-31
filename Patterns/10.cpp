// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1


#include <iostream>
using namespace std;

int main(){
  int n = 5;
  int val = n+1;

  for(int i=1; i<=5; i++)
  {
    for(int j=5; j>=i; j--)
    {
        cout<<j+1-i<<" ";
    }

    cout<<endl;
  }
}
