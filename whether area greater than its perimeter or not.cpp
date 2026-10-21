#include <iostream>
using namespace std;
int main(){
    float l;
    cout<<"Enter length: ";
    cin>>l;
    float b;
    cout<<"Enter breadth: ";
    cin>>b;
    float x = l*b ;
    float y = 2*(l+b);
    if( x > y ) cout<<"Area is greater than its perimeter";
    else if( x < y ) cout<<"Area is smaller than its perimeter";
    else cout<<"Area is equal to its perimeter";
       // else ( x == y ), cout<<"Area is equal to its perimeter"; 
    
}
