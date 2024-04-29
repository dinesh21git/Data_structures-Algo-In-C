#include <stdio.h>
#include <stdlib.h>


void bubble_sort(int arr[],int size) {
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1;) {
           if (arr[j] > arr[j + 1]){
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
           }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);


    bubble_sort(arr, size);

    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



/*
This is how the code works ---->
Original array:
64 34 25 12 22 11 90 
Outer loop (i): i = 0
Inner loop (j): j = 0
Inner loop (j): j = 1
Inner loop (j): j = 2
Inner loop (j): j = 3
Inner loop (j): j = 4
Inner loop (j): j = 5
Outer loop (i): i = 1
Inner loop (j): j = 0
Inner loop (j): j = 1
Inner loop (j): j = 2
Inner loop (j): j = 3
Inner loop (j): j = 4
Outer loop (i): i = 2
Inner loop (j): j = 0
Inner loop (j): j = 1
Inner loop (j): j = 2
Inner loop (j): j = 3
Outer loop (i): i = 3
Inner loop (j): j = 0
Inner loop (j): j = 1
Outer loop (i): i = 4
Inner loop (j): j = 0
Outer loop (i): i = 5

Sorted array:
11 12 22 25 34 64 90 


Iteration 1 (i = 0):

1.Inner loop (j = 0 to 5):
Compare arr[0] (64) with arr[1] (34). Since 64 > 34, swap them.
Array after first iteration: 34 64 25 12 22 11 90
Compare arr[1] (64) with arr[2] (25). Since 64 > 25, swap them.
Array after second iteration: 34 25 64 12 22 11 90
Compare arr[2] (64) with arr[3] (12). Since 64 > 12, swap them.
Array after third iteration: 34 25 12 64 22 11 90
Compare arr[3] (64) with arr[4] (22). Since 64 > 22, swap them.
Array after fourth iteration: 34 25 12 22 64 11 90
Compare arr[4] (64) with arr[5] (11). Since 64 > 11, swap them.
Array after fifth iteration: 34 25 12 22 11 64 90
Compare arr[5] (64) with arr[6] (90). No swap needed.
Array after the first iteration (i = 0): 34 25 12 22 11 64 90
Iteration 2 (i = 1):

2.Inner loop (j = 0 to 4):
Compare arr[0] (34) with arr[1] (25). Since 34 > 25, swap them.
Array after first iteration: 25 34 12 22 11 64 90
Compare arr[1] (34) with arr[2] (12). Since 34 > 12, swap them.
Array after second iteration: 25 12 34 22 11 64 90
Compare arr[2] (34) with arr[3] (22). Since 34 > 22, swap them.
Array after third iteration: 25 12 22 34 11 64 90
Compare arr[3] (34) with arr[4] (11). Since 34 > 11, swap them.
Array after fourth iteration: 25 12 22 11 34 64 90
Compare arr[4] (34) with arr[5] (64). No swap needed.
Array after the second iteration (i = 1): 25 12 22 11 34 64 90
Iteration 3 (i = 2):

3.Inner loop (j = 0 to 3):
Compare arr[0] (25) with arr[1] (12). Since 25 > 12, swap them.
Array after first iteration: 12 25 22 11 34 64 90
Compare arr[1] (25) with arr[2] (22). Since 25 > 22, swap them.
Array after second iteration: 12 22 25 11 34 64 90
Compare arr[2] (25) with arr[3] (11). Since 25 > 11, swap them.
Array after third iteration: 12 22 11 25 34 64 90
Compare arr[3] (25) with arr[4] (34). No swap needed.
Array after the third iteration (i = 2): 12 22 11 25 34 64 90
Iteration 4 (i = 3):

4.Inner loop (j = 0 to 2):
Compare arr[0] (12) with arr[1] (22). No swap needed.
Compare arr[1] (22) with arr[2] (11). Since 22 > 11, swap them.
Array after first iteration: 12 11 22 25 34 64 90
Compare arr[2] (22) with arr[3] (25). No swap needed.
Array after the fourth iteration (i = 3): 12 11 22 25 34 64 90
Iteration 5 (i = 4):

5.Inner loop (j = 0 to 1):
Compare arr[0] (12) with arr[1] (11). Since 12 > 11, swap them.
Array after first iteration: 11 12 22 25 34 64 90
Compare arr[1] (12) with arr[2] (22). No swap needed.
Array after the fifth iteration (i = 4): 11 12 22 25 34 64 90
Iteration 6 (i = 5):

6.Inner loop (j = 0):
No swaps needed.
Array after the sixth iteration (i = 5): 11 12 22 25 34 64 90
After the 6th iteration, the array is completely sorted in ascending order: 11 12 22 25 34 64 90. Each iteration of the outer loop moves the largest unsorted element to its correct position at the end of the array.

*/
