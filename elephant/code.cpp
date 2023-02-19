#include <iostream>
using namespace std;
int main(){
    int x,result=0;
    cin>>x;
    while(x>0){
        x=x-5;
        result=result+1;
    }
    cout<<result;
    return 0;
}