#include <stdio.h>
#define alturaMaxima 225

typedef struct {
	int peso;
	int altura;
} PesoAltura;

int main() {
	PesoAltura pessoa1;
	pessoa1.peso = 110;
	pessoa1.altura = 226;

	printf("Peso: %i, Altura %i.\n", pessoa1.peso, pessoa1.altura);

	if (pessoa1.altura > alturaMaxima) printf("Altura acima da maxima.\n");
	else printf("Altura abaixo da maxima.\n");

	return 0;
}
