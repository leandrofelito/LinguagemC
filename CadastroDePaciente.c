#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5  //ALTERA A QUANTIDADE DE PESSOAS QUE DESEJA CADASTRAR,CASO QUEIRA CADASTRAR 10, BASTA COLOCAR #define TAM 10.

struct cadastro 
{	
	char nome[30]; 
	char cpf[15]; 
	char data[20]; 
	char vacina[50]; 
	int numeroLote;
};
int main() {
	 setlocale(LC_ALL,"Portuguese");
		
	struct cadastro paciente[TAM]; 
	struct cadastro troca;
	int consulta,i,j,acha,op; 
	char consultaCpf[15];	
op=0;

while(op!=4)
{   printf("==== MENU DE OPÇÕES ====\n\n");
	printf("1- Cadastrar Vacina\n");
	printf("2- Listar aplicações\n");
	printf("3- Consultar por CPF\n");
	printf("4- Sair\n");
	printf("Selecione a opção desejada: \n");
	scanf("%d",&op);
	fflush(stdin);
	if (op==1)
	{
		system("cls");
		printf("*****CADASTRO DE VACINAÇÃO*****");
		for (i=0; i<TAM; i++)
		{
	    printf("\nCódigo: %d\n",i+1);
		 printf("Nome: ");
		 scanf("%30[^\n]s",&paciente[i].nome);
		 fflush(stdin);
		 
		 printf("CPF: ");
		 scanf("%15[^\n]s",&paciente[i].cpf);
		 fflush(stdin);
		 
		 printf("Vacina: ");
		scanf("%50[^\n]s",&paciente[i].vacina);
		 fflush(stdin);
		  
		 
		 printf("Data: ");
		 scanf("%20[^\n]s",&paciente[i].data);
		 fflush(stdin);
		 
		  printf("Número do lote: ");
		 scanf("%d",&paciente[i].numeroLote);
		 fflush(stdin); 
		}
		system("pause");
			   system("cls");
	}
	else
	{
		if(op==2)
		{
		    system("cls");
			printf("*****LISTA DE APLICAÇÕES*****\n");
			for(i=0;i<TAM;i++)
			{
		        printf("\nCódigo: %d\n", i+1);
		        printf("Nome: %s\n", paciente[i].nome);
		        printf("CPF: %s\n", paciente[i].cpf);
		        printf("Vacina: %s\n",paciente[i].vacina);
		        printf("Data da aplicação: %s\n",paciente[i].data);
		        printf("Número do lote: %d\n",paciente[i].numeroLote);
		        printf("\n====================\n");
			}
		system("pause");
			   system("cls");
		}
		else{
			if(op==3)
			{
				system("cls");
				printf("*****CONSULTA DE CPF*****\n\n");
				printf("Digite o CPF que deseja consultar:\n");
				 scanf("%15[^\n]s",&consultaCpf);
				i=0;
				acha=0;
				while((i<TAM) && (acha==0))
				{
					if (strcmp(paciente[i].cpf, consultaCpf) == 0) /*Se for igual a zero significa que são iguais*/
					acha=1;
					else
					i++;
				}
				if (acha==1)
				{
				printf("\nCódigo: %d\n", i+1);
		        printf("Nome: %s\n", paciente[i].nome);
		        printf("CPF: %s\n", paciente[i].cpf);
		        printf("Nome da vacina:%s\n",paciente[i].vacina);
		        printf("Data da aplicação: %s\n",paciente[i].data);
		        printf("Número do lote: %d\n",paciente[i].numeroLote);
				}
				else
				printf("\n CPF não encontrado! \n");
			}
		system("pause");
			   system("cls");
		}		
	}
}	 	
	return 0;
}
