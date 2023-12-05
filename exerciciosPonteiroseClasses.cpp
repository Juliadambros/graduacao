#include<iostream>

using namespace std;

//7
extern int global=10;


void Ponteiro();
void Adicao();
void Subtracao();
void Subtracao2();
void Comparacao();
void Estatica();
void Registro();
void Array();
void Comparar(int* ponteiro1, int* ponteiro2);

int main(){

    Ponteiro();
    Adicao();
    Subtracao();
    Subtracao2();
    Comparacao();


    for (int i = 0; i < 5; ++i) {
        Estatica();
    }

    for (int i = 0; i < 5; ++i) {
        Registro();
    }

   // Array();

    int variavel1 = 42;
    int variavel2 = 73;
    int *ponteiro1, *ponteiro2;
    ponteiro1 = &variavel1;
    ponteiro2 = &variavel2;
    Comparar(ponteiro1, ponteiro2);

   // cout << "Novo valor da variavel global: " << global << endl;

}
//1
void Ponteiro(){
    int numero = 20;
    int *ponteiro = &numero;

    cout << "Valor original da variavel: " << numero << endl;
    cout << "Valor apontado pelo ponteiro: " << *ponteiro << endl;

    (*ponteiro)++;
    cout << "Valor apontado pelo ponteiro apos incremento: " << *ponteiro << endl;

    (*ponteiro)--;
    cout << "Valor apontado pelo ponteiro apos decremento: " << *ponteiro << endl;

}
//2
void Adicao(){
    int numero = 20;
    int *ponteiro = &numero;

    cout << "Valor original da variavel: " << numero << endl;
    cout << "Valor apontado pelo ponteiro: " << *ponteiro << endl;

    const int constante = 5;
    (*ponteiro) += constante;

    cout << "Valor apontado pelo ponteiro apos adicao da constante: " << *ponteiro << endl;

}
//3
void Subtracao(){
    int numero = 20;
    int *ponteiro = &numero;

    cout << "Valor original da variavel: " << numero << endl;
    cout << "Valor apontado pelo ponteiro: " << *ponteiro << endl;

    const int constante = 5;
    (*ponteiro) -= constante;

    cout << "Valor apontado pelo ponteiro apos adicao da constante: " << *ponteiro << endl;

}
//4
void Subtracao2(){
    int numero1 = 20;
    int numero2 = 6;
    int *ponteiro1 = &numero1;
    int *ponteiro2 = &numero2;
    int diferenca;

    cout << "Valor original da variavel 1: " << numero1 << endl;
    cout << "Valor original da variavel 2: " << numero2 << endl;
    cout << "Valor apontado pelo ponteiro 1: " << *ponteiro1 << endl;
    cout << "Valor apontado pelo ponteiro 2: " << *ponteiro2 << endl;

    diferenca = (*ponteiro2) - (*ponteiro1);
    cout << "Diferenca entre os ponteiros: " << diferenca << endl;

}
//5
void Comparacao(){
    int numero1 = 20;
    int numero2 = 6;
    int *ponteiro1 = &numero1;
    int *ponteiro2 = &numero2;

    cout << "Valor original da variavel 1: " << numero1 << endl;
    cout << "Valor original da variavel 2: " << numero2 << endl;
    cout << "Valor apontado pelo ponteiro 1: " << *ponteiro1 << endl;
    cout << "Valor apontado pelo ponteiro 2: " << *ponteiro2 << endl;

    if (ponteiro1 == ponteiro2) {
        cout << "Os ponteiros sao iguais." << endl;
    } else {
        cout << "Os ponteiros sao diferentes." << endl;
    }

}
//6
void Estatica(){
    static int variavelEstatica = 0;

    variavelEstatica++;
    cout << "Valor da variavel estatica: " << variavelEstatica << endl;
}
//8
void Registro() {
    register int variavelDeRegistro = 0;

    variavelDeRegistro++;
    cout << "Valor da variavel de registro: " << variavelDeRegistro << endl;
}
//9
//void Array() {
    //int array[5] = {10, 20, 30, 40, 50};
    //int tamanho;
    //int *ponteiro;
    //ponteiro = &array[0];

    //for (int i = 0; i < tamanho; ++i) {
       // cout << "Elemento " << i << ": " << *(ponteiro + i) << endl;
    //}
//}
//10
void Comparar(int* ponteiro1, int* ponteiro2) {
    if (ponteiro1 > ponteiro2) {
        cout << "A variavel1 esta em um endereco de memoria mais alto." << endl;
    } else if (ponteiro2 > ponteiro1) {
        cout << "A variavel2 esta em um endereco de memoria mais alto." << endl;
    } else {
        cout << "Os enderecos de memoria sao iguais." << endl;
    }
}

