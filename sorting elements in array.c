#include <stdio.h>    
     
int main()    
{    
   int temp = 0,length ;   
   printf("Enter the size of array");
   scanf("%d",&length);
   
     
     //storing the elements
     for (int i = 0; i < length; i++) {     
        scanf("%d", &arr[i]);     
    }     
    
     
    //Displaying elements of original array    
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    
     //Sort the array in ascending order    
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
   
     //Displaying elements of array after sorting    
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
 }     
