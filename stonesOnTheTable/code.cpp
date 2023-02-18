#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; int n;
    cin>>n>>s;
    int total=0;
    char last;
    for(int x=0;x<s.length();x++){
        char primer = s[x];
        char segundo = s[x+1];
        if(primer==segundo){
            total=total+1;
        }
    }
    cout<<total;
    return 0;
}