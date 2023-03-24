#include <iostream>
#include <string>
using namespace std;
int main (){
    int total;
    int width;
    bool roto =false;
    string s;
    int answer;
    cin>>total;
    for(int x=0;x<total;x++){
        cin>>width>>s;
        answer=width;
        int z=width-1;
        for(int y=0;y<width/2;y++){
            if(s[y]==s[z]){
                roto=true;
            }
            if(s[y]!=s[z] && roto==false){
                z=z-1;
                answer=answer-2;
            }
        }
        cout<<answer<<endl;
        roto=false;
    }

    return 0;
}
// 1
// 2
// 5
// 6
// 7
// 1
// 2
// 2
// 10