#include <iostream>
using namespace std;
int main(){
    int max=0, stops, up, down, people=0;
    cin>>stops;
    for(int x=0;x<stops;x++){
        cin>>down>>up;
        people=(people-down)+up;
        if(people>max){
            max=people;
        }
    }
    cout<<max;

    return 0;
}