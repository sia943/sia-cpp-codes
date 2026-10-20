#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    x = x + 7;  // x +=7
    cout<<x<<endl;
    x = x - 7;  //x -= 7
    cout<<x<<endl;
    
    x = x * 2; // x *= 2 // short hand notation
    cout<<x<<endl;
    x = x / 2; // x /=2
    cout<<x<<endl;
    
    int a = 7, b = 4;
    a = b; // a = b (b ki value a me aayegi) / (a ke andar b ki value aa jayegi)
    cout<<a<<endl<<b;
 
}
