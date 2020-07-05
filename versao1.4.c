#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>
#include<unistd.h>

#define CYAN "\033[96m"
#define GRAY "\e[0;37m"

//com base no layout desenvolvido recomendamos abrir o jogo em uma novo aba dedicada  https://trabalhocom110.kaiqueleal.repl.run/
//a ideia é passar um parâmetro n para determinar a dificuldade(dimensão da matriz numeros e respostas)

void modo1_1(int i,int j,int t,int *pontos, char nome[],int n){//esse é a dificuldade FÁCIL
//do modo 1
//memorizar 4 numeros de 0 a 30
	int k;
	int numeros[n][n], resposta[n][n];
	
	srand( (unsigned)time(NULL) );
	printf("%50c Jogador, digite seu nome: ", ' ');
	scanf("%s", nome);
	
	for(k=0; k<5; k++){
	printf(GRAY "\n%63c Jogada %d: \n", ' ', k+1);
	printf("%53c Memorize os números de 0 a 30! \n",' ');
	printf("%55cPRESSIONE ENTER PARA INICIAR.\n",' ');
	getchar();
  	getchar();
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			numeros[i][j] = (rand() % 30);
			}
	}
	
	t=4;
	do{
		system("clear");
		printf("%65c Tempo: %d\n\n", ' ', t);
		t--;
		for(i=0; i<n; i++){
			printf("%66c ", ' ');
			for(j=0; j<n; j++){
				printf("%d ", numeros[i][j]);
			}
		printf("\n");	
		}
		sleep(1);
	}
	while(t>0); 
	system("clear");
	printf("\n%50cInsira os números memorizados de acordo com a matriz: \n",' ');
	printf("\n%65c  |A  B|\n%65c  |C  D|\n\n",' ',' ');
	printf("%65c  A = ",' ');
	scanf("%d", &resposta[0][0]);
	printf("%65c  B = ",' ');
	scanf("%d", &resposta[0][1]);
	printf("%65c  C = ",' ');
	scanf("%d", &resposta[1][0]);
	printf("%65c  D = ",' ');
	scanf("%d", &resposta[1][1]);
	printf("\n");
	sleep(1);
	system("clear");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
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

void modo1_2(int i,int j,int t,int *pontos, char nome[],int n){ //DIFICILDADE MEDIA
//modo 1
//memorizar 4 numeros de 0 a 100
	int k;
	int numeros[n][n], resposta[n][n];
	
	srand( (unsigned)time(NULL) );
	printf("%50c Jogador, digite seu nome: ", ' ');
	scanf("%s", nome);
	
	for(k=0; k<5; k++){
	printf(GRAY "\n%63c Jogada %d: \n", ' ', k+1);
	printf("%53c Memorize os números de 0 a 100! \n",' ');
	printf("%55cPRESSIONE ENTER PARA INICIAR.\n",' ');
	getchar();
  	getchar();
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			numeros[i][j] = (rand() % 100);
			}
	}
	
	t=4;
	do{
		system("clear");
		printf("%65c Tempo: %d\n\n", ' ', t);
		t--;
		for(i=0; i<n; i++){
			printf("%66c ", ' ');
			for(j=0; j<n; j++){
				printf("%d ", numeros[i][j]);
			}
		printf("\n");	
		}
		sleep(1);
	}
	while(t>0); 
	system("clear");
	printf("\n%50cInsira os números memorizados de acordo com a matriz: \n",' ');
	printf("\n%65c  |A  B|\n%65c  |C  D|\n\n",' ',' ');
	printf("%65c  A = ",' ');
	scanf("%d", &resposta[0][0]);
	printf("%65c  B = ",' ');
	scanf("%d", &resposta[0][1]);
	printf("%65c  C = ",' ');
	scanf("%d", &resposta[1][0]);
	printf("%65c  D = ",' ');
	scanf("%d", &resposta[1][1]);
	printf("\n");
	sleep(1);
	system("clear");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
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

void modo1_3(int i,int j,int t,int *pontos, char nome[],int n){ //DIFICILDADE DIFICIL
//modo 1
//memorizar 4 numeros de 0 a 1000
	int k;
	int numeros[n][n], resposta[n][n];
	
	srand( (unsigned)time(NULL) );
	printf("%50c Jogador, digite seu nome: ", ' ');
	scanf("%s", nome);
	
	for(k=0; k<5; k++){
	printf(GRAY "\n%63c Jogada %d: \n", ' ', k+1);
	printf("%52c Memorize os números de 0 a 1000! \n",' ');
	printf("%55cPRESSIONE ENTER PARA INICIAR.\n",' ');
	getchar();
  	getchar();
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			numeros[i][j] = (rand() % 1000);
			}
	}
	
	t=4;
	do{
		system("clear");
		printf("%65c Tempo: %d\n\n", ' ', t);
		t--;
		for(i=0; i<n; i++){
			printf("%66c ", ' ');
			for(j=0; j<n; j++){
				printf("%d ", numeros[i][j]);
			}
		printf("\n");	
		}
		sleep(1);
	}
	while(t>0); 
	system("clear");
	printf("\n%50cInsira os números memorizados de acordo com a matriz: \n",' ');
	printf("\n%65c  |A  B|\n%65c  |C  D|\n\n",' ',' ');
	printf("%65c  A = ",' ');
	scanf("%d", &resposta[0][0]);
	printf("%65c  B = ",' ');
	scanf("%d", &resposta[0][1]);
	printf("%65c  C = ",' ');
	scanf("%d", &resposta[1][0]);
	printf("%65c  D = ",' ');
	scanf("%d", &resposta[1][1]);
	printf("\n");
	sleep(1);
	system("clear");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
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

