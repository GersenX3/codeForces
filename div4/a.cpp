#include <iostream>
using namespace std;
int main (){
    int total;
    cin>>total;
    char cha;
    for(int x=0;x<total;x++){
        cin>>cha;
        if(cha == 'c' || cha == 'o' || cha == 'd' || cha == 'e' || cha == 'f' || cha == 'r' || cha == 's' ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}