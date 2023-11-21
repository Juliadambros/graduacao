#include <iostream>
using namespace std;

#define N 3

void imprima();

typedef struct{
    string nome;
    int idade;
    float nota;
} Alunos;

int main(){
    Alunos *ptr = new Alunos; 

    cout << "Nome do aluno: ";
    getline(cin, ptr->nome);
    cout << "Idade: ";
    cin >> ptr->idade;
    cout << "Insira a nota: ";
    cin >> ptr->nota;
    cout << "O aluno " << ptr->nome << " tem " << ptr->idade
         << " anos de idade. Sua nota eh: " << ptr->nota << endl;

    delete ptr;

    return 0;
}