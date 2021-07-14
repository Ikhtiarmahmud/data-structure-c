#include <stdio.h>

int main()
{
    int n, arr[100], i, val, loc = 0;
    
    // take array length
    scanf("%d", &n);
    
    // push element in array
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // take value which we wanna search
    scanf("%d", &val);
    
    // search value and store in loc variable if found
    for(i = 1; i <= n; i++) {
        if (arr[i] == val) {
            loc = i;
            break;
        }
    }
    
    // print result
    if (loc == 0) {
        printf("Value not found!");
    } else {
        printf("Location : %d", loc);
    }

    return 0;
}
