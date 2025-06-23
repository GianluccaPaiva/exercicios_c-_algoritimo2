#include <iostream>
#include <cstdlib>
using namespace std;

int numeroAleatorio(int m)
{

    return rand() % m;
}

int* vetorAleatorio(int n)
{
    int *vetAle = new int [n];
    for(int i = 0; i<n; i++)
    {
        vetAle[i] = numeroAleatorio(100);
    }
    return vetAle;
}

int *vetDecrescente(int n)
{
    int *vetDecres = new int [n];
    for(int i =0 ; i<n; i++)
    {
        vetDecres[i] = n-i;
    }
    return vetDecres;
}

void printa(int vet[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<vet[i]<<" ";
    }
    cout<<endl;

}

void troca(int *vet, int *vet2){
    int troca = *vet;
     *vet = *vet2;
     *vet2 = troca;
}

void bubbleSort(int vet[], int n)
{
    for(int i = n-2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if(vet[j] > vet[j+1])
                troca(&vet[j], &vet[j+1]);
        }
    }
}

void selectionShort(int vet[], int n){
    for(int i = 0; i<n-1;i++){
        int mini = i;
        for(int j = i+1; j<n; j++){
            if(vet[j] < vet[mini])
                mini = j;
        }
        troca(&vet[i], &vet[mini]);
    }
}

//versão buble short que cada interação altera entre analisar a esquerda e a direita
void cocktailSort(int vet[], int n)
{
    bool trocou = true;
    int inicio = 0;
    int fim = n-1;
    while(trocou)
    {
        trocou = false;
        for(int j = inicio; j < fim; j++)
        {
            if(vet[j] > vet[j+1]){
                swap(vet[j], vet[j+1]);
                trocou = true;
            }
        }

        if(!trocou)break;
        trocou = false;
        fim--;

        for(int i = fim; i > inicio; i++)
        {
            if(vet[i-1] > vet[i]){
                swap(vet[i-1], vet[i]);
                trocou = true;
            }

        }
        inicio++;
    }
}



int main()
{
    int n;
    cin>>n;
    int *vetAle = vetorAleatorio(n);
    int *vetAle2 = vetorAleatorio(n);
    int *vetDecre = vetDecrescente(n);
    printa(vetAle, n);
    printa(vetDecre, n);
    bubbleSort(vetAle, n);
    printa(vetAle, n);
    selectionShort(vetDecre, n);
    printa(vetDecre, n);
    printa(vetAle2, n);
    cocktailSort(vetAle2, n);
    printa(vetAle2, n);
    delete [] vetAle;
    delete [] vetDecre;
    delete [] vetAle2;
}
