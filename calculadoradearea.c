/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
	float base;
	float altura;

	printf("Digite a base do retCngulo: \n");
	scanf("%f", &base);
	printf("Digite a altura do retCngulo \n");
	scanf("%f", &altura);
	float calculararea = base * altura;
	printf("Resultado do calculo: %.2f", calculararea);



	return 0;
}

