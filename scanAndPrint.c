#include <stdio.h>
int main()
{
    char color[255];
    char nome[] = "Fulano";
    double valor = 15.37;
    char sexo = 'M';
    int idade = 45;
    printf("Olá %s, você tem %d anos de idade, seu sexo é %c e possuí R$ %.2f na conta bancária.\n",nome,idade,sexo,valor);
    printf("Digite sua cor favorita:\n");
    scanf("%s", color);
    printf("Sua cor favorita é: %s",color);
    return 0;
}
