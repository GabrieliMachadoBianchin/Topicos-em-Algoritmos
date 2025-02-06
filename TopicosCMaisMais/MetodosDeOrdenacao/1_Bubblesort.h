#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

void bubbleSort(std::vector<int>& arr)
{
    int n = arr.size();
    for (int x = n - 1; x > 0; x--)
    {
        for (int y = 0; y < x; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                std::swap(arr[y], arr[y + 1]);
            }
        }
    }
}

#endif // 1_BUBBLESORT_H_INCLUDED
