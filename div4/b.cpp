#include <iostream>
#include <string>
using namespace std;
int main(){
    int total,a=0,b=0;
    int totalMoves;
    string moves;
    string answer= "NO";
    cin>>total;
    for(int x=0;x<total;x++){
        cin>>totalMoves>>moves;
        for(int y=0;y<totalMoves;y++){
            if(moves[y]=='U'){b++;}
            if(moves[y]=='D'){b--;}
            if(moves[y]=='R'){a++;}
            if(moves[y]=='L'){a--;}
            if(a==1 && b ==1){
                answer = "YES";
            }
        }
        cout<<answer<<endl;
        if(x!=total-1){
        answer="NO"; a=0; b=0;    
        }
    }

    return 0;
}