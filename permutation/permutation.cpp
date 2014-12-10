#include <iostream>
#include <cstdio>

using namespace std;

class Permutations {
private:
    int *a;
    int n;

    void swap(int x, int y) {
        int t = a[x];
        a[x] = a[y];
        a[y] = t;
    }

public:
    Permutations(int x) {
        n = x;
        a = new int[n];
        for (int i=1; i<=n; i++) a[i-1] = i;
    }    
    void generate(int k) {
        if (k==n) {
            for (int i=0;i<n;i++) 
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else {
            for (int j=k;j<n;j++) {
                swap(k,j);
                generate(k+1);
                swap(k,j);
            }
        }
        
    }

};

 
int main()
{
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    Permutations p(5);
    p.generate(0);


}