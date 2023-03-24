#include <iostream>
#include <vector>
using namespace std;
int main (){
    int total,n;
    int smaller=0;
    int smallerCor=0;
    vector <int> numbers;
    int width;
    cin>>total;
    for(int x=0;x<total;x++){
        cin>>width;
        for(int y =0;y<width;y++){
            cin>>n;
            numbers.push_back(n);
            if(n<smaller){
                smaller=n;
                smallerCor=x;
            }
        }


    }

    
    return 0;
}