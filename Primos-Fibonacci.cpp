#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

bool primo(int n){
    bool condicion;
    if(n != 1 && n!=0){
        for(int i=2; i <= n; i++){
            if(n % i == 0){
                if(n == i){
                    condicion = true;
                }
                else {
                    condicion = false;
                    return condicion;
                }
            }
        }
    }else condicion = false;

    return condicion;
}

void imprimirPrimo(int n){
    bool condicionP=true;
    if(n!=1 && n!=0){
        for(int i=2; i<=n; i++){
            if(n % i == 0) condicionP=false;
        }
    }else condicionP=false;
    if(condicionP == true){ cout<< "el numero es primo" <<endl;
    cout<<"Sucesion de numeros primos hasta "<<n<<endl;
    }
    else cout << "el numero "<<n<<" no es primo"<<
        endl<< "numeros primos correctos por debajo de "<< n <<endl;
}

int fibonacci(int n){
    int fibo;
    if (n<2){
        fibo=n;
    }
    else{
        fibo=fibonacci(n-1)+fibonacci(n-2);
    }
    return fibo;
}

void sucesionFibonacci(int n){
    int i;
    cout<<"Sucesion de fibonacci hasta "<<n<<endl;
    for(i=0;i<=n;i++){
        cout<<"f"<<i<<"="<<fibonacci(i)<<endl;
    }
}

int main()
{
    int n;
    cout<<"Dame la numero para primos y fibonacci:";
    cin>>n;
    sucesionFibonacci(n);
    imprimirPrimo(n);
    for(int i=1; i <=n ; i++){
        if(primo(i))cout << i <<endl;
    }
    return 0;
}
