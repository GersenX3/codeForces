#include <iostream>
#include <string>
using namespace std;
int main(){
    string n1,n2,answer;
    cin>>n1>>n2;
    answer= "";
    int longitud = n1.length();
    for(int x=0;x<longitud;x++){
        if((n1[x]=='0' && n2[x]=='0') || (n1[x]=='1' && n2[x]=='1')){
            answer=answer+'0';
        }
        else{
            answer=answer+'1';
        }
    }
    cout<<answer<<endl;
    int popo;cin>>popo;
    return 0;
}