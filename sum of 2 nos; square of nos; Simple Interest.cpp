#include<iostream>
using namespace std;
int main(){
    
    // sum of 2 nos.
    float x;  // phele float(dabba bana skte hai) ya phir print dono me se phele kuch bhi kar sakte hai
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    float y;
    cin>>y;
    cout<<"Sum of two numbers: ";
    cout<<x + y<<endl;

    // int a,b;
    // cin>>a>>b;
    // cout<<a + b<<endl;


    // square of nos.
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    cout<<"Square of number: ";
    cout<<n*n<<endl;
    

    // Simple interest
    float p,r,t;
    cout<<"Enter principle: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    cout<<"Simple interest: ";
    float si =( p*r*t )/100;
    cout<<si;
    
    
}
