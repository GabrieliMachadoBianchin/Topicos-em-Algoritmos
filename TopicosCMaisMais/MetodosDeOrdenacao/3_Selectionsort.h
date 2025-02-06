#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED

void selectionSort(std::vector<int>& arr)
{
    int n = arr.size();
    for(int x =0 ; x < n-1 ; x++)
    {
        int menor = x ;
        for(int y = x+1 ; y < n ; y++)
        {
            if(arr[y] < arr[menor])
            {
                menor = y;
            }
        }
        std::swap(arr[x], arr[menor]);
    }
}

#endif // 3_SELECTIONSORT_H_INCLUDED
