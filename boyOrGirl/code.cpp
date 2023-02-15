#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int total=1;
    string user;
    cin>>user;
    sort(user.begin(), user.end());
    char letter = user[0]; char otherLetter;
    for(int x=1;x<user.length();x++){
        otherLetter=user[x];
        if(letter!=otherLetter){
            total=total+1;
        }
        letter=otherLetter;
    }
    if(total%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}