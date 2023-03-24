#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <math.h>

using namespace std;
void print(std::vector<float> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main(){
    int total,n,totales,contador;
    float agregar;
    cin>>total;
    vector <float> usados;
    vector <float> reinicio;
    for(int x=0;x<total;x++){
        cin>>n;
        totales=0;
        contador=0;
        while(n>0){
            agregar=n%10;
            if(agregar>0){
                totales++;
                usados.push_back(agregar*pow(10,contador));
            }
            n=n/10;
            contador=contador+1;
        }
        cout<<totales<<endl;
        print(usados);
        cout<<"\n";
        usados=reinicio;
    }

    int popo;cin>>popo;
    return 0;
}