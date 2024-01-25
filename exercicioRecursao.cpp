//pg 5
// 1) 
// solução interativa:                                            
//      1- f= 5
//      2- f= 5 * 4 = 20
//      3- f= 20* 3 = 60
//      4- f= 60 * 2 = 120
//      5- f= 120* 1 = 120
// 
//  solução recursiva:
//      1- fat(5) = 120
//      2- 5 * fat (4)
//          5*24
//      3- fat (4)= 24
//      4- 4 * fat(3)
//          4*6
//      5- fat(3)=6
//      6- 3 * fat(2)
//          3 * 2 
//      7- fat (2)=2
//      8- 2 * fat(1)
//      9- fat (1)
//      10- 1

// solução interativa: 
//      1- f= 3
//      2- f= 3 * 2 = 6
//      3- f= 6 * 1 = 6
// 
//  solução recursiva:
//      1- fat(3) = 6
//      2- 3 * fat (2)
//          3*2
//      3- fat (2)= 2
//      4- 2 * fat(1)
//          1*1
//      5- fat (1)
//      6- 1

// solução interativa: 
//      1- f= 0 
//      2- 1
// 
//  solução recursiva:
//      1- fat(0)
//      2- 1

// 2) 13
// pg 8
// 12 vezes

#include<iostream>
#include<cmath>
using namespace std;

int max (int *v, int n);
double somaInteiros (int n);
int potencia(int n, int b);
int teste(int x[], int n);
int teste2(int n);
int vetor(int *v, int n);

int main(){
    int v[5] = {7, 12, 5, 14, 9};
    int x[5] = {2,7,4,7,3};
    cout<<max(v, 5)<<endl;
    cout<<somaInteiros(5)<<endl;
    cout<<potencia(5,2)<<endl;
    cout<<teste(x,5)<<endl;
    cout<<teste2(4532)<<endl;
    cout<<vetor(x,5)<<endl;
}
//pag 6 numeroII
int max (int *v, int n){
    if (n == 1)
        return v[0];
    else{
        int x = max (v, n-1);
        if (x >= v[0])
            return x+v[n-1];
        else
            return v[n-1];
        }
}
//A
double somaInteiros(int n){
    if (n <= 1)
        return 1;
    else
        return n + somaInteiros(n - 1);
}
//B
int potencia(int n, int b){
    if (b == 0){
        return 1;
    }
    if (b==1){
        return n;
    }
    else
        return n* potencia(n,(b-1));
}
//C é linear e soma os numeros menores que 10 até chegar no x[0]
int teste(int x[], int n){
    if (n == 0)
        return 0;
    if (x[n-1] > 10)
        return x[n-1] + teste(x, n-1);
    else
        return teste(x, n-1);
}
//D faz a soma dos valores do resto da divisõa por 10 até o numero ficar menor que 10. Resultado:14
int teste2(int n){
    if (n < 10)
        return n;
    else
        return n%10 + teste2(n/10);
}
//E resposta:7 indice 3
int vetor(int *v, int n){
    if (n == 1)
        return v[0];
    else{
            int x = vetor(v, n-1);
                if (x > v[n-1])
                    return x;
                else
                    return v[n-1];
    }
}
//4
// for(int i=n, i>0, i++){
//      soma+=i;
//}
//1
//ele calcula a soma dos numeros decrementando 1. Ex: 5+4+3+2+1