#include <stdio.h>

int main(){
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while (chico > ze){
        chico += 0.02;
        ze += 0.03;
        ano++;
    
    }
    printf("Em %d anos, Chico ficou %.2fm de altura e Zé ficou com %2.fm de altura, logo, Zé ultrapassou seu irmão em altura \n", ano, chico, ze);
}