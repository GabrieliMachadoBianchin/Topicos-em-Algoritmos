#ifndef CARREGARARQUIVO_H_INCLUDED
#define CARREGARARQUIVO_H_INCLUDED

std::vector<int> carregarArquivo(const char* nomeArquivo)
{
    std::vector<int> numeros;
    FILE* arquivo = fopen(nomeArquivo, "r");
    int num;

    if(arquivo == NULL)
    {
        std::cout << "Erro ao abrir o arquivo " << nomeArquivo << std::endl;
        return numeros;
    }

    while(fscanf(arquivo, "%d", &num) != EOF)
    {
        numeros.push_back(num);
    }

    fclose(arquivo);
    return numeros;
}

#endif // 3_CARREGARARQUIVO_H_INCLUDED
