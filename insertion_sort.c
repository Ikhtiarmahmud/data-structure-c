#include <stdio.h>

int main()
{
    int n, i, j, arr[100], temp;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 2; i <= n; i++) {
        temp = arr[i];
        j = i - 1;
        
        while (j >= 1 && temp < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = temp;
    }
    
     for (i = 1; i <= n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
