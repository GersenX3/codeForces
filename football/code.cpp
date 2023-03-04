#include <iostream>
#include <string>
using namespace std;
int main(){
    string line,answer="NO";
    string a,b;
    int times=0;
    cin>>line;
    for(int x=0;x<=line.length();x++)
    {
        if (times == 7){
            answer="YES";
            break;
        }
        b=a;
        a=line[x];
        if(a==b){
            times++;
        }
        else{
            times=1;
        }
    }
    cout<<answer;
    int popo;cin>>popo;
    return 0;
}