#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    // if(n % 2 == 0)cout<<"Even number";
    // else cout<<"Odd number"<<endl;
    if( n % 2 == 0) cout<<"EVEN";
    if( n % 2 == 1) cout<<"ODD";
    
}
