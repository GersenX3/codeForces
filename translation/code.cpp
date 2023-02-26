#include <iostream>
#include <string>
using namespace std;
int main (){
    string s,t,answer="YES";
    int y=0;
    cin>>s>>t;
    for(int x=(s.length()-1);x>-1;x--){
        if(s[x]!=t[y]){
            answer="NO";
        }
        y++;
    }
    cout<<answer;

    int popo;cin>>popo;


    return 0;
}