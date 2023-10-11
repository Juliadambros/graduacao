#include <iostream>
using namespace std;

//EXERCICIO A e B, o C está no final.

int numero, a, b, numero1, base, expoente;
float volume, raio;
void multiplo(){
    if(numero%4==0){
        cout<<numero<<" e multiplo de 4"<<endl;
    }else
    cout<<numero<<" nao e multiplo de 4"<<endl;
}

string multiplo1(int numero){
    if(numero%4==0){
        return "numero e multiplo de 4";
    }else
    return "numero nao e multiplo de 4";
}

void verificacao(){
    if(numero%2==0){
        cout<<numero<<" e par"<<endl;
    }else
    cout<<numero<<" e impar"<<endl;
}

string verificacao1(int numero){
    if(numero%2==0){
        return "numero e par";
    }else
    return " numero e impar"; 
}

void Soma(){
    int soma=0;
    for(int i=a; i<=b; i++){
        soma+=i;
    }
    cout<<soma<<endl;
}

int Soma1(int a, int b){
    int soma=0;
    for(int i=a; i<=b; i++){
        soma+=i;
    }
    return soma;
}

void Volume(){
    volume=4*3.14*raio*raio*raio/3;
    cout<<"volume:"<<volume<<endl;
}

float Volume1(int raio){
    volume=4*3.14*raio*raio*raio/3;
    return volume;
}

void Fatorial(){
    int fatorial=1;
    while(numero1<0){
        cout<<"valor invalido"<<endl;
        cin>>numero1;
    }
    for(int i=1; i<=numero1; i++){
        fatorial*=i;
    }
    cout<<"fatorial: "<<fatorial<<endl;
}

int Fatorial1(int numero1){
    int fatorial=1;
    while(numero1<0){
        cout<<"valor invalido"<<endl;
        cin>>numero1;
    }
    for(int i=1; i<=numero1; i++){
        fatorial*=i;
    }
    return fatorial;
}

void Potencia(){
    int p=1;
    for(int i=0; i<expoente; i++){
        p*=base;
    }
    cout<<"o numero"<<base<<" elevado a "<< expoente <<" e igual a "<<p<<endl;
}

int Potencia1(int base, int expoente){
    int p=1;
    for(int i=0; i<expoente; i++){
        p*=base;
    }
    return p;
}

int main(){

    cout<<"digite um numero"<<endl;
    cin>>numero;

    multiplo();
    cout<< multiplo1(numero)<<endl;
    verificacao();
    cout<< verificacao1(numero)<<endl;

    cout<<"digite 2 numeros"<<endl;
    cin>>a>>b;

    Soma();
    cout<< Soma1(a, b)<<endl;

    cout<<"digite o raio da esfera"<<endl;
    cin>>raio;

    Volume();
    cout<< Volume1(raio)<<endl;

    cout<<"digite um numero"<<endl;
    cin>>numero1;

    Fatorial();
    cout<<Fatorial1(numero1)<<endl;

    cout<<"insira a base e o expoente (ambos inteiros e maiores ou iguais a 0)"<<endl;
    cin>> base >> expoente;

    Potencia();
    cout<<Potencia1(expoente, base)<<endl;
}

//EXERCICIO C
//Função: melhorar o codigo como por exemplo a modularização e evitar repetições
//Argumentos/Prametro: Parâmetro é a variável que irá receber um valor em uma função enquanto que um argumento é o valor que você passa para a função. 
//void: é uma função que não tem retorno
//Tipos de passagem de parâmetro (qual o padrão do C/C++?): por valor e por referencia.
//Retorno de uma função (quais os tipos de retorno?):  pode ser armazenado em uma variável, mostrado em uma
//instrução de saída, utilizado em uma expressão aritmética ou lógica.
