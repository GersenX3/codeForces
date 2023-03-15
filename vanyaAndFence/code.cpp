#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,h,width=0,personH;        
    cin>>n>>h;
    for(int x=0;x<n;x++){
        cin>>personH;
        if (personH>h){
            width=width+2;
        }
        else{
            width++;
        }
    }
    cout<<width;
    return 0;
}