#include <stdio.h>
void main()
{
    int i=0, j=1, k, a=1, t;
    printf("enter the number:");
    scanf("%d", &k);
    if(k==1){
        printf("%d", i);
    }
    if(k==2){
        printf("%d %d ", i, j);
    }
    else{
    printf("%d %d ", i, j);
    for(a=3; a<=k; a++){
        t=i+j;
        i=j;
        j=t;
        printf("%d ", t);
    }
}
}
