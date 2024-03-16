#include <stdio.h>
#include "libmatematica.h"
#define PI 3.14159265358979323846

void main() {
    float anguloRad;
    printf("Digite o ângulo em radianos:\n");
    scanf("%f", &anguloRad);

    float seno = calcular_seno(anguloRad);
    printf("Seno de %.4f radianos: %.4f\n", anguloRad, seno);

    float cosseno = calcular_cosseno(anguloRad);
    printf("Cosseno de %.4f radianos: %.4f\n", anguloRad, cosseno);

    if (fabs(seno) < 1e-10) {
        printf("Esse ângulo não possui tangente definida\n");
    } else {
        float tangente = calcular_tangente(anguloRad);
        printf("Tangente de %.2f radianos: %.4f\n", anguloRad, tangente);
    }

}
