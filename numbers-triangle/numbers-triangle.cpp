#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];

    for (int i=0;i<n;i++)
  		for (int j=0; j<=i; j++) cin>>a[i][j];

  	for (int i=n-2;i>=0;i--)
  		for (int j=0; j<=i; j++)
  			if (a[i+1][j] > a[i+1][j+1]) a[i][j]+=a[i+1][j];
  			else a[i][j]+=a[i+1][j+1];


  	cout<<a[0][0]<<endl;
    return 0;
}
