#include <stdio.h>

int main()
{
    int n, arr[100], i, val, 
    loc = 0, start, end, mid;
    
    // take array length
    scanf("%d", &n);
    
    // push element in array
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // take value which we wanna search
    scanf("%d", &val);
    
    start = 1; end = n; mid = ((start+end)/2);
    
    // search value and store in loc variable if found
    while(start <= end) {
        if (val == arr[mid]) {
            loc = mid;
            break;
        } else if (val < arr[mid]) {
            end = mid - 1;
        } else if (val > arr[mid]) {
            start = mid + 1;
        }
        
        mid = ((start+end)/2);
    }
    
    // print result
    if (loc == 0) {
        printf("Value not found!");
    } else {
        printf("Location : %d", loc);
    }

    return 0;
}
