#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[100],b;
    int i,max;
    max=0;
    fflush(stdin);
    gets(c);
    for(i=0;i<100;i++){
        if(c[i]>=max){
            max=c[i];
            b=c[i];
        }

    }

    printf("Caracterul cu cea mai mare valoare ASCII este %c cu valoarea %d",b,max);



    return 0;
}
