#include <iostream>
using namespace std;
int main(){
    int number,a,b,c,d,modul;
    cin>>number;
    while (number<99999999999)
    {
        number++;
        modul=number;
        a=modul%10; modul=modul/10;
        b=modul%10; modul=modul/10;
        c=modul%10; modul=modul/10;
        d=modul%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout<<number;
    return 0;
}