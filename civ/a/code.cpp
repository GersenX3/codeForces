#include <iostream>
using namespace std;
int main(){
int a,b,c,total,suma;
    cin>>total;
    for(int x=0;x<total;x++){
        cin>>a>>b>>c;
        suma=a+b;
        if(suma==c){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }

    return 0;
}