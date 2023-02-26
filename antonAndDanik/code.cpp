#include <iostream>
#include <string>
using  namespace std;
int main(){
    int games; int a=0;int d=0;
    string wins;
    cin>>games;cin>>wins;
    for(int x=0;x<games;x++){
        char y = wins[x];
        if(y == 65){
            a+=1;
        }
        else{
            d+=1;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(a==d){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }
    return 0;
}