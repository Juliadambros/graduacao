//exercicios protótipo e interface
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int soma(int n);
bool anoBi(int ano);
void binario();
bool validarSenha(const string senha);
double calcularValorFuturo(double principal, double taxaDeJurosAnual, int anos);
void ordem();


int main(){
    int n, ano;
    double principal, taxaDeJurosAnual;
    int anos;
    int vetor[6]={0};

    cout<< soma (n) <<endl;

    if(anoBi(ano)){
        cout<<"o ano e bissexto"<<endl;
    }else
        cout<<"o ano nao e bissexto"<<endl;

    binario();

    string senha;
    do{
        cout << "Digite a senha: "<<endl;
        cin >> senha;

        if (validarSenha(senha)) {
            cout << "A senha eh valida." << endl;
        } else {
            cout << "A senha nao eh valida." << endl;
        }
    }while((validarSenha(senha)==false));
    

    cout << "O valor futuro do investimento sera de: R$ " << calcularValorFuturo(principal, taxaDeJurosAnual, anos) << endl;

    ordem();

}
//numero 1
int soma(int n){
    int soma=0;
    cout<<"escreva um numero"<<endl;
    cin>>n;
    for(int i=n; i>=0; i--){
        soma+=i;
    }
    return soma;
}
//numero 2
bool anoBi(int ano){
    cout<<"digite um ano"<<endl;
    cin>>ano;
    if((ano%4==0)&&(ano%100==0)&&(ano%400==0)){
        return true;
    }else if((ano%4==0)&&(ano%100!=0)){
        return true;
    }else
        return false;
}
//numero 3
void binario(){
    int vetor[9], b, i=0;
    cout<<"digite um numero no maximo 1024"<<endl;
    cin>>b;
    while(b!=0){
        vetor[i]=b%2;
        b/=2;
        i++;
    }
    while(i--){
        cout<<vetor[i]<<endl;
    }
}
//numero 4
bool validarSenha(const string senha) {
    if (senha.length() < 8) {
        return false;     
    }
    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temNumero = false;

    for (int i = 0; i < senha.length(); i++) {
        if (senha[i] >= 'A' && senha[i] <= 'Z') {
            temMaiuscula = true;
        } else if (senha[i] >= 'a' && senha[i] <= 'z') {
            temMinuscula = true;
        } else if (senha[i] >= '0' && senha[i] <= '9') {
            temNumero = true;
        }
    }
    return temMaiuscula && temMinuscula && temNumero;
}
//numero 5
double calcularValorFuturo(double principal, double taxaDeJurosAnual, int anos) {
    cout << "Informe o valor principal"<<endl;
    cin >> principal;

    cout << "Informe a taxa de juros anual (em porcentagem) "<<endl;
    cin >> taxaDeJurosAnual;

    cout << "Informe o numero de anos"<<endl;
    cin >> anos;

    double taxaDeJurosMensal = taxaDeJurosAnual / 12 / 100; // Convertendo a taxa de juros anual para mensal
    int meses = anos * 12; 

    double valorFuturo = principal * pow(1 + taxaDeJurosMensal, meses);

    return valorFuturo;
}
//numero 6
void ordem(){
    int tamanho, aux, menor=INT_MAX, j=0;

    cout<<"insira o tamanho do vetor"<<endl;
    cin>>tamanho;
    cout<<"insira os valores do vetor"<<endl;
    int V[tamanho];
    for(int i=0; i<tamanho; i++){
        cin>>V[i];
    }
    for(int i=0; i<tamanho; i++){
        for(j=i; j<tamanho; j++){
            if(V[i]>V[j]){
                aux=V[i];
                V[i]=V[j];
                V[j]=aux;
            }
        }
    }
    for(int i=0; i<tamanho;i++){
        cout<<V[i];
    }
}