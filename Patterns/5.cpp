// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
// 0 1 2 3 4 5


#include <iostream>
using namespace std;

int main(){
  int n = 5;

  for(int i=0; i<=5; i++)
  {
    for(int j=0; j<=i; j++)
    {
        cout<<j+n-i<<" ";
    }

    cout<<endl;
  }
}

