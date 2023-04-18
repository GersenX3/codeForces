#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){
    long long num;
    cin>>num;
    if(num%2==0){
        num=num/2;
    }
    else{
        num++;
        num=num/2;
        num=(-num);
    }

    cout<<num;
    return 0;
}