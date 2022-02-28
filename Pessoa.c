#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float peso;
    float altura;
    char cpf[14];
}Pessoa;


Pessoa pessoa;

void Input(){

    printf("Criar Cadastro\n");
    printf("\n");
    
    printf("Nome: ");
    scanf("%s", &pessoa.nome);

    printf("Idade: ");
    scanf("%i", &pessoa.idade);

    printf("Peso: ");
    scanf("%f", &pessoa.peso);

    printf("Altura: ");
    scanf("%f", &pessoa.altura);

    printf("CPF: ");
    scanf("%s", &pessoa.cpf);

};

void Output(){

    printf("Impressão do Cadastro\n");
    printf("\n");
    
    printf("Nome: ");
    printf("%s\n", pessoa.nome);

    printf("Idade: ");
    printf("%i anos\n", pessoa.idade);

    printf("Peso: ");
    printf("%.2fkg\n", pessoa.peso);

    printf("Altura: ");
    printf("%.2fm\n", pessoa.altura);

    printf("CPF: ");
    printf("%s\n", pessoa.cpf);
    printf("\n");
   
    system("pause");

};

void Edit() {

    printf("Editar Cadastro\n");
    printf("\n");

    printf("Novo Nome: ");
    scanf("%s", &pessoa.nome);

    printf("\nNova Idade: ");
    scanf("%i", &pessoa.idade);

    printf("\nNovo Peso: ");
    scanf("%f", &pessoa.peso);

    printf("\nNova Altura: ");
    scanf("%f", &pessoa.altura);

    printf("\nNovo CPF: ");
    scanf("%s", &pessoa.cpf);

}

void Home(){

    int num;
    do{  
        printf("Home\n");
        printf("\n");

        printf("1-Criar cadastro\n");
        printf("2-Imprimir cadastro\n");
        printf("3-Editar cadastro\n");
        printf("4-Encerrar a Sessão\n");
        printf("\n");
        
        printf("Digite o valor: \n");
        scanf("%d", &num);
        system("cls");

        switch (num)

        {
            case 1:
                Input();
                system("cls");
                break;
            case 2:
                Output();
                system("cls");
                break;
            case 3:
                Edit();
                system("cls");
                break;
            case 4:
                printf("Sessão encerrada");
        }
    }while (num !=4);
    
}

void main() {
    Home();
};