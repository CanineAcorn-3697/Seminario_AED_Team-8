#include <stdio.h>

/*Implementação do Merge Sort*/
void mergesort(int p, int r, int *v)
{
  if (p < r)
  {
    int q = (p + r) / 2;
    mergesort(p, q, v);
    mergesort(q + 1, r, v);
    intercala(p, q + 1, r, v);
  }
}
/*Implementação d Bubble Sort*/
void bubbleSort(int *arr, int n)
{
  int i, j;
  for (i = 0; i < n - 1; i++)

    // Last i elements are already in place
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        troca(&arr[j], &arr[j + 1]);
      }
    }
}

/*Implementaão do Insertion Sort*/
void insertionSort(int *arr, int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;

    /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

/*Implementação do Quick Sort*/
void quickSort(int *array, int low, int high)
{
  if (low < high)
  {
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

/*Função que troca dois elementos de lugar*/
void troca(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}
/*O algoritmo divide o vetor em duas partes ordenadas, e então combina essas partes de maneira ordenada.
Os argumentos p, q, e r são índices do vetor v. p é o índice do primeiro elemento da primeira parte do vetor, q é o índice do último elemento da primeira parte e r é o índice do último elemento do vetor*/
void intercala(int p, int q, int r, int *v)
{
  int count1, j, k;
  //vetor temporario
  int w[478];

  count1 = p;
  j = q;
  k = 0;

  while (count1 < q && j <= r)
  {
    if (v[count1] <= v[j])
    {
      w[k++] = v[count1++];
    }
    else
    {
      w[k++] = v[j++];
    }
  }

  while (count1 < q)
    w[k++] = v[count1++];

  while (j <= r)
  {
    w[k++] = v[j++];
  }

  for (count1 = p; count1 <= r; count1++)
  {
    v[count1] = w[count1 - p];
  }
}


/*O objetivo do algoritmo é rearranjar um vetor de inteiros de tal forma que todos os elementos menores ou iguais a um determinado valor (denominado pivô) fiquem à esquerda do vetor e todos os elementos maiores que o pivô fiquem à direita.*/
int partition(int *array, int low, int high)
{

  int pivot = array[high];

  int i = (low - 1);

  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {
      i++;
      troca(&array[i], &array[j]);
    }
  }

  troca(&array[i + 1], &array[high]);

  return (i + 1);
}

/*função para tansferir os elemenso dos casos de teste para um vetor auxiliar*/
void transferevetor(int *vector, int *aux, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    aux[i] = vector[i];
  }
}

/*Função para mostrar o vetor*/
void mostra_vetor(int *v, int size)
{
  int count1, j;

  printf("\n{ %2d", v[0]);

  for (count1 = 1; count1 < size; count1++)
  {
    printf(", %2d", v[count1]);
  }

  printf("}\n");
}