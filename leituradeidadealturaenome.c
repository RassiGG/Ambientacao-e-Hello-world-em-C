/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> //Avisa que o computador que vamos usar comandos de entrada e saída
int main(){
int idadeUsuario;
float altura;
char nome;
printf("Digite sua idade: \n" );
scanf("%i", &idadeUsuario);
printf("Digite sua altura: \n" );
scanf("%f", &altura );
printf("Digite a inicial do seu nome: \n");
scanf(" %c", &nome);
printf("Inicial do nome: %c | Idade: %i | Altura: %f", nome, idadeUsuario, altura);
return 0; 
}

