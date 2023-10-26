#include <iostream>
using namespace std;

const int tamanhoVetor = 5;

int multiplicar(int a, int b);
int multiplicarPonteiro(int (*a), int (*b));
int soma(int a);
int somaReferencia(int (*a));
int diminui(int a);
int diminuiReferencia(int (*a));
void inverterVetor(int* vetor, int tamanho);
void converterParaMaiusculas(string &palavra);

int main (){
int x = 5, y = 3, res;

res = multiplicar(x, y);
cout << res << endl;

res= multiplicarPonteiro(&x,&y);
cout << res <<endl;

res=soma(x);
cout<<res<<endl;

res=somaReferencia(&x);
cout<<res<<endl;

res=diminui(x);
cout<<res<<endl;

res=diminuiReferencia(&x);
cout<<res<<endl;

int vetor[tamanhoVetor] = {1, 2, 3, 4, 5};

    inverterVetor(vetor, tamanhoVetor);

    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

string minhaString;
cout << "Digite uma string: "<<endl;
cin >> minhaString;
converterParaMaiusculas(minhaString);
cout << minhaString << endl;


}

int multiplicar(int a, int b){
    int mult;
    mult = a*b;
    return mult;
}

int multiplicarPonteiro(int (*a), int (*b)){
    int mult;
    mult=(*a)*(*b);
    return mult;
}

int soma(int a){
    int somar;
    somar=a+10;
    return somar;
}

int somaReferencia(int (*a)){
    int somar;
    somar=(*a)+10;
    return somar;
}

int diminui(int a){
    int diminuir;
    diminuir=a-5;
    return diminuir;
}

int diminuiReferencia(int (*a)){
    int diminuir;
    diminuir=(*a)-5;
    return diminuir;
}

void inverterVetor(int* vetor, int tamanho) {
    int* inicio = vetor;
    int* fim = vetor + tamanho - 1;
    while (inicio < fim) {
        // Troca o elemento no início com o elemento no fim.
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

void converterParaMaiusculas(string &palavra) {
    for (char &c : palavra) {
        if (c >= 'a' && c <= 'z') {
            // A diferença entre letras minúsculas e maiúsculas na tabela ASCII é 32.
            // Portanto, adicionamos 32 ao valor ASCII do caractere para convertê-lo em maiúscula.
            c = c - 32;
        }
    }
}