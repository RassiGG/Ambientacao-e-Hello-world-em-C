
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

