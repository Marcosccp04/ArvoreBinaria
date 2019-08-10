/*
  Autor: Marcos Augusto
  Email: marcosccp04@gmail.com
*/
# include "Arv.c"
#include <conio.h>
#include <stdlib.h>

main(){
 int num;
 char Nome[100],op[2];
      
 Arvore *raiz;
 raiz = NULL;
      
 while(num!=7) {
  Menu(&num);
  switch(num){
    case 1:
         do{
           Menu_1();
           ler_string(Nome);
           inserir(&raiz,Nome);
           opcao(op);
          }while(*op == 's' || *op =='S');
           break;
    case 2:
           Menu_2();
           ordem(raiz);
           getch();
           break;
    case 3:
           Menu_3();
           ler_string(Nome);
           busca(raiz,Nome);
           break;
    case 4:
         do{
           Menu_4();
           ler_string(Nome);
           opcao(op);
           if(*op == 'n' || *op =='N')break;
            excluir(&raiz,Nome);break;
           }while(*op =='s' || *op =='S');           
            break;
    case 5:
           Menu_5();
           ler_string(Nome);
           Altera(&raiz,Nome);
           break;
          }system("cls");
 }
}
                             
      
