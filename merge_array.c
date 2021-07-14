#include <stdio.h>

int main()
{
    int arrOneN, arrTwoN,  i, j, arrOne[100], arrTwo[100], reArr[100], loop, k;
    
    scanf("%d %d", &arrOneN, &arrTwoN);
    
    // make array one
    for (i = 1; i <= arrOneN; i++) {
        scanf("%d", &arrOne[i]);
    }
    
    // make array two
    for (i = 1; i <= arrTwoN; i++) {
        scanf("%d", &arrTwo[i]);
    }
    
    // initialize value
    k = arrOneN + arrTwoN;
    
    i = 1; j = 1; loop = 1;
    
    // make new sorted array
    while(loop <= k) {
        if (arrOne[i] <= arrTwo[j]) {
            reArr[loop] = arrOne[i];
            i++;
        } else {
            reArr[loop] = arrTwo[j];
            j++;
        }
        
        loop++;
    }
    
    
    // print new array
    for (i = 1; i <= k; i++) {
        printf("%d ", reArr[i]);
    }

    return 0;
}
