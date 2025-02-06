#ifndef SHELLSORT_H_INCLUDED
#define SHELLSORT_H_INCLUDED

void shellSort(std::vector<int>& arr)
{
    int n = arr.size();
    int h;
    for( h = 1 ; h < n; h = 3*h+1);

    while(h > 0)
    {
        h = (h-1)/3;
        for(int i = h ; i < n ; i++)
        {
            int aux = arr[i];
            int j = i;
            while(arr[j - h] > aux )
            {
                arr[j] = arr[j-h];
                j -= h;
                if(j < h){ break;}// deselegante, mas não funcionaou quando tentei interromper no while
            }
            arr[j] = aux;
        }
    }
}

#endif // 4_SHELLSORT_H_INCLUDED
