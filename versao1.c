#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>
#include<windows.h>
#include<conio.h>

//a ideia é passar um parâmetro n para determinar a dificuldade(dimensão da matriz numeros e respostas)

void modo1(int i,int j,int t,int *pontos, char nome[]){
	int k;
	int numeros[2][2], resposta[2][2];
	char c, A, B, C, D;
	
	srand(time(NULL));
	printf("%40c Jogador, digite seu nome: ", ' ');
	scanf("%s", nome);
	
	for(k=0; k<5; k++){
	printf("\n%40c Jogada %d: \n", ' ', k+1);
	printf("%40c Memorize os n%cmeros! \n",' ', 163);
	printf("%40c PRESSIONE ENTER PARA INICIAR.\n",' ');
	do{
	    	c = getch();
		}
	while (c != 13);
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			numeros[i][j] = (rand() % 30);
			}
	}
	
	t=2;
	do{
		system("cls");
		printf("%50c Tempo: %d\n\n", ' ', t);
		t--;
		
		for(i=0; i<2; i++){
			printf("%51c ", ' ');
			for(j=0; j<2; j++){
				printf("%d ", numeros[i][j]);
			}
		printf("\n");	
		}
		sleep(1);
	}
	while(t>0);
	system("cls");
	printf("\n%30cInsira os n%cmeros memorizados de acordo com a matriz: \n",' ', 163);
	printf("\n%50c  |A  B|\n%50c  |C  D|\n\n",' ',' ');
	printf("%50c  A = ",' ');
	scanf("%d", &resposta[0][0]);
	printf("%50c  B = ",' ');
	scanf("%d", &resposta[0][1]);
	printf("%50c  C = ",' ');
	scanf("%d", &resposta[1][0]);
	printf("%50c  D = ",' ');
	scanf("%d", &resposta[1][1]);
	printf("\n");
	sleep(1);
	system("cls");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(resposta[i][j] == numeros[i][j]){
				*pontos+=1;
			}
			else{
				break;
				}
			}
		}
	}

}

//a ideia é passar um parâmetro n para determinar a dificuldade(dimensão da matriz numeros e quantidade de pares)

void modo2(int i,int j,int t,int *pontos, char nome[]){
	int matriz[2][2], par;
	printf("%40c Jogador, digite seu nome: ", ' ');
	scanf("%s", nome);
	
	system("cls");
	srand(time(NULL));
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==1 && j==1)
				matriz[i][j]= matriz[0][0];
			else
				matriz[i][j]= rand() % 100;
		}
	}
	t=2.5;
	do{
		system("cls");
		printf("%50c Tempo: %d\n\n", ' ', t);
		t--;
		
		for(i=0;i<2;i++){
			printf("\n%51c",' ');
			for(j=0;j<2;j++){
				printf("%d ", matriz[i][j]);
			}
		}
		sleep(1);
	}
	while(t>0);
	system("cls");
	printf("%40c Digite o n%cmero que tem um par:",' ', 163);
	scanf(" %d", &par);
	if(par == matriz[0][0]){
		printf("\n%40c Parab%cns voc%c acertou!\n",' ', 130, 136);
		*pontos+=1;
		printf("%40c Voc%c tem %d ponto(s).\n",' ', 136, *pontos);
	}
	else{
		printf("\n%40c Voc%c errou!\n",' ', 136);
		printf("%30c Voc%c tem %d ponto(s).",' ', 136, *pontos);
	}
	printf("%40c Pressione ENTER para continuar",' ');
	getchar();
	getchar();
	}