void modo2_1(int i,int j,int t,int *pontos, char nome[]){
	int matriz[2][2], par;
	printf("%50c Jogador, digite seu nome: ", ' ');
	scanf("%s", nome);
	
	system("clear");
	srand( (unsigned)time(NULL) );
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==1 && j==1)
				matriz[i][j]= matriz[0][0];
			else
				matriz[i][j]= rand() % 100;
		}
	}
	t=2;
	do{
		system("clear");
		printf(GRAY "%50c Tempo: %d\n\n", ' ', t);
		t--;
		
		for(i=0;i<2;i++){
			printf("\n%51c",' ');
			for(j=0;j<2;j++){
				printf("%d ", matriz[i][j]);
			}
		}
    printf("\n");
		sleep(1);
	}
	while(t>0);
	system("clear");
	printf("%50c Digite o número que tem um par: ",' ');
	scanf(" %d", &par);
	if(par == matriz[0][0]){
		printf("\n%50c Parabéns você acertou!\n",' ');
		*pontos+=1;
		printf("%50c Você tem %d ponto(s).\n",' ',*pontos);
	}
	else{
		printf("\n%50c Você errou!\n",' ');
		printf("%50c Você tem %d ponto(s).\n",' ', *pontos);
	}
	printf("%50c Pressione ENTER para continuar",' ');
	getchar();
	getchar();
	}


int main(){
	
	setlocale(LC_ALL,"");
  	
	int i=1, j=1, op, op2, op3;
	int t=0;
	int pontos=0;
  	int n = 2;
	char nome[20];

 do{                                                                 
    system("clear");
    printf("\033[96m========================================================== JOGO DA MEMÓRIA =============================================================\n");
    printf("========================================================================================================================================\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                        Escolha uma opção                                                             |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                        1. Jogar                                                                      |\n");
    printf("|                                                        2. Sair                                                                       |\n");
    printf("|                                                        3. Créditos                                                                   |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("========================================================================================================================================\n");
	 //até aqui menu geral feito
		printf("\n  Opção: ");
		scanf(" %d", &op);
		printf("\n");

switch (op){
	
	
	case 1:
	system("clear");
	printf( "========================================================== JOGO DA MEMÓRIA =============================================================\n");
    printf("========================================================================================================================================\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                    Escolha uma opção                                                                 |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                   1. Memorize os elementos                                                           |\n");
    printf("|                                                   2. Guarde os pares                                                                 |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                                                                                                      |\n");
    printf("========================================================================================================================================\n");
	  //até aqui menu de modo de jogo
		printf("\n  Opção: ");
	  	scanf(" %d", &op2);
		switch (op2){
			case 1:		//modo de jogo 1
			system("clear");
			printf("========================================================== JOGO DA MEMÓRIA =============================================================\n");
   				printf("========================================================================================================================================\n");
   				printf("|                                                                                                                                      |\n");
   				printf("|                                                      Escolha uma opção                                                               |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                        1. Fácil                                                                      |\n");
    			printf("|                                                        2. Médio                                                                      |\n");
    			printf("|                                                        3. Difícil                                                                    |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("========================================================================================================================================\n");
			//até aqui menu de dificuldade
			printf("\n  Opção: ");
			scanf(" %d", &op3);
			switch(op3){
				
			  	case 1:
				  	//jogo no fácil
				  	//valores de 0 a 30
						modo1_1( i, j, t, &pontos, nome, n);
						printf("Cada acerto vale um ponto. \n");
						printf("%s, TOTAL DE PONTOS = %d de 20\n\n", nome, pontos);
						printf("%50c Pressione ENTER para continuar",' ');
						getchar();
						getchar();
						break;
						
				case 2:
					//jogo no médio
					//valores de 0 a 30
						modo1_2( i, j, t, &pontos, nome, n);
						printf("Cada acerto vale um ponto. \n");
						printf("%s, TOTAL DE PONTOS = %d de 20\n\n", nome, pontos);
						printf("%50c Pressione ENTER para continuar",' ');
						getchar();
						getchar();
						break;
					
				case 3:
					//jogo no médio
					//valores de 0 a 30
						modo1_3( i, j, t, &pontos, nome, n);
						printf("Cada acerto vale um ponto. \n");
						printf("%s, TOTAL DE PONTOS = %d de 20\n\n", nome, pontos);
						printf("%50c Pressione ENTER para continuar",' ');
						getchar();
						getchar();
						break;
				}
			break;
			
			case 2:		//modo de jogo 2
			system("clear");
			printf("========================================================== JOGO DA MEMÓRIA =============================================================\n");
   				printf("========================================================================================================================================\n");
   				printf("|                                                                                                                                      |\n");
   				printf("|                                                      Escolha uma opção                                                               |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                         1. Fácil                                                                     |\n");
    			printf("|                                                         2. Médio                                                                     |\n");
    			printf("|                                                         3. Difícil                                                                   |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("|                                                                                                                                      |\n");
    			printf("========================================================================================================================================\n");
			//até aqui menu de dificuldade
			printf("\n  Opção: ");
			scanf(" %d", &op3);
			switch(op3){
			  	case 1:
			  			//fácil
							modo2_1( i, j, t, &pontos, nome);
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
		system("clear");
		printf("%50c Recurso não disponível no pre-alpha\n",' ');
		printf("%45c Créditos estarão disponíveis no lançamento oficial\n",' ');
		printf("%50c Pressione ENTER para continuar",' ');
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
