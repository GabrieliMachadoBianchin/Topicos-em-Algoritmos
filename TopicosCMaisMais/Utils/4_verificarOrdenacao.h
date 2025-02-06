#ifndef VERIFICARORDENACAO_H_INCLUDED
#define VERIFICARORDENACAO_H_INCLUDED

bool verificarOrdenacao(std::vector<int>& arr)
{
    for(size_t i = 1; i < arr.size(); i++)
    {
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}


#endif // 4_VERIFICARORDENACAO_H_INCLUDED
