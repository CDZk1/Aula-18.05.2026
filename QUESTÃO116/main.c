#include <stdio.h>

int main(){

    //leia um numero, e divida por 2 (sucessivamente), ate que o resulante seja menor que 1.
    //mostre a ultima divisão e a quantidade de divisoes feitas.

    float n;
    int div_feitas = 0;

    printf("Informe o numero: ");
    scanf("%f", &n);
    
    while (n >= 1){
        n = n / 2;
        div_feitas++;
    }
    printf("%.2f\n%d\n", n, div_feitas);

    return 0;
}