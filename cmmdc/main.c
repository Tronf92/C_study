#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,r;
    printf("Introduceti a:");
    scanf("%f",&a);
    printf("\nIntroduceti b:");
    scanf("%f",&b);
    printf("\n");
    r=a/b;
    if(r==0){
        printf("cmmdc este %f",b);
    }
    else{
        while(r!=0){
            a=b;
            b=a;
            r=a/b;
        }
    }
    printf("cmmdc este %f",b);
    return 0;
}
