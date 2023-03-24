#include <iostream>
#include <string>
using namespace std;
int main(){
    int total,times,candies,m=0,b=0;
    string answer = "YES";
    cin>>total;
    for(int x=0;x<total;x++){
        cin>>times;
        for(int y=1;y<=times;y++){
            cin>>candies;
            if(candies%2==0){
                m=m+candies;
            }
            else{
                b=b+candies;
            }
        }
        if(m>b){
            answer="YES";
        }
        else{
            answer="NO";
        }
    cout<<answer<<endl;
    m=0;b=0;
    }
    return 0;
}
