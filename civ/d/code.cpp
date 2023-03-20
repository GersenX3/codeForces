#include <iostream>
#include <vector>
using namespace std;
int main(){
    int total,longitud,preguntas;
    int numero,inicio,fin,remplazo,suma=0;
    vector<int> numeros;
    cin>>total;
    for(int x=0;x<total;x++){
        cin>>longitud>>preguntas;
        for(int y=0;y<longitud;y++){
            cin>>numero;
            numeros.push_back(numero);
        }
        for(int z=0;z<preguntas;z++){
            cin>>inicio>>fin>>remplazo;
            for(int b=1;b<=longitud;b++){
                if(b>=inicio && b<=fin){
                    suma=suma + remplazo;
                }
                else{
                    suma=suma + numeros[b-1];
                }
                cout<<suma<<endl;
            }
            if(suma%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            suma=0;
        }
    }

    return 0;
}
