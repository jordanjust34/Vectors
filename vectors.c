// malloc(*size we want to allocate*) is used to allocate memory
    // returns a pointer to the new allocated variable

// realloc(*pointer, size we want to allocate*) reallocates a pointer to the given size

// free(*pointer to where we want to free memory*) will free any memory
    // not freeing memory may cause memory leaks
    // every call of malloc() should be associate with a free()


// 1 : Add array element
// 0 : Delete top element
// -1: Print results and end program

/*

INPUT       OUTPUT
1 4         4 8
1 3
0
1 8
-1

*/

#include <stdio.h>

int* addElement(int* arr, int len, int num){
    arr = malloc(sizeof(int) + 1);
    arr[(sizeof(arr[0]) / sizeof(arr)) - 1] = num;
    free(arr);
    return arr;
}

int* deletElement(int* arr, int mode){
    arr = realloc(sizeof(int) - 1);
    return arr;
}

int main(){
    int mode, num;
    int* arr = malloc(sizeof(int));

    while(mode != -1){
        scanf("%d %d ", &mode, &num);
        switch(mode){
            case 0:
                deletElement(arr, mode);
                break;
            case 1:
                addElement(arr, mode, num);
                break;
        }
    }

    int newArr[sizeof(arr)] = *arr;

    for(int i = 0; i < (sizeof(arr[0] / sizeof(arr))); i++){
        printf("%d ", newArr[i]);
    }

    return 0;
}