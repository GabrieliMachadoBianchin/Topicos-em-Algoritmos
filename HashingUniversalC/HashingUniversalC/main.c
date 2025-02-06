#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE 8
#define EMPTY -1
#define DELETED -2
#define PRIMO 13
// Nossa, eu ia separar por bibliotecas, mas deixa quieto
int hashArray[SIZE];
int a, b;
/* Hashing linear*/
int hashCode(int key)
{
    return key % SIZE;
}

bool insert(int key)
{
    int hashIndex = hashCode(key);

    for (int i = 0; i < SIZE; i++)
    {
        if (hashArray[hashIndex] == EMPTY || hashArray[hashIndex] == DELETED)
        {
            hashArray[hashIndex] = key;
            return true;
        }

        hashIndex = (hashIndex + 1) % SIZE;
    }

    return false; // Tabela está cheia
}

bool search(int key)
{
    int hashIndex = hashCode(key);

    for (int i = 0; i < SIZE; i++)
    {
        if (hashArray[hashIndex] == key)
        {
            return true;
        }
        else if (hashArray[hashIndex] == EMPTY)
        {
            return false;
        }

        hashIndex = (hashIndex + 1) % SIZE;
    }

    return false;
}

bool delete(int key)
{
    int hashIndex = hashCode(key);

    for (int i = 0; i < SIZE; i++)
    {
        if (hashArray[hashIndex] == key)
        {
            hashArray[hashIndex] = DELETED;
            return true;
        }
        else if (hashArray[hashIndex] == EMPTY)
        {
            return false;
        }

        hashIndex = (hashIndex + 1) % SIZE;
    }

    return false;
}
/* Hasing Universal*/

int calcularHash(int key)
{
    return ((a * key + b) % PRIMO) % SIZE;
}

bool inserirElemento(int key)
{
    int hashIndex = calcularHash(key);

    for (int i = 0; i < SIZE; i++)
    {
        if (hashArray[hashIndex] == EMPTY || hashArray[hashIndex] == DELETED)
        {
            hashArray[hashIndex] = key;
            return true;
        }

        hashIndex = (hashIndex + 1) % SIZE;
    }

    return false; // Tabela está cheia
}

bool procurarElemento(int key)
{
    int hashIndex = calcularHash(key);

    for (int i = 0; i < SIZE; i++)
    {
        if (hashArray[hashIndex] == key)
        {
            return true;
        }
        else if (hashArray[hashIndex] == EMPTY)
        {
            return false;
        }

        hashIndex = (hashIndex + 1) % SIZE;
    }

    return false;
}

bool removerElemento(int key)
{
    int hashIndex = calcularHash(key);

    for (int i = 0; i < SIZE; i++)
    {
        if (hashArray[hashIndex] == key)
        {
            hashArray[hashIndex] = DELETED;
            return true;
        }
        else if (hashArray[hashIndex] == EMPTY)
        {
            return false;
        }

        hashIndex = (hashIndex + 1) % SIZE;
    }

    return false;
}


void display()
{
    for (int i = 0; i < SIZE; i++)
    {
        if (hashArray[i] != EMPTY && hashArray[i] != DELETED)
        {
            printf(" %d", hashArray[i]);
        }
        else
        {
            printf(" ~~ ");
        }
    }
    printf("\n");
}

void testeUniversalDois()
{
    a = 5;
    b = 7;
    for (int i = 0; i < SIZE; i++)
    {
        hashArray[i] = EMPTY;
    }
    inserirElemento(16);
    inserirElemento(23);
    inserirElemento(41);
    inserirElemento(25);
    inserirElemento(39);
    display();
    removerElemento(41);
    removerElemento(23);
    removerElemento(25);
    display();
    inserirElemento(34);
    display();
}

void testeUniversalUm()
{
    srand(time(NULL));
    a = rand() % (SIZE - 1) + 1;
    b = rand() % SIZE;

    for (int i = 0; i < SIZE; i++)
    {
        hashArray[i] = EMPTY;
    }

    inserirElemento(16);
    inserirElemento(23);
    inserirElemento(41);
    inserirElemento(21);
    inserirElemento(25);
    inserirElemento(39);
    inserirElemento(11);
    display();
    removerElemento(41);
    removerElemento(23);
    removerElemento(25);
    display();
    if (procurarElemento(11))
        printf("\nachou\n");
    else
        printf("\nnao achou\n");
    inserirElemento(34);

    display();

}

void testeLinear()
{
    for (int i = 0; i < SIZE; i++)
    {
        hashArray[i] = EMPTY;
    }

    insert(16);
    insert(23);
    insert(41);
    insert(21);
    insert(25);
    insert(39);
    insert(11);
    display();
    delete(41);
    delete(23);
    delete(25);
    display();
    if (search(11))
        printf("\nachou\n");
    else
        printf("\nnao achou\n");
    insert(34);

    display();
}

int main()
{
    printf("\nTeste Linear\n\n");
    testeLinear();
    printf("\n\nTeste Universal Um\n\n");
    testeUniversalUm();
    printf("\n\nTeste Universal Dois\n\n");
    testeUniversalDois();

    return 0;
}
