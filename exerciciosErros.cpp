#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool dataAnterior(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    return (ano1 < ano2 || (ano1 == ano2 && (mes1 < mes2 || (mes1 == mes2 && dia1 < dia2))));
}

double calcularAreaCirculo(double raio) {
    const double PI = 3.141592653589793;
    return PI * pow(raio, 2);
}

int calcularFatorial(int num) {
    int fatorial = 1;
    for (int i = 1; i <= num; ++i) {
        fatorial *= i;
    }
    return fatorial;
}

void ordenarLista(vector<int>& numeros) {
    sort(numeros.begin(), numeros.end());
}

double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Função para realizar uma busca binária em uma lista ordenada
bool buscaBinaria(const vector<int>& lista, int alvo) {
    int inicio = 0;
    int fim = lista.size() - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (lista[meio] == alvo) {
            return true; // Encontrou o alvo na lista
        } else if (lista[meio] < alvo) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return false; // Alvo não encontrado na lista
}

void obterDataDoUsuario(int& dia, int& mes, int& ano) {
    cout << "Digite a data (dia mes ano): ";
    cin >> dia >> mes >> ano;
}

int obterNumeroDoUsuario() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    return numero;
}

void obterCoordenadasDoUsuario(double& x, double& y) {
    cout << "Digite as coordenadas (x y): ";
    cin >> x >> y;
}

void exibirResultadoData(bool resultado) {
    if (resultado) {
        cout << "A primeira data é anterior à segunda." << endl;
    } else {
        cout << "A primeira data não é anterior à segunda." << endl;
    }
}

void exibirResultadoAreaCirculo(double area) {
    cout << "Área do círculo: " << area << endl;
}

void exibirResultadoFatorial(int fatorial) {
    cout << "Fatorial é " << fatorial << endl;
}

void exibirResultadoListaOrdenada(const vector<int>& numerosOrdenados) {
    cout << "Lista ordenada: ";
    for (int num : numerosOrdenados) {
        cout << num << " ";
    }
    cout << endl;
}

void exibirResultadoDistancia(double distancia) {
    cout << "Distância entre os pontos: " << distancia << endl;
}

void exibirResultadoBuscaBinaria(bool resultado) {
    if (resultado) {
        cout << "O número está na lista." << endl;
    } else {
        cout << "O número não está na lista." << endl;
    }
}

int main() {
    // Teste 1: Verificar se a primeira data é anterior à segunda
    int dia1, mes1, ano1, dia2, mes2, ano2;
    obterDataDoUsuario(dia1, mes1, ano1);
    obterDataDoUsuario(dia2, mes2, ano2);
    exibirResultadoData(dataAnterior(dia1, mes1, ano1, dia2, mes2, ano2));

    // Teste 2: Calcular a área de um círculo
    double raio = obterNumeroDoUsuario();
    exibirResultadoAreaCirculo(calcularAreaCirculo(raio));

    // Teste 3: Calcular o fatorial de um número
    int num = obterNumeroDoUsuario();
    exibirResultadoFatorial(calcularFatorial(num));

    // Teste 4: Ordenar uma lista de números
    vector<int> numeros = {5, 2, 8, 1, 3};
    ordenarLista(numeros);
    exibirResultadoListaOrdenada(numeros);

    // Teste 5: Calcular a distância entre dois pontos
    double x1, y1, x2, y2;
    obterCoordenadasDoUsuario(x1, y1);
    obterCoordenadasDoUsuario(x2, y2);
    exibirResultadoDistancia(calcularDistancia(x1, y1, x2, y2));

    // Teste 6: Busca binária em uma lista ordenada
    int alvo = obterNumeroDoUsuario();
    exibirResultadoBuscaBinaria(buscaBinaria(numeros, alvo));

    return 0;
}
