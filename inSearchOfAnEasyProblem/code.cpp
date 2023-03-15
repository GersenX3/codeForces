#include <iostream>
#include <string>
using namespace std;
int main(){
    string answer = "EASY";
    int people, answers;
    cin>>people;
    for(int x=0; x<people;x++){
        cin>>answers;
        if(answers==1){
            answer="HARD";
            break;
        }
    }

    cout<<answer;
    return 0;
}