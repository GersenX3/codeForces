#include <iostream>
using namespace std;
int main (){
    int coders,winers;
    int total=0;
    int score;
    int lastScore=0;
    cin>>coders>>winers;
    for(int x=0;x<coders;x++){
        cin>>score;
        if(score>0&&winers>0){
            total=total+1;
            winers=winers-1;
            lastScore=score;
        }
        
        else if(score==lastScore&&score>0){
            total=total+1;
            winers=winers-1;
            lastScore=score;
        }

    }
    cout<<total;
    return 0;
}