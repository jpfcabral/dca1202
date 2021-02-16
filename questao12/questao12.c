#include <stdio.h>

int soma(int a, int b){
    return  a + b;
}

int subtracao(int a, int b){
    return a - b;
}

int main(){
    int (*op[])(int, int) = {soma, subtracao};

    for(int i = 0; i < 2; i++){
        printf("%d\n",(*op[i])(4,2));
    }
    
    return 0;
}
