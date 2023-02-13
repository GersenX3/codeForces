#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    string in,out;
    cin>>in;
    for(int x=0;x<in.length();x=x+2)
    {
        out.push_back(in[x]);
    }
    sort(out.begin(), out.end());
    cout<<out[0];
    for(int x=1;x<out.length();x++){
        cout<<"+"<<out[x];
    }
    return 0;
}