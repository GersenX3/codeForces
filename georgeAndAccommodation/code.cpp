#include <iostream>
using namespace std;

int main(){
    int roomsFree=0;
    int totalRooms,capacity,used;
    cin>>totalRooms;
    while(totalRooms--){
        cin>>used>>capacity;
        if(used<capacity-1){
            roomsFree++;
        }
    }
    cout<<roomsFree;


    return 0;
}