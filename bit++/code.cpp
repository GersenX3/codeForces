#include <iostream>
#include <string>
using namespace std;
int main (){
    int bit=0;
    int times;
    string operation;
    cin>>times;
    for(int x=0;x<times;x++){
        cin>>operation;
        if(operation=="X++"||operation=="++X"){
            bit+=1;
        }
        if(operation=="X--"||operation=="--X"){
            bit-=1;
        }
    }
    cout<<bit;
    return 0;
}