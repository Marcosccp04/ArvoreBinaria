# include <windows.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <conio.h>
# include "Arv.h"

void inserir(Arvore **raiz ,char string[]){
 int telefone;
 if(*raiz == NULL){
  *raiz = (Arvore*) malloc (sizeof(Arvore));
  strcpy((*raiz)->Nome,string);
  ler_telefone(&telefone);
  (*raiz)->telefone = telefone;
  (*raiz)->esq = NULL;
  (*raiz)->dir = NULL;              
 }else{
      if(strcasecmp((*raiz)->Nome,string)>0){
       inserir(&(*raiz)->esq,string);                     
      }else{
           if(strcasecmp((*raiz)->Nome,string)<0){
            inserir(&(*raiz)->dir,string);
                          
           }else{
                if(strcmp((*raiz)->Nome,string)==0){
                cor(15); printf("Nome j\xa0 foi registrado\n");
                 getch();
}}}}}
                                                               
void ordem(Arvore *raiz){
 if(raiz!=NULL) {
  ordem((raiz)->esq);
  cor(10);printf("\n\nNome = ");
  cor(11);printf("%s",(raiz)->Nome);
  cor(10);printf("\nTelefone = ");
  cor(11);printf("%d",(raiz)->telefone);
  ordem((raiz)->dir);
}}

void busca(Arvore *raiz,char string[]){
 if(raiz!=NULL) {
   if(strcasecmp((raiz)->Nome,string)>0){
    busca((raiz)->esq,string);
    }else{
         if(strcasecmp((raiz)->Nome,string)<0){
          busca((raiz)->dir,string);
    }else{
          if(strcmp((raiz)->Nome,string)==0){
           system("cls");
           cor(10);posicao(25,1);printf("REGISTRO ENCONTRADO!!\n");
           cor(10);printf("\n\nNome = ");
           cor(11);printf("%s",(raiz)->Nome);
           cor(10);printf("\nTelefone = ");
           cor(11);printf("%d",(raiz)->telefone);
           getch();
}}}}else{
         system("cls");
         cor(10);
         posicao(25,1);printf("*-----------------------*\n");
         posicao(25,2);printf("| Nome n\xc6o encontrado!! |\n");
         posicao(25,3);printf("*-----------------------*\n");
         getch();

}}

void Altera( Arvore **raiz, char *string){
  if((*raiz)!=NULL){
   if(strcasecmp((*raiz)->Nome,string)>0){
    Altera(&(*raiz)->esq,string);

    }else{
         if(strcasecmp((*raiz)->Nome,string)<0){
          Altera(&(*raiz)->dir,string);
    }else{
          if(strcmp((*raiz)->Nome,string)==0){
           system("cls");
           int telefone;
           cor(10);posicao(25,1);printf("REGISTRO ENCONTRADO!!\n");
           cor(10);printf("\n\nNome = ");
           cor(11);printf("%s",(*raiz)->Nome);
           cor(10);printf("\nNovo Telefone = ");
           cor(11);scanf("%d",&telefone);
           (*raiz)->telefone= telefone;
           system("cls");
           cor(10);
           posicao(25,1); printf("*-----------------*\n");
           posicao(25,2); printf("| Dado Alterado!! |\n");
           posicao(25,3); printf("*-----------------*\n");
           getch();
}}}}else{
         system("cls");
         cor(10);
         posicao(25,1);printf("*-----------------------*\n");
         posicao(25,2);printf("| Nome n\xc6o encontrado!! |\n");
         posicao(25,3);printf("*-----------------------*\n");
         getch();

}}

void excluir(Arvore **raiz,char string[]){
 Arvore **aux2, *aux3;     
 if(*raiz!=NULL) {
  if( strcasecmp((*raiz)->Nome , string)==0 ){
   if((*raiz)->esq == (*raiz)->dir){
	free(*raiz);
	*raiz = NULL;
   }else{
	     if((*raiz)->esq != NULL){
          aux2 = maior_esq(*raiz);
	      aux3 = *aux2;
	      (*aux2) = (*aux2)->esq;
	     }else{
			   aux2 = menor_dir(*raiz);
			   aux3 = *aux2;
			   (*aux2) = (*aux2)->dir;
			  }
          strcpy((*raiz)->Nome, aux3->Nome);
	      free(aux3); aux3 = NULL;
	     }
		
  }else{
		if(strcasecmp(string,(*raiz)->Nome)<0)
		{
		 excluir(&(*raiz)->esq,string);
		}else{
		     excluir(&(*raiz)->dir,string);
			 }
	   }
}
        else{
            system("cls");
            cor(10);
            posicao(25,1); printf("*-----------------------*\n");
            posicao(25,2); printf("| Nome n\xc6o encontrado!! |\n");
            posicao(25,3); printf("*-----------------------*\n");
            getch();
        } 
}

