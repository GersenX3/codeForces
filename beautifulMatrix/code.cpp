#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,time,total=0,columna,fila=1;
    bool test = false;
    for(int x=1;x<=25;x++){
        cin>>n;
        if(n==1){
            time=x;
            test=true;
        }
        if(x%5==0&&test==false){
            fila=1+fila;
        }
    }
    columna=time-((fila-1)*5);
    if(fila!=3){
        if(fila==2||fila==4){total=total+1;}
        if(fila==1||fila==5){total=total+2;}
    }
    if(columna!=3){
        if(columna==2||columna==4){total=total+1;}
        if(columna==1||columna==5){total=total+2;}
    }
    cout<<total;
    return 0;
}