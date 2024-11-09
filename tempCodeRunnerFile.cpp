#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int n;
    n=1;
    int m;
    cin>>m;

    while (n<=m)
    {
        int j=1;
        while (j<=m)
        {
            cout<<j;
            j=j++;

        }
        cout<<endl;
        n=n+1;
        
    }
    

return 0;
}