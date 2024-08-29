#include <stdio.h>
#include <locale.h>

float ConverterCF(float grau){
	float resultado = grau *9/5 + 32;
  	return resultado;
}

int main(void) {
	setlocale(LC_ALL,"Portuguese");
	float C=0;
	printf("Digite a temperatura em graus celcius para conversão em farenheit\n");
	scanf("%f", &C);
	printf("%.1f°C em Fahrenheit são %.1fF", C, ConverterCF(C));
  
  	return 0;
}

