#ifndef INSERTSORT_H_INCLUDED
#define INSERTSORT_H_INCLUDED

void insertSort(std::vector<int>& arr)
{
    int n = arr.size();
    for(int x = 1; x < n; x++)
    {
        int aux = arr[x];
        int y = x - 1;
        while(y >= 0 && arr[y] > aux)
        {
            arr[y+1] = arr[y];
            y--;
        }
        arr[y+1] = aux;
    }
}

#endif // 2_INSERTSORT_H_INCLUDED
