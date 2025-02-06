#ifndef EXECUTARTESTE_H_INCLUDED
#define EXECUTARTESTE_H_INCLUDED

void executarTeste(const char* nomeArquivo, void (*algoritmo)(std::vector<int>&), const std::string& nomeAlgoritmo)
{
    std::vector<int> arr = carregarArquivo(nomeArquivo);

    std::cout << "Executando " << nomeAlgoritmo << " em " << nomeArquivo << "..." << std::endl;
    clock_t inicio = clock();
    algoritmo(arr);
    clock_t fim = clock();

    if (verificarOrdenacao(arr))
    {
        std::cout << nomeAlgoritmo << " completado com sucesso!" << std::endl;
    }
    else
    {
        std::cout << "Erro: O vetor não foi ordenado corretamente." << std::endl;
    }

    double duracao = double(fim - inicio) / CLOCKS_PER_SEC;
    std::cout << "Tempo de execução: " << duracao << " segundos" << std::endl << std::endl;

}

#endif // 5_EXECUTARTESTE_H_INCLUDED
