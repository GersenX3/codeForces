#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string word,may;
    int count=0;
    cin>>word;
    may=word;
    for(int x=0;x<may.length();x++){
        // s1[x]=tolower(s1[x]);
        may[x]=toupper(may[x]);
    }
    for(int x=0;x<word.length();x++){
        if(may[x]==word[x]){
            count+=1;
        }
    }
    if(count>((word.length())/2)){
        cout<<may<<endl;
    }
    else{ 
    for(int x=0;x<may.length();x++){
        // s1[x]=tolower(s1[x]);
        may[x]=tolower(may[x]);
    }
        cout<<may<<endl;
    }
    return 0;
}