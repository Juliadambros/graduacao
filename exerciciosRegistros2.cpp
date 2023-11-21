#include <iostream> 
#define N 3
using namespace std;
void imprima();
typedef struct{
    string nome;
    int idade;
    float nota;
}Alunos;
Alunos alunosV[N];
int main(){
    for(int i=0; i<N; i++){
        cout << "ALUNO " << i+1 << endl;
        cout << "Nome: ";
        getline(cin, alunosV[i].nome);
        cout << "Idade: ";
        cin >> alunosV[i].idade;
        cout << "Nota: ";
        cin >> alunosV[i].nota;
        cin.ignore();
    }
    system("cls");
    imprima();
}
void imprima(){
    for(int i=0;i<N;i++){
        cout << "O aluno " << alunosV[i].nome << " tem " << alunosV[i].idade
             << " anos de idade. Sua nota eh: " << alunosV[i].nota<< endl;
    }
}