/*#include <stdio.h>
#include <stdlib.h>

int main(){

  printf("hello world\n");
  printf("how are the time\n\n");
  system("pause");

  int x;

  printf("mendiga m numero e eu digo ele de volta\n");
  scanf("%d",&x);
  printf("%d\n",x);
  system("pause");

  int n1,n2,n3;

  printf("digite um numero\n");
  scanf("%d",&n1);
  printf("me diga outro\n");
  scanf("%d",&n2);

  n3= n1 + n2;
  printf("a soma dos dois numeros e: %d\n",n3);

  system("pause");
  

}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n1,n2,n3,n4,n5;
	
	printf("Me de um numero\n");
	scanf("%f",&n1);
	
	printf("Me de outro\n");
	scanf("%f",&n2);
	
	n3 = n1 * n2;
	
	printf("a multiplicaçao dos numeros e: %f\n",n3);
	
	printf("agora me de um numero para dividir este\n");
	scanf("%f",&n4);
	
	n5 = n3 / n4;
	
	printf("o resultado e: %f\n",n5);
	
	system("pause");
	
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[10];
	
	scanf("%s",&nome);
	printf("%s",nome);

}*/

*/#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int x;
	printf("informe seu nivel de escolaridade\n");
	printf("1:nivel medio\n");
	printf("2:graduacao\n");
	printf("3:pos-graduacao\n");
	scanf("%d",&x);
	
	switch (x) {
		
		case 1:
			printf("Nivel Medio\n");
			break;
		
		case 2:
			printf("Graduaçao\n");
			break;
		
		case 3:
			printf("pos-graduacao\n");
			break;
		
		default:
			printf("nao informado\n");
		
	}
	
	system("pause");
	
}*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char x;
	
	printf("o monstro esta na sua frente\n o que voce faz?\n");
	printf("A: Atacar\n");
	printf("D: Defender\n");
	printf("C: Correr\n");
	printf("M: Magia\n");
	
	scanf("%c",&x);
	
	switch (x){
		case 'a':
		case 'A':
			printf("voce ataca o mosntro\n");
			break;
		case 'd':
		case 'D':
			printf("voce defende o monstro\n");
			break;
		case 'c':
		case 'C':
			printf("voce corre do monstro\n");
			break;
		case 'm':
		case 'M':
			printf("voce usa magia no monstro\n");
			break;
		default:
			printf("voce morre pelo monstro\n");
	}
	
	system("pause");
}
