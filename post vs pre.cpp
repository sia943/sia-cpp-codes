#include <iostream>
using namespace std;
int main(){
    int x = 10;
    cout<<x++<<endl; //phele istemal karo phir increment karo
    cout<<x<<endl;
    
    int y = 10;
    cout<<y--<<endl; //phele istemal karo phir decrement karo
    cout<<y<<endl;
    
    int a = 10;
    cout<<++a<<endl; //phele increment karo phir print karo
    cout<<a<<endl;
    
    int b = 10;
    cout<<--b<<endl; //phele decrement karo phir print karo
    cout<<b<<endl;
    
    int p = 8;
    int q = p++ + --p;
    cout<<q<<endl;
    
}
