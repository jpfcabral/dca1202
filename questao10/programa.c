#include <stdio.h>

int main(void){
    char c[4];
    int i[4];
    float f[4];
    double d[4];

    char *p1;
    int *p2;
    float *p3;
    double *p4;

    p1 = c;
    p2 = i;
    p3 = f;
    p4 = d;

    for(int a=0;a<3;a++){
        printf("%x, ", p1+a);
    }
    printf("\n");

    for(int a=0;a<3;a++){
        printf("%x, ", p2+a);
    }
    printf("\n");

    for(int a=0;a<3;a++){
        printf("%x, ", p3+a);
    }
    printf("\n");

    for(int a=0;a<3;a++){
        printf("%x, ", p4+a);
    }
    printf("\n");

    return 0;
}
