#include <iostream>
#include <string>
using namespace std;
int main(){
    int totalMagnets,groups=1;
    string magnet,lastMagnet;
    cin>>totalMagnets;
    cin>>magnet;
    for(int x=1;x<totalMagnets;x++){
        lastMagnet=magnet;
        cin>>magnet;
        if(lastMagnet!=magnet){
            groups++;
        }
    }
    cout<<groups;
    return 0;
}