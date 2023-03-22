#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort( int arr[], int n)
{
 int i,j;
 int counter; 

  for(i = 0; i<n-1; i++)
    {
      for(j=0; j<n-i-1; j++)
      {
        if(arr[j+1] < arr[j])
          {
            swap(&arr[j+1],&arr[j]);
            counter++;
          }
        
      }
        printf("pass #%d: %d\n",i+1,counter);
      
      counter=0;
    }
  
  
}

int main(void) {
  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  bubbleSort(arr, 9);


  
  return 0;
}