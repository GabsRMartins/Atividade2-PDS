#include <stdio.h>

#include "libmatematica.h"

void main() {
     float anguloRad;
    printf("Digite o angulo em radianos\n");
    scanf("%f",&anguloRad);
    float seno = calcular_seno(anguloRad);
    printf("Seno de %.2f radianos: %.6f\n", anguloRad, seno);
    float cosseno = calcular_cosseno(anguloRad);
    printf("Cosseno de %.2f radianos: %.6f\n", anguloRad, cosseno);
    float tangente = calcular_tangente(anguloRad);
    printf("Tangente de %.2f radianos: %.6f\n", anguloRad, tangente);

}