#ifndef RADIXSORT_H_INCLUDED
#define RADIXSORT_H_INCLUDED

void radixSort(std::vector<int>& arr)
{
    int base = 10;
    int digito = 6;// tem que trocar conforme a qnt de digitos :C
    int tam = arr.size();

    std::vector<int> Aux(base);
    std::vector<int> Temp(tam);

    for (int m = 0; m < digito; ++m)
    {
        std::fill(Aux.begin(), Aux.end(), 0);

        for (int j = 0; j < tam; ++j)
        {
            int r = (arr[j] / static_cast<int>(pow(10, m))) % base;
            ++Aux[r];
        }

        for (int i = 1; i < base; ++i)
        {
            Aux[i] += Aux[i - 1];
        }

        for (int k = tam - 1; k >= 0; --k)
        {
            int r = (arr[k] / static_cast<int>(pow(10, m))) % base;
            int p = --Aux[r];
            Temp[p] = arr[k];
        }

        for (int o = 0; o < tam; ++o)
        {
            arr[o] = Temp[o];
        }
    }
}
#endif // 8_RADIXSORT_H_INCLUDED
