#include <stdio.h>
#include <math.h>

void soma(double a, double b) {
    
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);
    
    printf("\nResultado: %lf\n", a+b);
}

void subtracao(double a, double b) {
    
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);
    
    printf("\nResultado: %lf\n", a-b);
}

void multiplicacao(double a, double b) {
    
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);
    
    printf("\nResultado: %lf\n", a*b);
}

void divisao(double a, double b) {
    
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);
    
    if(b != 0) {
        printf("\nResultado: %lf\n", a/b);
    } else {
        printf("\nERRO: Divisao por Zero.\n");
    }
}

void exponenciacao(double a, double b) {
    
    printf("Digite a base: ");
    scanf("%lf", &a);
    printf("Digite o expoente: ");
    scanf("%lf", &b);
    
    printf("\nResultado: %lf\n", pow(a, b));
}

void raizQuadrada(double a) {
    
    printf("Digite o numero: ");
    scanf("%lf", &a);
    
    if(a >= 0) {
        printf("\nResultado: %lf\n", sqrt(a));
    } else {
        printf("\nERRO: Raiz Quadrada de numero negativo.\n");
    }

}

void modulo(double a) {
    
    printf("Digite o numero: ");
    scanf("%lf", &a);

    printf("\nResultado: %lf\n", fabs(a));
}

void bhaskara(double a, double b, double c, double x1, double x2, double delta) {
    
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b:");
    scanf("%lf", &b);
    printf("Digite o valor de c:");
    scanf("%lf", &c);
    
    delta = pow(b, 2) - 4 * a * c;
    
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nRaizes: %.2lf e %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("\nRaiz unica: %.2lf\n", x1);
    } else {
        printf("\nNao ha raizes reais.\n");
    }
    
}


int main() {
    
    double a, b, c, x1, x2, delta;
    int opcao;
    
    do {
        
        printf("\nCalculadora\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Exponenciacao\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Modulo\n");
        printf("8. Bhaskara\n");
        printf("9. SAIR\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
    
    switch (opcao) {
        case 1: soma(a, b); break;
        case 2: subtracao(a, b); break;
        case 3: multiplicacao(a, b); break;
        case 4: divisao(a, b); break;
        case 5: exponenciacao(a, b); break;
        case 6: raizQuadrada(a); break;
        case 7: modulo(a); break;
        case 8: bhaskara(a, b, c, x1, x2, delta); break;
        case 9: printf("\nSaindo do programa.\n"); break;
        default: printf("\nOpcao invalida.\n");
    }
    
    } while (opcao != 9);

    return 0;
}
