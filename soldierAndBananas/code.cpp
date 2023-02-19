#include <iostream>
using namespace std;
int main(){
    int dollars,bananas,price,actualPrice,priceTotal=0;
    cin>>price>>dollars>>bananas;
    for(int x=1;x<=bananas;x++){
        actualPrice=price*x;
        priceTotal=priceTotal+actualPrice;
    }
    if(priceTotal-dollars>0){
    cout<<priceTotal-dollars<<endl;
    }
    else{
        cout<<0;
    }
    return 0;
}