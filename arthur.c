#include <stdio.h>
int main(){
    float a,b,c,x,y;
    printf("escreva o valor,respectivamente, de A, B, C e X\n");
    scanf("%f %f %f %f",&a,&b,&c,&x);
    y = a * x * x + b * x + c;
    if(x > 0&&y > 0){
        printf("a altura eh %f e o quadrante eh 1",y);
    }else if(x < 0&&y > 0){
        printf("a altura eh %f e o quadrante eh 2",y);
    }else if(x > 0&&y < 0){
        printf("a altura eh %f e o quadrante eh 4",y);
    }else if(x < 0&&y < 0){
        printf("a altura eh %f e o quadrante eh 3",y);
    }else{
        printf("a altura eh 0, portanto nao pertence a nenhum quadrante");
    }
    

    return 0;
}