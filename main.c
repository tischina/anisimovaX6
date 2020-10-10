/*В одномерном массиве, состоящем из п вещественных элементов, вычислить:
1)	сумму положительных элементов массива;
2)	произведение элементов массива, расположенных между максимальным по модулю и минимальным по модулю элементами.
Упорядочить элементы массива по убыванию. */

#include <stdio.h>
#include <math.h>
#define MAX_ELEMENTS 8 //размерность массива

int main(int argc, char* argv[])
{
int n, i,j;
int m[MAX_ELEMENTS]={-1, 20, -61, 0, 16, -5990, 9, 11}, result = 1; int iMax;

int score=0, p=1;


iMax=0;

for (i = 0; i < MAX_ELEMENTS; i++)
{
if (m[i] > 0) {score = score + m[i];} 
}
printf("%d\n", score);

for (i = 0; i < MAX_ELEMENTS; i++)
{
if (abs(m[i]) > abs(m[iMax])) {iMax = i;} //max по модулю элемент
}

int iMin=0;

for (i = 0; i < MAX_ELEMENTS; i++)
{
if (abs(m[i]) < abs(m[iMin])) {iMin = i;} //min по модулю элемент
}

for (i = 0; i < MAX_ELEMENTS; i++)
{
if (i>iMin && i<iMax) {p=p*m[i];} //min по модулю элемент
}

printf("P=%d\n", p);

printf("Sort : ");
for(i = 0 ; i < MAX_ELEMENTS; i++) { 

       for(j = 0 ; j < MAX_ELEMENTS - i - 1 ; j++) {  
           if(m[j] > m[j+1]) {           
              
              int tmp = m[j];
              m[j] = m[j+1] ;
              m[j+1] = tmp; 
           }
        }
printf("%d ", m[j]);
  }
    return 0;
 }