/* 
	Arquivo: Equação Segundo Grau.c
	Versão: (1,0,0)
	Sistema Operacional: Windows
	Autor: Luiz Fantin Neto
	Descrição: Programa que resolve equações do segundo grau encontrando tanto suas raízes reais quanto complexas.
*/

//Importação de Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
	//Declaração de variaveis.
	float a,b,c,Del,x1,x2,x12,x22;

	//Solicita ao usuário que digite os coeficientes da equação.
	printf("Digite a, b e c da equacao do segundo grau\n");

	scanf("%f%f%f",&a,&b,&c);

	system("cls");

	//Tratamento de impressão para caso o numero de algum coeficiente seja negativo.
	if((b>0)&&(c>0))
	{
		printf("Equacao: %fx^2 + %fx + %f == 0\n\n",a,b,c);
	}

	else if((b>0)&&(c<0))
	{
		printf("Equacao: %fx^2 + %fx %f == 0\n\n",a,b,c);
	}

	else if((b<0)&&(c>0))
	{
		printf("Equacao: %fx^2 %fx + %f == 0\n\n",a,b,c);
	}

	else
	{
		printf("Equacao: %fx^2 %fx %f == 0\n\n",a,b,c);
	}

	//CALCULA DELTA

	Del=pow(b,2)-4*a*c;

	/*O cálculo é feito com base no valor do DELTA. Caso o Del<0, só possue raízes complexas.
	  Caso o Del>0, possue duas raízes reais e caso Del==0, possue somente uma raiz real.
	  Foi ultilizado a fórmula de Bháskara para a resolução das equações.
	*/
    if(Del<0)
    {
    	printf("Nao possue raizes reais, mas possue duas complexas\n\n");

    	x1= -(b)/(2*a);
		x12= sqrt(Del*-1)/(2*a);

    	x2= -(b)/(2*a);
		x22= sqrt(Del*-1)/(2*a);

    	printf("Primeira Raiz: %f + %f*j\nSegunda Raiz: %f - %f*j",x1,x12,x2,x22);
    }

    else if(Del>0)
    {
    	printf("Possue duas raizes reais \n\n");

    	x1=(-(b)+sqrt(Del))/(2*a);

    	x2=(-(b)-sqrt(Del))/(2*a);

    	printf("Primeira Raiz: %f\nSegunda Raiz: %f",x1,x2);
    }

    else
    {

    	printf("Possue uma raiz real\n\n");

    	x1=-(b)/(2*a);

    	printf("Raiz: %f\n",x1);


    }
	getch();
}
