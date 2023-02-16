#include "sort.h"
#include <stdio.h>

int main(void)
{
  // Vetor auxiliar
  int *aux;

  while (1)
  {
    printf("Escolha qual vetor deseja utilizar:\n[1] -> Vetor 1\n[2] -> Vetor 2\n[3] -> Vetor 3\n[4] -> Vetor 4\n[0] -> Sair\n");
    scanf("%d", &escolhe_vetor);
    switch (escolhe_vetor)
    {
    case 0:
      printf("Obrigado pelo Teste\n");
      return 0;
      break;
    /*Caso deo Vetor 1 ==============================================================================================*/
    case 1:
      // Alocando o aux com o tamanho do vetor 1
      aux = (int *)malloc(478 * sizeof(int));

      printf("Escolha o metodo de ordenacao:\n[1] -> Bubble Sort\n[2] -> Insertion Sort\n[3] -> Merge Sort\n[4] -> Quick Sort\n");
      scanf("%d", &verifica_vetor);
      //Dividindo os casos de ordenação Do Vetor 1
      switch (verifica_vetor)
      {
      ///Caso do Bubble Sort
      case 1:
        printf("Ordenando Vetor 1 utilizando Bubble Sort:\n==========================================\n");
        transferevetor(vetor_1, aux, 478);
        mostra_vetor(aux, 478);
        bubbleSort(aux, 478);
        mostra_vetor(aux, 478);
        free(aux);
        break;
      //Caso do Insertion Sort
      case 2:
        printf("Ordenando Vetor 1 utilizando Insertion Sort:\n==========================================\n");
        transferevetor(vetor_1, aux, 478);
        mostra_vetor(aux, 478);
        insertionSort(aux, 478);
        mostra_vetor(aux, 478);
        free(aux);
        break;
        //Caso do Merge Sort
      case 3:
        printf("Ordenando Vetor 1 utilizando Merge Sort:\n==========================================\n");
        transferevetor(vetor_1, aux, 478);
        mostra_vetor(aux, 478);
        mergesort(0, 478, aux);
        mostra_vetor(aux, 478);
        free(aux);
        break;
      //Caso do Quick Sort
      case 4:
        printf("Ordenando Vetor 1 utilizando Quick Sort:\n==========================================\n");
        transferevetor(vetor_1, aux, 478);
        mostra_vetor(aux, 478);
        quickSort(aux, 0, 478);
        mostra_vetor(aux, 478);
        free(aux);
        break;
      }
      break;
    /*Caso do Vetor 2 ==============================================================================================*/
    case 2:
      // Alocando o aux com o tamanho do vetor 2
      aux = (int *)malloc(239 * sizeof(int));

      printf("Escolha o metodo de ordenação:\n[1] -> Bubble Sort\n[2] -> Insertion Sort\n[3] -> Merge Sort\n[4] -> Quick Sort\n");
      scanf("%d", &verifica_vetor);
      //Dividindo os casos de ordenação Do Vetor 2
      switch (verifica_vetor)
      {
      ///Caso do Bubble Sort
      case 1:
        printf("Ordenando Vetor 2 utilizando Bubble Sort:\n==========================================\n");
        transferevetor(vetor_2, aux, 239);
        mostra_vetor(aux, 239);
        bubbleSort(aux, 239);
        mostra_vetor(aux, 239);
        free(aux);
        break;
      //Caso do Insertion Sort
      case 2:
        printf("Ordenando Vetor 2 utilizando Insertion Sort:\n==========================================\n");
        transferevetor(vetor_2, aux, 239);
        mostra_vetor(aux, 239);
        insertionSort(aux, 239);
        mostra_vetor(aux, 239);
        free(aux);
        break;
      //Caso do Merge Sort
      case 3:
        printf("Ordenando Vetor 2 utilizando Merge Sort:\n==========================================\n");
        transferevetor(vetor_2, aux, 239);
        mostra_vetor(aux, 239);
        mergesort(0, 239, aux);
        mostra_vetor(aux, 239);
        free(aux);
        break;
      //Caso do Quick Sort
      case 4:
        printf("Ordenando Vetor 2 utilizando Quick Sort:\n==========================================\n");
        transferevetor(vetor_2, aux, 239);
        mostra_vetor(aux, 239);
        quickSort(aux, 0, 239);
        mostra_vetor(aux, 239);
        free(aux);
        break;
      }
      break;
    /*Caso do Vetor 3 ==============================================================================================*/
    case 3:
      // Alocando o vetor auxiliar com o tamanho do vetor 3
      aux = (int *)malloc(100 * sizeof(int));

      printf("Escolha o metodo de ordenação:\n[1] -> Bubble Sort\n[2] -> Insertion Sort\n[3] -> Merge Sort\n[4] -> Quick Sort\n");
      scanf("%d", &verifica_vetor);
      //Dividindo os casos de ordenação Do Vetor 3
      switch (verifica_vetor)
      {
      ///Caso do Bubble Sort
      case 1:
        printf("Ordenando Vetor 3 utilizando Bubble Sort:\n==========================================\n");
        transferevetor(vetor_3, aux, 100);
        mostra_vetor(aux, 100);
        bubbleSort(vetor_3, 100);
        mostra_vetor(vetor_3, 100);
        free(aux);
        break;
      //Caso do Insertion Sort
      case 2:
        printf("Ordenando Vetor 3 utilizando Insertion Sort:\n==========================================\n");
        transferevetor(vetor_3, aux, 100);
        mostra_vetor(aux, 100);
        insertionSort(aux, 100);
        mostra_vetor(aux, 100);
        free(aux);
        break;
      //Caso do Merge Sort
      case 3:
        printf("Ordenando Vetor 3 utilizando Merge Sort:\n==========================================\n");
        transferevetor(vetor_3, aux, 100);
        mostra_vetor(aux, 100);
        mergesort(0, 100, aux);
        mostra_vetor(aux, 100);
        free(aux);
        break;
      //Caso do Quick Sort
      case 4:
        printf("Ordenando Vetor 3 utilizando Quick Sort:\n==========================================\n");
        transferevetor(vetor_3, aux, 100);
        mostra_vetor(aux, 100);
        quickSort(aux, 0, 100);
        mostra_vetor(aux, 100);
        free(aux);
        break;
      }
      break;
    /*Caso do Vetor 4 ==============================================================================================*/
    case 4:
      // Alocando o aux com o tamanho do vetor 4
      aux = (int *)malloc(50 * sizeof(int));

      printf("Escolha o metodo de ordenação:\n[1] -> Bubble Sort\n[2] -> Insertion Sort\n[3] -> Merge Sort\n[4] -> Quick Sort\n");
      scanf("%d", &verifica_vetor);
      //Dividindo os casos de ordenação Do Vetor 4
      switch (verifica_vetor)
      {
      ///Caso do Bubble Sort
      case 1:
        printf("Ordenando Vetor 4 utilizando Bubble Sort:\n==========================================\n");
        transferevetor(vetor_4, aux, 50);
        mostra_vetor(aux, 50);
        bubbleSort(aux, 50);
        mostra_vetor(aux, 50);
        free(aux);
        break;
      //Caso do Insertion Sort
      case 2:
        printf("Ordenando Vetor 4 utilizando Insertion Sort:\n==========================================\n");
        transferevetor(vetor_4, aux, 50);
        mostra_vetor(aux, 50);
        insertionSort(aux, 50);
        mostra_vetor(aux, 50);
        free(aux);
        break;
      //Caso do Merge Sort
      case 3:
        printf("Ordenando Vetor 4 utilizando Merge Sort:\n==========================================\n");
        transferevetor(vetor_4, aux, 50);
        mostra_vetor(aux, 50);
        mergesort(0, 50, aux);
        mostra_vetor(aux, 50);
        free(aux);
        break;
      //Caso do Quick Sort
      case 4:
        printf("Ordenando Vetor 4 utilizando Quick Sort:\n==========================================\n");
        transferevetor(vetor_4, aux, 50);
        mostra_vetor(aux, 50);
        quickSort(aux, 0, 50);
        mostra_vetor(aux, 50);
        free(aux);
        break;
      }
      break;
    }
  }
  return 0;
}