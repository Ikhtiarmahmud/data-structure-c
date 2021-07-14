#include <stdio.h>

int main()
{
    int  i, n, index, value;
    
    int arr[50];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d %d", &index, &value);
    
    for(i = n; i >= index; i--) {
        if (index == i) {
            arr[index] = value;
            break;
        }

        arr[i] = arr[i - 1];
    }
    
    for(i = 0; i < n + 1; i++){
        printf("%d\n", arr[i]);
    }
    

    return 0;
}
