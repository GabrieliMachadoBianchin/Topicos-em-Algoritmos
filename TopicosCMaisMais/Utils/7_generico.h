#ifndef GENERICO_H_INCLUDED
#define GENERICO_H_INCLUDED
// Ainda dá para fazer opDois ser uma variável global e não passa-la como parametro e colocar o menu aqui tbm
void generico(int num, void (*algoritmo)(std::vector<int>&), const string& nomeAlgoritmo)
{
    if(num == 1)
    {
        testes500k(algoritmo, nomeAlgoritmo);
    }
    else if(num == 2)
    {
        testes750k(algoritmo, nomeAlgoritmo);
    }
    else if(num == 3)
    {
        testes1M(algoritmo, nomeAlgoritmo);
    }
    else if(num == 4)
    {
        testes5M(algoritmo, nomeAlgoritmo);
    }
}

#endif // 7_GENERICO_H_INCLUDED
