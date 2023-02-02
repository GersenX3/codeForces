#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string before,first,last;
    cin>>n;
    vector<string> words;
    vector<string> wordsChanged;

     for(int x=0;x<n;x++){
        cin>>before;
        words.push_back(before);
     }

    for(int x=0;x<n;x++){
        if(words[x].length()>10){
            first=(words[x])[0];
            last=(words[x])[(words[x].length())-1];
            cout<<first<<(words[x].length())-2<<last<<endl;
        }
        else{
            cout<<words[x]<<endl;
        }
    }    
    return 0;
}