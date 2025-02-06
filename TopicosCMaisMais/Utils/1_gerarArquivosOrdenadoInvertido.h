#ifndef GERARARQUIVOSORDENADOINVERTIDO_H_INCLUDED
#define GERARARQUIVOSORDENADOINVERTIDO_H_INCLUDED

void gerarArquivosOrdenadoInvertido()
{
    /* muito deselegante dava pra ter feito tudo dentro do mesmo loop (posso mudar isso dps, se eu tiver tempo)
    FILE *OrdenadoUm, *InvertidoUm, *OrdenadoDois, *InvertidoDois, *OrdenadoTres, *InvertidoTres, *OrdenadoQuatro, *InvertidoQuatro;
    int tam, x;
    tam = 500000;
    OrdenadoUm = fopen("OrdenadoUm.txt", "w");
    if(OrdenadoUm == NULL) {
        cout << "Erro ao criar arquivo OrdenadoUm.txt" << endl;
        return;
    }
    for(x = 1; x <= tam; x++) {
        fprintf(OrdenadoUm, "%d\n", x);
    }
    fclose(OrdenadoUm);

    InvertidoUm = fopen("InvertidoUm.txt", "w");
    if(InvertidoUm == NULL) {
        cout << "Erro ao criar arquivo InvertidoUm.txt" << endl;
        return;
    }
    for(x = tam; x >= 1; x--) {
        fprintf(InvertidoUm, "%d\n", x);
    }
    fclose(InvertidoUm);

    tam = 750000;
    OrdenadoDois = fopen("OrdenadoDois.txt", "w");
    if(OrdenadoDois == NULL) {
        cout << "Erro ao criar arquivo OrdenadoDois.txt" << endl;
        return;
    }
    for(x = 1; x <= tam; x++) {
        fprintf(OrdenadoDois, "%d\n", x);
    }
    fclose(OrdenadoDois);

    InvertidoDois = fopen("InvertidoDois.txt", "w");
    if(InvertidoDois == NULL) {
        cout << "Erro ao criar arquivo InvertidoDois.txt" << endl;
        return;
    }
    for(x = tam; x >= 1; x--) {
        fprintf(InvertidoDois, "%d\n", x);
    }
    fclose(InvertidoDois);

    tam = 1000000;
    OrdenadoTres = fopen("OrdenadoTres.txt", "w");
    if(OrdenadoTres == NULL) {
        cout << "Erro ao criar arquivo OrdenadoTres.txt" << endl;
        return;
    }
    for(x = 1; x <= tam; x++) {
        fprintf(OrdenadoTres, "%d\n", x);
    }
    fclose(OrdenadoTres);

    InvertidoTres = fopen("InvertidoTres.txt", "w");
    if(InvertidoTres == NULL) {
        cout << "Erro ao criar arquivo InvertidoTres.txt" << endl;
        return;
    }
    for(x = tam; x >= 1; x--) {
        fprintf(InvertidoTres, "%d\n", x);
    }
    fclose(InvertidoTres);

        tam = 5000000;
    OrdenadoQuatro = fopen("OrdenadoQuatro.txt", "w");
    if(OrdenadoQuatro == NULL) {
        cout << "Erro ao criar arquivo OrdenadoQuatro.txt" << endl;
        return;
    }
    for(x = 1; x <= tam; x++) {
        fprintf(OrdenadoQuatro, "%d\n", x);
    }
    fclose(OrdenadoQuatro);


    InvertidoQuatro = fopen("InvertidoQuatro.txt", "w");
    if(InvertidoQuatro == NULL) {
        cout << "Erro ao criar arquivo InvertidoQuatro.txt" << endl;
        return;
    }
    for(x = tam; x >= 1; x--) {
        fprintf(InvertidoQuatro, "%d\n", x);
    }
    fclose(InvertidoQuatro);

    cout << "Arquivos ordenados e invertidos gerados com sucesso!" << endl; */
}

#endif // GERARARQUIVOSORDENADOINVERTIDO_H_INCLUDED