Arvore** maior_esq (Arvore *raiz){ 
 Arvore **aux = &(raiz);
 if((*aux)->esq != NULL){
   aux = &(*aux)->esq;
   while( (*aux)->dir != NULL ){
    aux = &(*aux)->dir;
  }}
  return aux;
}

Arvore** menor_dir(Arvore *raiz){
  Arvore **aux = &(raiz);
  if((*aux)->dir != NULL){
    aux = &(*aux)->dir;
    while((*aux)->esq != NULL){
      aux=&(*aux)->esq;
    }}
     return aux;
}

void Menu(int *num){
 cor(11);posicao(35,2);printf("AGENDA");    
 cor(10);posicao(25,2);printf("|");posicao(53,2);printf("|");
 posicao(25,1);printf("*---------------------------*\n");    
 posicao(25,3);printf("|---------------------------|\n");
 posicao(25,4);printf("| 1 - Insere Contatos       |\n");
 posicao(25,5);printf("|---------------------------|\n");
 posicao(25,6);printf("| 2 - Imprime Contatos      |\n");
 posicao(25,7);printf("|---------------------------|\n");
 posicao(25,8);printf("| 3 - Busca de Contatos     |\n");
 posicao(25,9);printf("|---------------------------|\n");
posicao(25,10);printf("| 4 - Retira Contato        |\n");
posicao(25,11);printf("|---------------------------|\n");
posicao(25,12);printf("| 5 - Altera Contato        |\n");
posicao(25,13);printf("|---------------------------|\n");
posicao(25,14);printf("| 7 - Sair                  |\n");
posicao(25,15);printf("*---------------------------*\n");

 posicao(1,1);cor(15);printf("\nDigite uma op\x87\xc6o = ");
 scanf("%d",num);
 getchar();
}

void Menu_1(){
 system("cls");
 cor(10);
 posicao(28,1);printf("*------------------*\n");
 posicao(28,2);printf("| INSERIR CONTATOS |\n");
 posicao(28,3);printf("*------------------* \n");
}

void Menu_2(){
 system("cls");
 cor(10);
 posicao(28,1);printf("*---------------------*\n");
 posicao(28,2);printf("| VIZUALIZAR CONTATOS |\n");
 posicao(28,3);printf("*---------------------* \n");
}

void Menu_3(){
 system("cls");
 cor(10);
 posicao(28,1);printf("*-------------------*\n");
 posicao(28,2);printf("| PESQUIZAR CONTATO |\n");
 posicao(28,3);printf("*-------------------* \n");
}

void Menu_4(){
 system("cls");
 cor(10);
 posicao(28,1);printf("*-------------------*\n");
 posicao(28,2);printf("|  EXCLUIR CONTATO  |\n");
 posicao(28,3);printf("*-------------------* \n");
}

void Menu_5(){
 system("cls");
 cor(10);
 posicao(28,1);printf("*-------------------*\n");
 posicao(28,2);printf("|  ALTERAR CONTATO  |\n");
 posicao(28,3);printf("*-------------------* \n");
}

void posicao(int x, int y){
 HANDLE SaidaSTD = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(SaidaSTD, coord);
}

void cor(WORD cor){
 HANDLE SaidaSTD = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(SaidaSTD, cor);
}

void ler_telefone(int *telefone){
 cor(10);printf("\nDigite o Telefone = ");
 cor(11);scanf("%d",telefone);
}

void ler_string(char string[]){
     cor(10);printf("\nDigite o Nome = ");
     fflush(stdin);

     cor(11);gets(string);
     maiuscula(string);
}

void maiuscula(char string[]){
 int i;
 for(i=0;i<strlen(string);i++){
  if((string[i]>='a') && (string[i]<='z')){
   string[i]-=32;
}}}

void opcao(char op[]){
  cor(11);printf("\n\nDeseja continuar sim = s ou n\xc6o = n\n");
  fflush(stdin);
  gets(op);
}
