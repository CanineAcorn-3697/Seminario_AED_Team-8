#include <stdlib.h>
#include <stdio.h>

// variáveis de escolha (utilizado na main)
int verifica_vetor, escolhe_vetor;

// Listas de teste da Main
int vetor_1[478] = {478, 477, 477, 477, 476, 476, 474, 472, 472, 468, 468, 468, 467, 467, 466, 466, 466, 465, 465, 463, 461, 460, 460, 460, 460, 459, 458, 458, 457, 456, 456, 455, 455, 455, 454, 454, 454, 453, 453, 452, 450, 449, 448, 447, 447, 446, 445, 445, 444, 444, 442, 441, 441, 440, 438, 438, 437, 436, 435, 435, 434, 433, 433, 431, 429, 428, 427, 426, 426, 425, 423, 423, 421, 421, 419, 419, 418, 416, 414, 414, 413, 412, 412, 411, 411, 409, 407, 407, 407, 405, 405, 405, 403, 403, 402, 399, 398, 397, 396, 393, 392, 392, 392, 392, 391, 391, 389, 387, 387, 387, 387, 385, 383, 379, 378, 377, 372, 368, 362, 360, 358, 355, 355, 354, 354, 353, 351, 351, 351, 350, 349, 349, 348, 348, 347, 347, 346, 346, 346, 344, 344, 343, 342, 342, 342, 339, 337, 336, 336, 336, 335, 332, 332, 330, 327, 326, 326, 321, 321, 321, 320, 318, 318, 313, 313, 313, 313, 313, 309, 308, 306, 303, 301, 299, 296, 294, 293, 292, 292, 292, 291, 291, 291, 290, 289, 285, 284, 284, 282, 282, 281, 281, 280, 279, 279, 278, 277, 274, 274, 274, 272, 271, 271, 270, 270, 269, 269, 268, 268, 267, 266, 264, 264, 262, 261, 260, 259, 257, 257, 254, 253, 252, 251, 250, 249, 249, 248, 248, 245, 244, 244, 243, 243, 241, 241, 240, 240, 240, 239, 239, 238, 238, 238, 237, 236, 234, 233, 233, 232, 230, 230, 229, 229, 229, 227, 227, 223, 222, 222, 221, 220, 219, 218, 218, 215, 215, 213, 212, 211, 210, 208, 207, 206, 205, 205, 200, 200, 199, 199, 197, 196, 195, 194, 193, 193, 191, 191, 190, 189, 189, 188, 186, 185, 185, 183, 183, 182, 181, 181, 179, 178, 178, 178, 176, 176, 175, 174, 174, 174, 174, 171, 169, 168, 168, 168, 168, 167, 165, 164, 164, 163, 162, 162, 162, 158, 155, 155, 154, 154, 148, 148, 147, 145, 145, 144, 143, 142, 142, 141, 141, 139, 139, 139, 139, 136, 135, 135, 135, 135, 133, 130, 130, 130, 129, 129, 126, 126, 126, 125, 125, 124, 124, 121, 120, 119, 115, 114, 112, 112, 112, 111, 111, 109, 109, 108, 108, 107, 106, 106, 105, 104, 104, 103, 103, 102, 99, 99, 99, 99, 99, 98, 96, 96, 96, 95, 91, 91, 91, 91, 91, 89, 88, 88, 86, 84, 81, 78, 73, 73, 72, 72, 71, 71, 70, 69, 68, 66, 65, 62, 62, 61, 61, 60, 60, 59, 57, 56, 56, 56, 52, 51, 51, 51, 51, 51, 49, 49, 47, 46, 46, 45, 45, 43, 41, 37, 35, 35, 34, 32, 31, 30, 29, 28, 26, 26, 25, 24, 23, 22, 21, 18, 17, 12, 12, 12, 9, 9, 9, 8, 8, 6, 6, 4, 4, 2, 1, 1, 0};

int vetor_2[239] = {239, 238, 238, 237, 237, 236, 233, 231, 231, 231, 231, 228, 228, 227, 227, 226, 225, 224, 222, 220, 220, 219, 218, 218, 216, 213, 212, 211, 210, 210, 209, 208, 208, 205, 205, 204, 203, 203, 201, 200, 200, 200, 199, 197, 197, 196, 196, 195, 194, 193, 192, 191, 191, 187, 187, 187, 186, 184, 184, 182, 181, 180, 179, 178, 177, 177, 176, 174, 173, 173, 173, 172, 171, 171, 170, 169, 168, 167, 166, 166, 165, 164, 164, 164, 164, 163, 161, 160, 158, 155, 155, 154, 153, 152, 151, 150, 148, 148, 147, 147, 145, 144, 144, 144, 141, 140, 140, 139, 139, 138, 137, 137, 136, 134, 131, 130, 129, 127, 126, 126, 125, 124, 123, 123, 123, 122, 121, 119, 119, 118, 118, 117, 117, 117, 117, 116, 116, 115, 114, 112, 111, 110, 106, 104, 99, 98, 98, 97, 97, 95, 95, 95, 92, 91, 89, 89, 88, 88, 85, 85, 83, 82, 80, 80, 79, 78, 76, 76, 76, 75, 74, 73, 73, 72, 71, 71, 67, 65, 64, 63, 62, 60, 56, 55, 54, 54, 53, 51, 50, 48, 48, 44, 44, 42, 42, 41, 36, 36, 35, 35, 35, 34, 33, 33, 33, 32, 30, 29, 28, 28, 28, 27, 25, 23, 23, 23, 22, 21, 21, 20, 19, 17, 16, 14, 14, 12, 12, 12, 11, 10, 9, 9, 8, 8, 8, 6, 5, 4, 3};

int vetor_3[100] = {200, 199, 198, 197, 197, 196, 196, 195, 195, 192, 191, 190, 190, 189, 189, 188, 187, 185, 185, 184, 183, 180, 178, 177, 177, 176, 175, 175, 173, 173, 172, 171, 171, 170, 169, 169, 168, 168, 168, 168, 168, 167, 166, 166, 166, 165, 165, 164, 164, 162, 161, 160, 159, 159, 159, 156, 154, 154, 152, 151, 150, 150, 149, 149, 148, 147, 145, 144, 143, 142, 142, 142, 140, 137, 137, 134, 133, 133, 132, 132, 130, 130, 129, 128, 128, 127, 127, 126, 124, 124, 123, 122, 121, 119, 119, 119, 118, 115, 114, 114};

int vetor_4[50] = {48, 48, 46, 45, 44, 44, 43, 39, 39, 37, 35, 35, 34, 34, 34, 33, 33, 32, 32, 31, 29, 26, 25, 24, 23, 22, 21, 21, 20, 19, 17, 17, 16, 13, 12, 9, 9, 8, 8, 7, 6, 6, 5, 4, 3, 3, 3, 3, 2, 0};

// Algorítimos de ordenação
void mergesort(int p, int r, int *v);
void bubbleSort(int *arr, int n);
void quickSort(int *array, int low, int high);
void insertionSort(int *arr, int n);
// Algorítimos auxiliares
void troca(int *xp, int *yp);
void intercala(int p, int q, int r, int *v);
int partition(int *array, int low, int high);
void transferevetor(int *vector, int *aux, int size);
// Print
void mostra_vetor(int *v, int size);