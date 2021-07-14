#include <stdio.h>

int main()
{
    int  i, n, index;
    
    int arr[50];
    
    scanf("%d", &n);
    
    // make an array by user inputs
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    // Take the index that the user wants to delete
    scanf("%d", &index);
    
    // array re-arrangement for delete the value
    for(i = index; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    
    // print remaining array items
    for(i = 0; i < n - 1; i++){
        printf("%d\n", arr[i]);
    }
    

    return 0;
}
