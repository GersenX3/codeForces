#include <iostream>
#include <vector>
using namespace std;

int main (){
    int friends=0,number;
    cin>>friends;
    vector <int> answer(friends);
    for(int x=1;x<=friends;x++){
        cin>>number;
        answer[number-1]=x;
    }
    for(int x=0;x!=friends;x++){
        cout<<answer[x]<<" ";
    }

    return 0;
}