int main(){
  int i=1, j=1, op, op2, op3;
	int t=0;
	int pontos=0;
	char nome[20];
do{

	system("color F0");   
	system("cls");                                                                                                                      
    printf("================================================ JOGO DA MEM%cRIA ======================================================\n", 224);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                             Escolha uma op%c%co                                                       %c\n", 179, 135, 198, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                              1. Jogar                                                               %c\n", 179, 179);
    printf("%c                                              2. Sair                                                                %c\n", 179, 179);
    printf("%c                                              3. Cr%cditos                                                            %c\n", 179,130, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                              Pontos: %d                                                              %c\n", 179, pontos, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
	 //atÃƒÂ© aqui menu geral feito
		printf("\n  Op%c%co: ", 135, 198);
		scanf(" %d", &op);
		printf("\n");

switch (op){
	
	
	case 1:
	system("cls");
	printf("================================================ JOGO DA MEM%cRIA ======================================================\n", 224);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                               Escolha o modo de jogo                                                %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                1.Memorize elementos                                                 %c\n", 179, 179);
    printf("%c                                                2.Guarde os pares                                                    %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c                                                                                                                     %c\n", 179, 179);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
	  //atÃ© aqui menu de modo de jogo
		printf("\n  Op%c%co: ", 135, 198);
	  scanf(" %d", &op2);
		switch (op2){
			case 1:
				//modo de jogo 1
			system("cls");
			printf("================================================ JOGO DA MEM%cRIA ======================================================\n", 224);
		    	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
		    	printf("%c                                                                                                                     %c\n", 179, 179);
		    	printf("%c                                               Escolha a dificuldade                                                 %c\n", 179, 179);
		    	printf("%c                                                                                                                     %c\n", 179, 179);
		    	printf("%c                                                1.F%ccil                                                              %c\n", 179, 160,179);
		    	printf("%c                                                2.M%cdio                                                              %c\n", 179, 130, 179);
		    	printf("%c                                                3.Dif%ccil                                                            %c\n", 179, 161, 179);
		    	printf("%c                                                                                                                     %c\n", 179, 179);
		    	printf("%c                                                                                                                     %c\n", 179, 179);
		    	printf("%c                                                                                                                     %c\n", 179, 179);
		    	printf("%c                                                                                                                     %c\n", 179, 179);
		    	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
			  //até aqui menu de dificuldade
			printf("\n  Op%c%co: ", 135, 198);
			scanf(" %d", &op3);
			switch(op3){
			  	case 1:
				  	//jogo no fácil
						modo1( i, j, t, &pontos, nome);
						printf("Cada acerto vale um ponto. \n");
						printf("%s, TOTAL DE PONTOS = %d de 24\n\n", nome, pontos);
						printf("%40c Pressione ENTER para continuar",' ');
						getchar();
						getchar();
						break;
					case 2:
					//mÃ©dio
					break;
				}
			break;
			
			case 2:
				//modo de jogo 2
			system("cls");
			printf("================================================ JOGO DA MEM%cRIA ======================================================\n", 224);
		    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
		    printf("%c                                                                                                                     %c\n", 179, 179);
		    printf("%c                                               Escolha a dificuldade                                                 %c\n", 179, 179);
		    printf("%c                                                                                                                     %c\n", 179, 179);
		    printf("%c                                                1.F%ccil                                                              %c\n", 179,160, 179);
		    printf("%c                                                2.M%cdio                                                              %c\n", 179, 130, 179);
		    printf("%c                                                3.Dif%ccil                                                            %c\n", 179, 161, 179);
		    printf("%c                                                                                                                     %c\n", 179, 179);
		    printf("%c                                                                                                                     %c\n", 179, 179);
		    printf("%c                                                                                                                     %c\n", 179, 179);
		    printf("%c                                                                                                                     %c\n", 179, 179);
		    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%C%c%c%c%c%c%c\n", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
			  //até aqui menu de dificuldade
			printf("\n  Op%c%co: ", 135, 198);
			scanf(" %d", &op3);
			switch(op3){
			  	case 1:
			  			//fácil
							modo2( i, j, t, &pontos, nome);
							break;
				case 2:
				//médio
				break;
			}
			break;
		}
	break;
		
	case 2:
	//sai do jogo
	break;
	
	case 3:
		system("cls");
		printf("%40c Recurso nao disponivel no pre-alpha\n",' ');
		printf("%35c Creditos estarao disponiveis no lancamento oficial\n",' ');
		printf("%40c Pressione ENTER para continuar",' ');
		getchar();
		getchar();
		break;
	}
	
	
}
while(op!=2);

printf("%40c Pressione ENTER para continuar",' ');
getchar();
getchar();
return 0;
}
