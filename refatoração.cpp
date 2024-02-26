#include<iostream>
using namespace std;

const double PI = 3.14159; // Constante para o valor de P

//antes da refatoração
int operações(){
    int a,b;
    int s,d,m;
    cout<<"digite 'a' e 'b'"<<endl;
    cin>>a>>b;
    s=a+10;
    d=a-5;
    m = a*b;
    cout<<"soma:"<< s <<endl;
    cout<<"subtração:"<< d <<endl;
    cout<<"multiplicação:"<< m <<endl;
}
//depois da refatoração
int soma(int a){
    int somar;
    somar=a+10;
    return somar;
}
int diminui(int a){
    int diminuir;
    diminuir=a-5;
    return diminuir;
}
int multiplicar(int a, int b){
    int mult;
    mult = a*b;
    return mult;
}
//antes da refatoração
void preçoDesconto(){
    double preco = 100.0;
    double desconto = 0.1; // 10% de desconto
    double taxaAdicional = 0.05; // 5% de taxa adicional

    double precoComDesconto = preco * (1.0 - desconto);
    double precoFinal = precoComDesconto * (1.0 + taxaAdicional);

    cout << "Preço original: $" << preco << endl;
    cout << "Desconto aplicado: $" << preco * desconto << endl;
    cout << "Preço com desconto: $" << precoComDesconto << endl;
    cout << "Taxa adicional aplicada: $" << precoComDesconto * taxaAdicional << endl;
    cout << "Preço final: $" << precoFinal << endl;

}
//depois da refatoração
//função para calcular o desconto
double calcularDesconto(double preco, double descontoPercentual) {
    return preco * (descontoPercentual / 100.0);
}

//função para calcular a taxa adicional
double calcularTaxaAdicional(double precoComDesconto, double taxaAdicionalPercentual) {
    return precoComDesconto * (taxaAdicionalPercentual / 100.0);
}

//função para exibir os resultados
void exibirResultados(double preco, double desconto, double precoComDesconto, double taxaAdicional, double precoFinal) {
    cout << "Preço original: $" << preco << endl;
    cout << "Desconto aplicado: $" << desconto << endl;
    cout << "Preço com desconto: $" << precoComDesconto << endl;
    cout << "Taxa adicional aplicada: $" << taxaAdicional << endl;
    cout << "Preço final: $" << precoFinal << endl;
}

int operaçãoGeomtrica(){
    double radius = 5.0; // Raio do círculo

    // Cálculo da área usando a constante PI
    double area = PI * radius * radius;

    // Exibindo o resultado
    cout << "A área do círculo com raio " << radius << " é: " << area << endl;

}

void exibirMensagemQuente() {
    cout << "Muito quente!";
}

void exibirMensagemAgradavel() {
    cout << "Clima agradável.";
}

void exibirMensagemFresco() {
    cout << "Fresco.";
}

void exibirMensagemMuitoFrio() {
    cout << "Muito frio!";
}

void avaliarTemperatura(int temperatura) {
    if (temperatura > 100) {
        exibirMensagemQuente();
    } else if (temperatura > 70) {
        exibirMensagemAgradavel();
    } else if (temperatura > 50) {
        exibirMensagemFresco();
    } else {
        exibirMensagemMuitoFrio();
    }
}

int main(){
    int a,b;
    int temperatura = 50;
    cout<<"digite 'a' e 'b'"<<endl;
    cin>>a>>b;
    operações();
    cout<<"soma é:"<<soma(a)<<endl;
    cout<<"subtração é:"<<diminui(a)<<endl;
    cout<<"multiplicação é:"<<multiplicar(a,b)<<endl;

    preçoDesconto();

    // Exemplo com variáveis explicativas
    double preco = 100.0;
    double descontoPercentual = 10.0; // 10% de desconto
    double taxaAdicionalPercentual = 5.0; // 5% de taxa adicional

    // Cálculos
    double desconto = calcularDesconto(preco, descontoPercentual);
    double precoComDesconto = preco - desconto;
    double taxaAdicional = calcularTaxaAdicional(precoComDesconto, taxaAdicionalPercentual);
    double precoFinal = precoComDesconto + taxaAdicional;

    // Exibindo resultados
    exibirResultados(preco, desconto, precoComDesconto, taxaAdicional, precoFinal);

    avaliarTemperatura(temperatura); //5

    return 0;
}