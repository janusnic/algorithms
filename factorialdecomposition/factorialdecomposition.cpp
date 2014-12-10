#include <iostream>
#include <cstdio>
					
using namespace std;
 void tofact(int n) {
	int p = 2;
 	int b=0;
 	cout<<1;
  	while (n/p!=0) {
  		cout<<"+ "<<p<<"!*"<<n%(p+1);
  		n = n/p;
  		p++;
 	}
 }


int main() {
	int n;
	cin>>n;
	tofact(n);
	return 0;
}