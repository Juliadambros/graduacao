#include <iostream> 
using namespace std;
void imprima();
typedef struct {
    string nome;
    int idade;
    float nota;
}Aluno;
Aluno aluno;
int main(){
    cout << "Nome do aluno: ";
    getline(cin, aluno.nome);
    cout << "Idade: ";
    cin >> aluno.idade;
    cout << "Insira a nota: ";
    cin >> aluno.nota;
    system("cls");
    imprima();
}
void imprima(){
    cout << "O aluno " << aluno.nome << " tem " << aluno.idade
         << " anos de idade. Sua nota eh: " << aluno.nota << endl;
}