#include <stdio.h>

void selectionSort(int *arr, int len);

int main() {
    int arr[] = {9,7,6,5,3,2,1};
    int len = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr,len);

     for (int i = 0 ; i < len ; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}

void selectionSort(int *arr, int len)
{
    for (int i = 0 ; i < len - 1 ; i++) 
    {
        int min_pos = i;
        for (int j = i+1; j < len ; j++){
            if (arr[j] < arr[min_pos]) {
                min_pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_pos];
        arr[min_pos] = temp;
    }
}