#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

typedef struct {
    int numeroConta;
    int codigoBanco;
    float saldo;
    char *nomeConta;
    char *cpfConta;
}Conta;

typedef struct {
    char nome[50];
    int idade;
    float peso;
    float altura;
    char cpf[14];
    Conta conta;
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

    if (pessoa.conta.cpfConta != NULL)
    {
        printf("Conta numero: ");
        printf("%i\n", pessoa.conta.numeroConta);
        printf("Conta codigo: ");
        printf("%i\n", pessoa.conta.codigoBanco);
        printf("Conta saldo: ");
        printf("R$ %.2f\n", pessoa.conta.saldo);
        printf("Conta nome: ");
        printf("%s\n", pessoa.conta.nomeConta);
        printf("Conta CPF: ");
        printf("%s\n", pessoa.conta.cpfConta);
    }
    
   
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

void AddCount() {

     if (pessoa.idade != false)
    {
        printf("Adicionar Conta\n");
        printf("\n");
        
        printf("Numero da conta: ");
        scanf("%i", &pessoa.conta.numeroConta);

        printf("Codigo do banco: ");
        scanf("%i", &pessoa.conta.codigoBanco);

        pessoa.conta.saldo = rand()%100000;

        pessoa.conta.nomeConta = pessoa.nome;
        pessoa.conta.cpfConta = pessoa.cpf;

        system("cls");

    }else{
        printf("Crie seu cadastro primeiro\n");
        printf("\n");
    };
};

void Home(){

    int num;
    do{  
        printf("Home\n");
        printf("\n");

        printf("1-Criar cadastro\n");
        printf("2-Imprimir cadastro\n");
        printf("3-Editar cadastro\n");
        printf("4-Adicionar conta\n");
        printf("5-Encerrar a Sessão\n");
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
                AddCount();
                break;
            case 5:
                printf("Sessão encerrada");
        }
    }while (num !=5);
    
}

void main() {
    //setlocale(LC_ALL, "");
    //setlocale (LC_CTYPE, "pt_BR.UTF-8");
    Home();
};