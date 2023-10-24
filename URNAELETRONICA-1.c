#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int opcao_rep,opcao, confirma, nulos = 0,nulos_rep = 0, nulos_presi = 0, total_votos = 0, branco,brancos_rep = 0,brancos_presi = 0, corrige, menu;
	int candidato1 = 0, candidato2 = 0, candidato3 = 0,candidato4 = 0, candidato5 = 0, presidente1 = 0, presidente2 = 0;
	int num_eleit, n;
	int senha_certa, senha;
	
	printf("Digite a senha de acesso a urna: ");
	scanf("%d", &senha);
	
	senha_certa = "123654789";
	
	
	
	if(senha = senha_certa){
	do{
		
		printf("Escolha oque deseja fazer pelo o número que antescede a opção\n\n");
		
		printf("1 - Definir a quantidade de eleitores\n");
		printf("2 - Iniciar Votação\n");
		printf("3 - Contabilizar votos\n");
		printf("4 - sair\n");
		
		printf("Digite a opção: ");		
		scanf("%d", &menu);
		
			switch(menu){
				
			case 1:
				printf("Digite o numero de eleitores: ");
				scanf("%d", &num_eleit);
				break;
			case 2:
				if(num_eleit >= 31){
			
				for(n = 1; n <= num_eleit; n++){
				printf("Digite a senha de acesso a urna para garantir a segurança: ");
				scanf("d\n", &senha );
				
				if(senha = senha_certa){
					printf("Eleições Grêmio Estudantil\n");      
        			printf(" _______________________      Justiça Estudantil  \n");
        			printf(" |    Seu voto para    |     |  1  |  2  |  3 |   \n");
        			printf(" |     REPRESENTANTE   |     |  4  |  5  |  6 |   \n");
        			printf(" |                     |     |  7  |  8  |  9 |   \n");
        			printf(" |      _ _ _ _ _      |           |  0  |        \n");
        			printf(" |                     |                          \n");
        			printf(" |                     | |Branco | Corrige| Confirma |\n");
        			printf(" |_____________________|                          \n\n");
        
        		//nomes dos candidatos a representante estudantil
				printf("Candidatos a Representante Estudantil: \n"); 
        		printf("Candidato 1: 12345 - David Else\n"); 
        		printf("Candidato 2: 67890 - Vinicius While\n"); 
        		printf("Candidato 3: 98765 - Pollyana Return\n");
				printf("Candidato 4: 43210 - Karla Float\n");
				printf("Candidato 5: 48444 - Dyego Main\n");
        		printf("Digite o codigo do candidato: \n");
        		scanf("%d", &opcao_rep);
				
				
				
				switch(opcao_rep){
					
			    case 12345:
		 			//votando no candidato       
   	   	   	   	    printf("Eleições Grêmio Estudantil\n");
   	 	 	 	    printf(" _______________________      Justiça Estudantil  \n");
                    printf(" |                     |     |  1  |  2  |  3 |   \n");
                    printf(" |  12345 - David      |     |  4  |  5  |  6 |   \n");
                    printf(" |          Else       |     |  7  |  8  |  9 |   \n");
                    printf(" |                     |           |  0  |        \n");
                    printf(" |                     |                          \n");
                    printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
                    printf(" |_____________________|                         \n");
                    printf("Digite a opcao: \n");
                    scanf("%d", &confirma);
		 
		    		if(confirma == 3){
              	  	  candidato1++;
              	  	  total_votos++;
              	  	  printf("\a\a\a"); //confirmando o voto e fazendo o som		 		 
					 }
		   	   	   	   break;	
                case 67890:
           	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  67890 - Vinicius   |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |           While     |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige| (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
           	   	   printf("Digite a opcao: \n");
           	   	   scanf("%d", &confirma); 
        
    			   if(confirma == 3){
              	  	  candidato2++;
              	  	  total_votos++;
              	  	  printf("\a\a\a"); 		 		 
					}
 	 	   	   	      break;
	 	 	    case 98765:
           	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  98765 - Pollyana   |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |           Return    |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
           	   	   printf("Digite a opcao: \n");
           	   	   scanf("%d", &confirma); 
        
    		       if(confirma == 3){
                     candidato3++;
  	  	             total_votos++;
                     printf("\a\a\a"); 		 		 
					}
					  break;
		  	    case 43210:
           	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  43210 - Karla      |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |          Float      |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
           	   	   printf("Digite a opcao: \n");
           	   	   scanf("%d", &confirma); 
        
				   if(confirma == 3){
              	     candidato4++;
        		     total_votos++;
              	     printf("\a\a\a"); 		 		 
			        }
		 	 	      break; 
  	  	  	    case 48444:
           	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  48444 - Dyego      |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |           Main      |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
           	   	   printf("Digite a opcao: \n");
           	   	   scanf("%d", &confirma); 
        
    			   if(confirma == 3){
              	     candidato5++;
  	  	  	  	     total_votos++;
              	     printf("\a\a\a"); 		 		 
					}
		 	 	      break;
 	  	   	    case 1://voto em branco
           	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |   0000 - Voto em    |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |           branco    |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
      
              	   branco++;
              	   brancos_rep++;
              	   total_votos++;
              	   printf("\a\a\a"); 		 		 
		 			 break;
		  	    case 2: //corrigindo o voto e escolhendo o candidato		  	
           	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  01010 - Corrigir   |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |          seu voto   |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
           	   	   printf("Digite a opcao: \n");
           	   	   scanf("%d", &corrige); 
        
    			   if(corrige == 2){
  	  	  	  	     corrige++;
  	  	  	  	     printf("\a\a\a");
					}
					  break;
			  
				   printf("Eleições Grêmio Estudantil\n");      
        		   printf(" _______________________      Justiça Estudantil  \n");
        		   printf(" |    Seu voto para    |     |  1  |  2  |  3 |   \n");
        		   printf(" |     REPRESENTANTE   |     |  4  |  5  |  6 |   \n");
        		   printf(" |                     |     |  7  |  8  |  9 |   \n");
        		   printf(" |      _ _ _ _ _      |           |  0  |        \n");
        		   printf(" |                     |                          \n");
        		   printf(" |                     | | (1)Branco | (2)Corrige | (3)Confirma |\n");
        		   printf(" |_____________________|                          \n\n"); 		 
				
				   printf("Digite o codigo do candidato: \n");
  		           scanf("%d", &opcao);
				
				default:
				   printf("Seu voto não condiz a um candidato, logo seu voto é nulo.");
				   printf("Eleições Grêmio Estudantil\n");      
        		   printf(" _______________________      Justiça Estudantil  \n");
	    		   printf(" |                     |     |  1  |  2  |  3 |   \n");
        		   printf(" |                     |     |  4  |  5  |  6 |   \n");
        		   printf(" |         FIM         |     |  7  |  8  |  9 |   \n");
        		   printf(" |                     |           |  0  |        \n");
        		   printf(" |                     |                          \n");
        		   printf(" |                     | | (1)Branco | (2)Corrige | (3)Confirma |\n");
        		   printf(" |_____________________|                          \n\n");
        		
        		   total_votos++;
        		   nulos_rep++;
					break;
			}	
				
				   printf("Eleições Grêmio Estudantil\n");      
  			       printf(" _______________________      Justiça Estudantil  \n");
  				   printf(" |    Seu voto para    |     |  1  |  2  |  3 |   \n");
  				   printf(" |     Presidente      |     |  4  |  5  |  6 |   \n");
    	  	  	   printf(" |                     |     |  7  |  8  |  9 |   \n");
  				   printf(" |        _ _          |           |  0  |        \n");
  				   printf(" |                     |                          \n");
  				   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
  				   printf(" |_____________________|                          \n\n");
        	
			  
				   printf("Cadidatos a Presidência do Grêmio: \n");
				   printf("Candidato1: 04 - Hadija Printf\n");
				   printf("Candidato2: 08 - Lavínia Scanf\n");
			       printf("Corrigir voto: 02\n");
				   printf("Digite o código do presidente: \n");
				   scanf("%d", &opcao);    
			
        		switch(opcao){
				  
        		case 04:
           	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  04 - Hadija        |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |        Printf       |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
           	   	   printf("Digite a opcao: \n");
           	   	   scanf("%d", &confirma);
		    
					if(confirma == 3){
              	  	  presidente1++;
	   	   	   	      total_votos++;
              	  	  printf("\a\a\a"); 		 		 
					 }
					   break;	
				case 8:	
	   	   	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  08 - Lavínia       |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |        Scanf        |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
           	   	   printf("Digite a opcao: \n");
           	   	   scanf("%d", &confirma);
		    
					if(confirma == 3){
              	  	  presidente2++;
	   	   	   	      total_votos++;
      	  	  	      printf("\a\a\a"); 		 		 
					 }
					   break;	
				case 1:
           	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  00 - Voto em       |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |        branco       |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
         
  	  	  	  	  branco++;
  	  	  	  	  brancos_presi++;
              	  total_votos++;
              	  printf("\a\a\a"); 		 		 
					  break;
				case 02:
		   	   	   printf("Eleições Grêmio Estudantil\n");
           	   	   printf(" _______________________      Justiça Estudantil  \n");
           	   	   printf(" |                     |     |  1  |  2  |  3 |   \n");
           	   	   printf(" |  02 - Corrigir      |     |  4  |  5  |  6 |   \n");
           	   	   printf(" |        seu voto     |     |  7  |  8  |  9 |   \n");
           	   	   printf(" |                     |           |  0  |        \n");
           	   	   printf(" |                     |                          \n");
           	   	   printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           	   	   printf(" |_____________________|                         \n");
           	   	   printf("Digite a opcao: \n");
           	   	   scanf("%d", &corrige); 
        
            		if(corrige == 2){
              	  	  corrige++;
              	  	  printf("\a\a\a");
						  
						  		   			  
					printf("Eleições Grêmio Estudantil\n");      
  					printf(" _______________________      Justiça Estudantil  \n");
  					printf(" |    Seu voto para    |     |  1  |  2  |  3 |   \n");
  					printf(" |     Presidente      |     |  4  |  5  |  6 |   \n");
  					printf(" |                     |     |  7  |  8  |  9 |   \n");
  					printf(" |        _ _          |           |  0  |        \n");
  					printf(" |                     |                          \n");
  					printf(" |                     | | (1)Branco | (2)Corrige | (3)Confirma |\n");
  					printf(" |_____________________|                          \n\n");
        	
					printf("Cadidatos a Presidência do Grêmio: \n");
					printf("Candidato1: 04 - Hadija Printf\n");
					printf("Candidato2: 08 - Lavínia Scanf\n");
					printf("Encerrar votação: -1\n");
					printf("Digite o código do presidente: \n");
					scanf("%d", &opcao);     	 	
					}
					   break;
				default:
					printf("Seu voto não condiz a um candidato, logo seu voto é nulo.");
					printf("Eleições Grêmio Estudantil\n");      
        			printf(" _______________________      Justiça Estudantil  \n");
        			printf(" |                     |     |  1  |  2  |  3 |   \n");
        			printf(" |                     |     |  4  |  5  |  6 |   \n");
        			printf(" |         FIM         |     |  7  |  8  |  9 |   \n");
        			printf(" |                     |           |  0  |        \n");
        			printf(" |                     |                          \n");
        			printf(" |                     | | (1)Branco | (2)Corrige | (3)Confirma |\n");
        			printf(" |_____________________|                          \n\n");
        		
        			nulos++;
        			nulos_presi++;
        			total_votos++;
  			  	  	  break;
			
				}
				}	
				else {
					printf("SENHA INCORRETA, VOLTANDO AO MENU INICIAL");
  	  	  	    }	

				}
				}
				else{
					printf("Desculpe, o numero de eleitores deve ser acima de 31 \n");
				}
				
				
				break;
			
				
					 
				case 03:
					printf("CONTAGEM DE VOTOS \n\n");
					printf("REPRESENTANTES \n\n");
					printf("NÚMERO TOTAL DE VOTOS: %d \n\n",num_eleit);
					printf("NÚMERO DE ELEITORES DE DAVID ELSE: %d \n",candidato1);
					printf("NÚMERO DE ELEITORES DE VINICIUS WHILE: %d \n",candidato2);
					printf("NÚMERO DE ELEITORES DE POLLYANA RETURN: %d \n",candidato3);
					printf("NÚMERO DE ELEITORES DE KARLA FLOAT: %d \n",candidato4);
					printf("NÚMERO DE ELEITORES DE DYEGO MAIN: %d \n",candidato5);
					printf("NÚMERO DE VOTOS EM BRANCO PARA REPRESENTANTE: %d \n",brancos_rep);
					printf("NÚMERO DE VOTOS NULOS PARA REPRESENTANTE: %d \n\n",nulos_rep);
					printf("PRESIDENTES \n\n");
					printf("NÚMEROS DE ELEITORES DE HADIJA PRINTF: %d\n",presidente1);
					printf("NÚMEROS DE ELEITORES DE LAVINIA SCANF: %d\n",presidente2);
					printf("NÚMERO DE VOTOS EM BRANCO PARA PRESIDENTE: %d\n", brancos_presi);
					printf("NÚMERO DE VOTOS NULOS PARA REPRESENTANTE: %d\n", nulos_presi);		
					  break;
	   	   	    case 4:
		   			printf("Obrigado por usar a urna. \n");
		   			printf("Desligando... \n");
		   			printf(".\n");
		   			printf(".\n");
		   			printf(".\n");
		   			printf(".\n");
					  break;	   	
			}	}while(menu != 4);
	}
}		
	
				
				
					  