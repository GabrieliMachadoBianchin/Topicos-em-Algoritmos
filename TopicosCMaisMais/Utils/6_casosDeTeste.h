#ifndef CASOSDETESTE_H_INCLUDED
#define CASOSDETESTE_H_INCLUDED

using namespace std;

void testes500k(void (*algoritmo)(vector<int>&), const string& nomeAlgoritmo)
{
    executarTeste("RandomUm.txt", algoritmo, nomeAlgoritmo);
    executarTeste("OrdenadoUm.txt", algoritmo, nomeAlgoritmo);
    executarTeste("InvertidoUm.txt", algoritmo, nomeAlgoritmo);
}

void testes750k(void (*algoritmo)(vector<int>&), const string& nomeAlgoritmo)
{
    executarTeste("RandomDois.txt", algoritmo, nomeAlgoritmo);
    executarTeste("OrdenadoDois.txt", algoritmo, nomeAlgoritmo);
    executarTeste("InvertidoDois.txt", algoritmo, nomeAlgoritmo);
}

void testes1M(void (*algoritmo)(vector<int>&), const string& nomeAlgoritmo)
{
    executarTeste("RandomTres.txt", algoritmo, nomeAlgoritmo);
    executarTeste("OrdenadoTres.txt", algoritmo, nomeAlgoritmo);
    executarTeste("InvertidoTres.txt", algoritmo, nomeAlgoritmo);
}

void testes5M(void (*algoritmo)(vector<int>&), const string& nomeAlgoritmo)
{
    executarTeste("RandomQuatro.txt", algoritmo, nomeAlgoritmo);
    executarTeste("OrdenadoQuatro.txt", algoritmo, nomeAlgoritmo);
    executarTeste("InvertidoQuatro.txt", algoritmo, nomeAlgoritmo);
}

#endif // 6_CASOSDETESTE_H_INCLUDED
