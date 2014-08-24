#include <iostream>

using namespace std;

int main()
{
    double sum = 0;
    double input = 0;
    
    cout<<"Enter elements of array (input incorrect number or empty line to finish"<<endl;
   
    while(true)
    {
    	cout<<"element = ";
    	
    	if(cin>>input) sum+=input;
    	else break;
    }
    
    cout<<"Sum = "<<sum<<endl; 
    
    return 0;
}
