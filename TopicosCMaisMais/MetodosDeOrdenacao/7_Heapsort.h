#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED
// Código parcialmente extraído do site do professor Paulo Feofiloff (IME-USP)
// Não confio mais nesse professor não, o código estava incorreto

void constroiHeap(int m, std::vector<int>& arr)
{
    for (int k = 1; k < m; ++k)
    {
        int f = k;
        while (f > 0 && arr[(f - 1) / 2] < arr[f])
        {
            std::swap(arr[(f - 1) / 2], arr[f]);
            f = (f - 1) / 2;
        }
    }
}

void peneira(int m, std::vector<int>& arr)
{
    int p = 0, f = 2 * p + 1;
    int x = arr[p];

    while (f < m)
    {
        if (f + 1 < m && arr[f] < arr[f + 1]) ++f;
        if (x >= arr[f]) break;
        arr[p] = arr[f];
        p = f;
        f = 2 * p + 1;
    }
    arr[p] = x;
}

void heapSort(std::vector<int>& arr)
{
    int n = arr.size();
    constroiHeap(n, arr);
    for (int m = n - 1; m > 0; --m)
    {
        std::swap(arr[0], arr[m]);
        peneira(m, arr);
    }
}

#endif // 7_HEAPSORT_H_INCLUDED
