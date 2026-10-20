#include <iostream>
using namespace std ;
int main (){
    float x;
    cout<<"Enter real number: ";
    cin>>x;
    // if ( x == (int)x ) cout<<"integer";
    // else cout<<"Not an integer";
    int y = (int)x;
    if (x == y) cout<<"Integer";
    else cout<<"Not an integer";
}
