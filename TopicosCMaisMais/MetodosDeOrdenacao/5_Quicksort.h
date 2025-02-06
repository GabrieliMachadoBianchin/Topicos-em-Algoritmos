#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED
// Código parcialmente extraído do site do professor Paulo Feofiloff (IME-USP)
// Não mais pq estava dando stack overflow :C

int mediana(int a, int b, int c)
{
    if ((a > b) != (a > c)) return a;
    else if ((b > a) != (b > c)) return b;
    else return c;

}

int particione(std::vector<int>& arr, int esquerda, int direita)
{
    int x = mediana(arr[esquerda], arr[direita], arr[(direita+esquerda)/2]);

    int down = esquerda;
    int up = direita;

    while (down <= up)
    {
        while (arr[down] < x)
        {
            down++;
        }
        while (arr[up] > x)
        {
            up--;
        }
        if (down <= up)
        {
            std::swap(arr[down], arr[up]);
            down++;
            up--;
        }
    }
    return down - 1;
}

void quickSortRec(std::vector<int>& arr, int esquerda, int direita)
{
    if (esquerda < direita)
    {
        int pivot = particione(arr, esquerda, direita);
        quickSortRec(arr, esquerda, pivot);
        quickSortRec(arr, pivot + 1, direita);
    }
}

void quickSort(std::vector<int>& arr)
{
    if (!arr.empty())
    {
        quickSortRec(arr, 0, arr.size() - 1);
    }
}

#endif // 5_QUICKSORT_H_INCLUDED
