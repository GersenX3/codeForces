#include <iostream>
#include <cstring>

using namespace std;
int main(){
    int result=0;
    string s1,s2;
    cin>>s1>>s2;
    for(int x=0;x<s1.length();x++){
        s1[x]=tolower(s1[x]);
        s2[x]=tolower(s2[x]);        
    }
    if(s1>s2){result=result+1;}
    if(s2>s1){result=result-1;}
    cout<<result;
    return 0;
}