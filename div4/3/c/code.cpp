#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int total,n,k,number=1,contador=0;
    cin >>total;
    for(int x=0;x<total;x++){
        cin>>n>>k;
        number=(k/n);
        contador=number-((k/n)/n);
        while(contador!=k){
            if(number%n!=0){
                contador++;
            }
            number++;
        }
        cout<<number-1<<endl;
        number=1;
        contador=0;
    }
int popo;cin>>popo;
    return 0;
}