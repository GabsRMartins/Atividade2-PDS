#include <math.h>
#include <stdio.h>
#include "libmatematica.h"

#define PI 3.14159265358979323846

float calcular_seno(float angulo_radianos) {
    return sin(angulo_radianos);
}

float calcular_cosseno(float angulo_radianos) {
    return cos(angulo_radianos);
}
float calcular_tangente(float angulo_radianos) {
    float seno = calcular_seno(angulo_radianos);
    if (fabs(seno) < 1e-10) { 
        printf("Esse ângulo não possui tangente definida\n");
        return 0; 
    } else {
        return tan(angulo_radianos);
    }

}
