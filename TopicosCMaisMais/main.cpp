#include <iostream>
#include <vector>
#include <stdio.h>
#include "Metodos.h"
#include "Utilidades.h"
// caso você não tenha visto eu fiz um .txt com o link das planilhas e gráficos
// link do planilhão : https://docs.google.com/spreadsheets/d/12IMN48a9gf57Y3KxPM9VpMeJ99NlpfV9AGy4yBewQL4/edit?usp=sharing
using namespace std;
int main()
{
    int op, opDois;
    do
    {
        cout << "-------  MENU  --------" << endl;
        cout << ("0 - Gerar arquivos") << endl;
        cout << ("1 - BubbleSort") << endl;
        cout << ("2 - InsertSort") << endl;
        cout << ("3 - SelectionSort") << endl;
        cout << ("4 - ShellSort") << endl;
        cout << ("5 - QuickSort") << endl;
        cout << ("6 - MergeSort") << endl;
        cout << ("7 - HeapSort") << endl;
        cout << ("8 - RadixSort") << endl;
        cout << ("9 - Sair") << endl;
        cout << ("Escolha uma opcao :");
        cin >> op;
        switch(op)
        {
        case 0 :
            cout << "Gerando arquivos..." << endl;
            // gerarArquivosOrdenadoInvertido();
            // gerarArquivoRandomico();
            cout << "Arquivos gerados com sucesso!" << endl;
            break;
        case 1 :
            cout << "Executando testes com BubbleSort..." << endl;
            cout << "Escolha\n1 - 500k\n2 - 750k\n3 - 1M" << endl;
            cin >> opDois;
            generico(opDois, bubbleSort, "BubbleSort");
            break;
        case 2 :
            cout << "Executando testes com InsertSort..." << endl;
            cout << "Escolha\n1 - 500k\n2 - 750k\n3 - 1M" << endl;
            cin >> opDois;
            generico(opDois, insertSort, "InsertSort");
            break;
        case 3 :
            cout << "Executando testes com SelectionSort..." << endl;
            cout << "Escolha\n1 - 500k\n2 - 750k\n3 - 1M\n4 - 5M" << endl;
            cin >> opDois;
            generico(opDois, selectionSort, "SelectionSort");
            break;
        case 4 :
            cout << "Executando testes com ShellSort..." << endl;
            cout << "Escolha\n1 - 500k\n2 - 750k\n3 - 1M\n4 - 5M" << endl;
            cin >> opDois;
            generico(opDois, shellSort, "ShellSort");
            break;
        case 5 :
            cout << "Executando testes com QuickSort..." << endl;
            cout << "Escolha\n1 - 500k\n2 - 750k\n3 - 1M\n4 - 5M" << endl;
            cin >> opDois;
            generico(opDois, quickSort, "QuickSort");
            break;
        case 6 :
            cout << "Executando testes com MergeSort..." << endl;
            cout << "Escolha\n1 - 500k\n2 - 750k\n3 - 1M\n4 - 5M" << endl;
            cin >> opDois;
            generico(opDois, mergeSort, "MergeSort");
            break;
        case 7 :
            cout << "Executando testes com HeapSort..." << endl;
            cout << "Escolha\n1 - 500k\n2 - 750k\n3 - 1M\n4 - 5M" << endl;
            cin >> opDois;
            generico(opDois, heapSort, "HeapSort");
            break;
        case 8 :
            cout << "Executando testes com RadixSort..." << endl;
            cout << "Escolha\n1 - 500k\n2 - 750k\n3 - 1M\n4 - 5M" << endl;
            cin >> opDois;
            generico(opDois, radixSort, "RadixSort");
            break;
        case 9 :
            // system("cls");
            cout << "Tchau!!!" << endl;
            break;
        default :
            cout << "Opcao Invalida! Tente Novamente..." << endl;
            break;
        }
    }
    while(op!=9);
}
