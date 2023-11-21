#include <iostream>
#include <cstring>
using namespace std;
typedef struct{
    string nome;
    int idade;
    float nota;
} estudante;
typedef struct{
    estudante aluno;
}Curso;

int main(){
    Curso novo;
    cout << "Nome do aluno: ";
    getline(cin, novo.aluno.nome);
    cout << "Idade: ";
    cin >> novo.aluno.idade;
    cout << "Nota: ";
    cin >> novo.aluno.nota;
    cout << "O aluno " << novo.aluno.nome << " de " << novo.aluno.idade << " Anos de idade tirou em matematica: "
         << novo.aluno.nota << " pontos!" << endl;
}