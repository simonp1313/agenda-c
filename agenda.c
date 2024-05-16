/*FMM - 2022 
Alunos: Simon Paris e Gabriely Martins
Turma: I1B
*/



#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <conio.c>
#include <string.h>

struct contato{
	int cnum;
	char cnome[50];
	
	}cdados[100];
	
int main(){
	
	int i,op=1,op2,cod=0,qtc=0,j=4,des,procnum, auxnum=0, aux=0,numedit,exc,numexc,proc=0;
	char procnome[50], auxnome[50],nomeexc[50];
	
	while(op != 0){
		
		
	textcolor(15);
	
	for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
	}
	for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	}
	for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	}
	gotoxy(50,5);
	textbackground(9); printf("Contatos!\n\n");
	textbackground(3);
	printf("\t\t\t\t\tEscolha uma das opcoes abaixo:\n\n\t\t\t\t\t  1-Adicionar contato\n\t\t\t\t\t  2-Remover contato\n\t\t\t\t\t  3-Editar contato\n\t\t\t\t\t  4-Listar contatos\n\t\t\t\t\t  5-Buscar contato\n\t\t\t\t\t  0-Sair do programa\n\n\t\t\t\t\tDigite a opcao desejada:\n");
    gotoxy(50,18);
	textbackground(15);
	textcolor(0);
	printf("    ");
	gotoxy(51,18);
	scanf("%d",&op);
	
	
	
	
	
	//1 funcionalidade
	if(op == 1){
		
		op2 = 1;
		
		
		while(op2 != 0 ){
		aux = 0;
		auxnum = 0;
		strcpy(auxnome, " ");
		system("cls");		
			
		for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
		}
	    for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	    }
	    for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	    }
		
		
		textbackground(3);
		textcolor(15);
		
		gotoxy(20, 6); printf("Informe o nome do contato que deseja adicionar:");
		gotoxy(20,10); printf("Informe o numero do contato:");
		
		
		gotoxy(70,6);
	    textbackground(15);
	    textcolor(0);
	    printf("              ");
	    
		gotoxy(50,10);
	    textbackground(15);
	    textcolor(0);
	    printf("              ");
		
		
		gotoxy(70,6);
		fflush(stdin);
		gets(auxnome);
		
		gotoxy(50,10);
		scanf("%d",&auxnum);
		
		
		if(qtc == 0){
			
			textbackground(3);
			textcolor(15);
		
		gotoxy(20,14);printf("Contato salvo com sucesso!\n");
		 strcpy (cdados[qtc].cnome, auxnome);
		 cdados[qtc].cnum = auxnum;
		qtc ++;
		
		gotoxy(20,18);printf("Digite 0 para retornar ao menu ou 1 para adicionar outro contato:");
		
		gotoxy(77,18);
	    textbackground(15);
	    textcolor(0);
	    printf("          ");
	    
	    gotoxy(77,18);
		scanf("%d",&op2);
			
		}else{
		
		
		
		
		
		for(i=0; i<=qtc; i++){
		
	
		if( strcmp (auxnome, cdados[i].cnome) == 0 || auxnum == cdados[i].cnum){
			
			aux ++;
		}
		}
		
		
		
		 if(aux > 0 ){
		 	
			textbackground(3);
			textcolor(15);
			
			gotoxy(20,14);printf("Este contato/numero ja existe!\n");
			
			textbackground(3);
			textcolor(15);
		
			gotoxy(20,18);printf("Digite 0 para retornar ao menu ou 1 para adicionar outro contato:");
		
			gotoxy(77,18);
	    	textbackground(15);
	    	textcolor(0);
	    	printf("          ");
	    
	    	gotoxy(77,18);
			scanf("%d",&op2);

		 }else if(aux == 0 ){
			
			
		
		textbackground(3);
		textcolor(15);
		
		gotoxy(20,14);printf("Contato salvo com sucesso!\n");
		 strcpy (cdados[qtc].cnome, auxnome);
		 cdados[qtc].cnum = auxnum;
		
		qtc ++;
		
		gotoxy(20,18);printf("Digite 0 para retornar ao menu ou 1 para adicionar outro contato:");
		
		gotoxy(77,18);
	    textbackground(15);
	    textcolor(0);
	    printf("          ");
	    
	    gotoxy(77,18);
		scanf("%d",&op2);

	
	
		 }
		 }
		}
		system("cls");
	
	}
	
	
	
	
	
	//inicio funcionalidade 4;
	if(op == 4){
		
		system("cls");
		for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
		}
	    for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	    }
	    for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	    }
	    j = 4;
	    for(i=0; i<qtc; i++){
			gotoxy(10,j);
			textbackground(3);
			textcolor(15);
	    	printf("%d - Contato: %s (%d)\n",i+1,cdados[i].cnome, cdados[i].cnum);
	    	printf("----------------------------------------\n");
	    	j +=2;
		}
		
		gotoxy(10,j+2);
		printf("Pressione qualquer tecla para continuar...");
	    getch();
		system("cls");
	}
	
	
	
	
	
	//fun?ao 5
	
	if( op == 5){
		
		system("cls");
		for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
		}
	    for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	    }
	    for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	    }
	    
	    proc = 0;
	    
	    gotoxy(40, 5);
	    textbackground(3);
		textcolor(15);
	    printf("Voce deseja procurar por:");
	     gotoxy(40, 7);
	    printf("1-Numero");
	     gotoxy(40, 8);
	     printf("2-Nome");
	     gotoxy(40, 9);
	     
	    gotoxy(40,10);
	    textbackground(15);
	    textcolor(0);
	    printf("   ");
	     
	    gotoxy(41,10); 
	    scanf("%d",&des);
	    system("cls");
	    
	    if(des==1){ //PESQUISA POR NUM
	    	
	    		
	    system("cls");
		for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
		}
	    for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	    }
	    for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	    }
	    
	    
	   	gotoxy(40, 8);
	   	textbackground(3);
		textcolor(15);
	   	printf("informe o numero que deseja procurar:");
	    		
	   	gotoxy(40,10);
	    textbackground(15);
	   	textcolor(0);
	    printf("              ");
	    		
		gotoxy(40,10);
		scanf("%d",&procnum);
	    	
	    	for(i=0; i<=qtc; i++){
	    		
	    		if(procnum==cdados[i].cnum){	
				
				gotoxy(40,14);
				textbackground(3);
				textcolor(15);
				proc ++;
	    		printf("Contato: %s (%d)\n",cdados[i].cnome,cdados[i].cnum);
	    		
	    		}
	    	}//fecha for	
	    if(proc == 0){
			
				
		system("cls");
		for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
		}
	    for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	    }
	    for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	    }
			
		gotoxy(40,10);
		textbackground(3);
		textcolor(15);
		
		printf("Este nome/numero nao existe!");	
		
		}
		 
	
	    	
	    	
	    	
	    	
		}else if(des==2){ //PROCURA POR NOME
			
		system("cls");
		for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
		}
	    for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	    }
	    for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	    }
			
			gotoxy(40, 8);
	    	textbackground(3);
			textcolor(15);
			printf("informe o nome que deseja procurar:");
			
			gotoxy(40,10);
	   		textbackground(15);
	   		textcolor(0);
	 		printf("              ");
	    		
	    	fflush(stdin);	
	    	gotoxy(40,10);
			gets(procnome);
			
			
				gotoxy(40, 14);
	    		textbackground(3);
				textcolor(15);
			
				for(i=0; i<=qtc; i++){
			
				if(strcmp(procnome,cdados[i].cnome)==0){
					
				gotoxy(40,14);
				textbackground(3);
				textcolor(15);
				proc ++;
	    		printf("Contato: %s (%d)\n",cdados[i].cnome,cdados[i].cnum);
	    	    
			}		
		}		
		if(proc == 0){
			
				
		system("cls");
		for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
		}
	    for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	    }
	    for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	    }
			
		gotoxy(40,10);
		textbackground(3);
		textcolor(15);
		
		printf("Este nome/numero nao existe!");	
		
		}
				
			
			
			}
			
			gotoxy(40,16);
			textbackground(3);
			textcolor(15);
			printf("Pressione qualquer tecla para continuar...");
	        getch();
	     
			system("cls");
			
		
}
	
	

	
	
	//inicio funcionalidade 3
	if(op==3){
		
		system("cls");
		for(i=0; i<120; i++){
		textbackground(9);
		printf(" ");
		}
	    for(i=0; i<3360; i++){
		textbackground(3);
		printf(" ");
	    }
	    for(i=1; i<=120; i++){
		gotoxy(i,30);
		textbackground(9);
		printf(" ");
	    }
	    
	    j = 4;
	    for(i=0; i<qtc; i++){
			gotoxy(10,j);
			textbackground(3);
			textcolor(15);
	    	printf("%d - Contato: %s (%d)\n",i+1,cdados[i].cnome, cdados[i].cnum);
	    	printf("-----------------------------------------\n");
	    	j +=2;
		}
		
			gotoxy(50,4);
			printf("Informe o codigo do contato que deseja editar:");
		
			gotoxy(102,4);
	   		textbackground(15);
	   		textcolor(0);
	 		printf("   ");
	    		
	    	gotoxy(102,4);
	    	scanf("%d",&numedit);
		
			system("cls");
			
			for(i=0; i<120; i++){
			textbackground(9);
			printf(" ");
			}
	    	for(i=0; i<3360; i++){
			textbackground(3);
			printf(" ");
	   	    }
	    	for(i=1; i<=120; i++){
			gotoxy(i,30);
			textbackground(9);
			printf(" ");
	    	}
			
			textbackground(3);
			textcolor(15);
			gotoxy(20,6);
			printf("nome antigo: %s ",cdados[numedit-1].cnome);
			textcolor(15);
			gotoxy(20,8);
			printf("numero antigo: %d ",cdados[numedit-1].cnum);
			
			
			gotoxy(20, 10);
			printf("novo nome:");
			gotoxy(20, 14);
			printf("novo numero:");
			
			gotoxy(20,11);
	   		textbackground(15);
	   		textcolor(0);
	    	printf("              ");
	    
			gotoxy(20,15);
	    	textbackground(15);
	   		textcolor(0);
	    	printf("              ");
			
			
			gotoxy(20,11);
			fflush(stdin);
			gets(cdados[numedit-1].cnome);
			
			gotoxy(20,15);
			scanf("%d",&cdados[numedit-1].cnum);
			
			textbackground(3);
			textcolor(15);
		
			gotoxy(20,17);printf("Contato editado com sucesso!\n");
			
	    	getch();
			system("cls");
		
		
	}
	
		if(op == 2){
		
			system("cls");
			
			for(i=0; i<120; i++){
			textbackground(9);
			printf(" ");
			}
	    	for(i=0; i<3360; i++){
			textbackground(3);
			printf(" ");
	   	    }
	    	for(i=1; i<=120; i++){
			gotoxy(i,30);
			textbackground(9);
			printf(" ");
	    	}
		
			gotoxy(40,5); 
			textbackground(3);
			textcolor(15);
			printf("Digite o nome do contato que deseja excluir:");
			
			gotoxy(40,7);
	    	textbackground(15);
	   		textcolor(0);
	    	printf("              ");
		
			gotoxy(40,7);
	    	textbackground(15);
	   		textcolor(0);
	   		fflush(stdin);
	   		gets(nomeexc);
	   		
	   		gotoxy(40,11);
			textbackground(3);
			textcolor(15);
			
			for(i=0; i<=qtc; i++){
				
				if(strcmp(nomeexc, cdados[i].cnome) == 0){
					numexc = i;
				}
			}	
	    	printf("Deseja excluir o contato: %s (%d)?\n",cdados[numexc].cnome,cdados[numexc].cnum);
	    	    
			gotoxy(40,13); printf("1-Sim");
			gotoxy(40,14); printf("2-Nao");
		
			gotoxy(40,16);
	    	textbackground(15);
	   		textcolor(0);
	    	printf("         ");
	    	gotoxy(40,16);
	    	scanf("%d",&exc);
	    	
	    	
	    	if(exc == 1){
	    		
	    		for(exc = numexc; exc < qtc; exc++){
				
				strcpy(cdados[exc].cnome, cdados[exc+1].cnome);
				cdados[exc].cnum = cdados[exc+1].cnum;
				
			}
	    	qtc--;
	    	gotoxy(40,18);
			textbackground(3);
			textcolor(15);
			printf("Contato excluido com sucesso!");
	    	
		}
		gotoxy(40,20);
		textbackground(3);
		textcolor(15);
		printf("Pressione qualquer tecla para continuar...");
		getch();
		system("cls");
	}
	
	
	
	
	
}//fecha o primeiro while
	return 0;
}
