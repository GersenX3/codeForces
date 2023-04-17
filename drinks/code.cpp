#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double total,n,nTotal=0;
    cin>>total;
    for(double x=0; x<total;x++){
        cin>>n;
        nTotal=nTotal+n;
    }
    double resultado=nTotal/total;
    cout<<fixed<<setprecision(12)<<resultado<<endl;
    int popo;cin>>popo;
    return 0;
}