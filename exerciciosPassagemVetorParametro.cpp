//A
#include <iostream>
#include <climits>
#define N 5
using namespace std;
void ordenar(int& a, int& b);
void decomporDouble(double x, int* int_part, double* frac_part);
void popularV(int v[], int n);
int maior(int v[], int n);
float media(int v[N]);
int positivos(int *v, int n);
void maiorMenor(int *v, int n, int *maiorN, int *menorN);

int main() {
    double numero, parte_fracionaria;
    int parte_inteira, num1, num2;
    cout << "digite um numero: " << endl;
    cin >> numero;
    decomporDouble(numero, &parte_inteira, &parte_fracionaria);
    cout << "Parte inteira: " << parte_inteira << endl;
    cout << "Parte fracionaria: " << parte_fracionaria << endl;
    cout << "Digite 2 numeros inteiros "<< endl;
    cin >> num1 >> num2;
    ordenar (num1 ,num2);
    cout << "Os valores em ordem: " << num1 << " " << num2;

//B: o erro é que ele não percorria todo o vetor para retornar false
//bool has_zero(int a[], int n) {
//    int i;
//    for (i = 0; i < n; i++){
//      if (a[i] == 0){             
//            return true;
//       }
//    }
//    return false;
//}

int Vetor[N], maiorN=INT_MIN, menorN=INT_MAX;
popularV(Vetor, N);
cout<<"maior numero = "<<maior(Vetor, N)<<endl;
cout<<"media = "<<media(Vetor)<<endl;
cout<<"numero e positivos = "<<positivos(Vetor, N)<<endl;
maiorMenor(Vetor, N, &maiorN, &menorN);
cout<<"maior n = " <<maiorN << ", menor n ="<<menorN;
return 0;
}
//1)
void ordenar(int& a, int& b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}
//2
void decomporDouble(double x, int* int_part, double* frac_part) {// Exercício 2 da letra A
    *int_part = static_cast<int>(x);
    *frac_part = x - static_cast<double>(*int_part);
}
//C
void popularV(int v[], int n){
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
}

int maior(int v[], int n){
    int maiorN=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>maiorN){
            maiorN=v[i];
        }
    }
    return maiorN;
}

float media(int v[N]){
    float media;
    int soma=0;
    for(int i=0;i<N;i++){
        soma+=v[i];
    }
    return soma/N;
}

int positivos(int *v, int n){
    int posit=0;
    for(int i=0;i<n;i++){
        if(v[i]>=0){
            posit++;
        }
    }
    return posit;
}

void maiorMenor(int *v, int n, int *maiorN, int *menorN){
    for(int i=0;i<n;i++){
        if(v[i]>*maiorN){
            *maiorN=v[i];
        }
        if(*menorN>v[i]){
            *menorN=v[i];
        }
    }
}

//D
//6) a linha 16 imprime *ss, que na função, é inicializado como 0 e soma i conforme x é divisível por i,até que i se iguale a c.
//7) a linha 19 decide se o número tem a característica ou não, existe caso o quadrado da soma do resto da divisão deste por 100
//e o resultado dessa divisão seja igual ao numero;
//8) mostra quantos divisores o número tem.