#include <iostream>
using namespace std;
int main(){
    int x,y,years=0;
    cin>>x>>y;
    while(x<=y){
        x=x*3;
        y=y*2;
        years=years+1;
    }
    cout<<years;
    return 0;
}