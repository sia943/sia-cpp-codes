#include <iostream>
using namespace std;
int main(){
    // a b c d ....Z 
    // A B C D....Z 
    //!@#$%^&*():;""''+=
    // 0 1 2 3 4 5 6 7 8 9 
    
     char X = '@';  // single comma me aur single cheez hi likhenge
     cout<<X<<endl;
     
    // ASCII values
    // 'A'- 65      'a'- 97       '0'- 48
    // 'B'- 66      'b'- 98       '1'- 49
    // 'C'- 67      'c'- 99       '2'- 50
    
    // 'Y'- 89      'y'- 121
    // 'Z'- 90      'z'- 122       '9'- 57
    
    char x ='7';
    int ascii = (int)x; //  explicit typecasting ; {hello ek string hai char nhi}
    cout<<ascii<<endl;  
    
    char a ='$';
    cout<<(int)a<<endl;  // gives ASCII value of given character
    
    char y ='Z';
    int ASCII = y;  // implicit typecasting
    cout<<ASCII<<endl;  
    
    int b = 74;
    cout<<(char)b<<endl;
    
    char ch1 = 'A';
    char ch2 = 'a';
    cout<<ch1+ch2<<endl;
    
    cout<<'a'+'0'<<endl;
    cout<<'a'+'3'<<endl;
    
    cout<<(char)('a'+0)<<endl;
    cout<<(char)('a'+3)<<endl;
    
    }
