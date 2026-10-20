#include <iostream>
using namespace std ;
int main(){
    float cp;
    cout<<"Enter CP: ";
    cin>>cp;
    float sp;
    cout<<"Enter SP: ";
    cin>>sp;
    // if( cp < sp) cout<<"PROFIT";
    // if( cp > sp) cout<<"LOSS";
    // if( cp == sp) cout<<"No Profit, No Loss";
    if( cp < sp) cout<<"PROFIT is "<<sp-cp;
    else if( cp > sp) cout<<"LOSS is "<<cp-sp;
    else( cp == sp), cout<<"No Profit, No Loss";
}
