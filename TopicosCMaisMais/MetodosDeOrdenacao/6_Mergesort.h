#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED
// Código parcialmente extraído do site do professor Paulo Feofiloff (IME-USP)

void mergeMeu(std::vector<int>& arr, int esquerda, int meio, int direita)
{
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    std::vector<int> esquerdaArr(n1), direitaArr(n2);

    for (int i = 0; i < n1; ++i)
        esquerdaArr[i] = arr[esquerda + i];
    for (int j = 0; j < n2; ++j)
        direitaArr[j] = arr[meio + 1 + j];

    int i = 0, j = 0, k = esquerda;
    while (i < n1 && j < n2)
    {
        if (esquerdaArr[i] <= direitaArr[j])
        {
            arr[k++] = esquerdaArr[i++];
        }
        else
        {
            arr[k++] = direitaArr[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = esquerdaArr[i++];
    }
    while (j < n2)
    {
        arr[k++] = direitaArr[j++];
    }
}

void mergeSortRec(std::vector<int>& arr, int esquerda, int direita)
{
    if (esquerda < direita)
    {
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSortRec(arr, esquerda, meio);
        mergeSortRec(arr, meio + 1, direita);

        mergeMeu(arr, esquerda, meio, direita);
    }
}

void mergeSort(std::vector<int>& arr)
{
    if(!arr.empty())
    {
        mergeSortRec(arr, 0, arr.size() - 1);
    }

}

#endif // 6_MERGESORT_H_INCLUDED
