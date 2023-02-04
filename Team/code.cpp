#include <iostream>
using namespace std;

int main ()
{
    int problems;
    int p1,p2,p3;
    int posible=0;
    int sures;
    cin>>problems;
    for(int x=0;x<problems;x++){
        cin>>p1>>p2>>p3;
        sures=p1+p2+p3;
        if(sures>1){
            posible=posible+1;
        }
    }
    cout<<posible;
    return 0;
}