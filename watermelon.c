#include<stdio.h>
int main()
{
    int wt;
    scanf("%d",&wt);
    if (wt>2 && wt%2==0){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
