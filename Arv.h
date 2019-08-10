struct arvore{
       char Nome[100];
       int telefone;
       struct arvore *esq;
       struct arvore *dir;
};
typedef struct arvore Arvore;

void inserir(Arvore **raiz,char string[]);
void ordem(Arvore *raiz);
void busca(Arvore *raiz,char string[]);
void Altera( Arvore **raiz, char *string);
void excluir(Arvore **raiz,char string[]);
Arvore** menor_dir(Arvore *raiz);
Arvore** maior_esq (Arvore *raiz);
void ler_string(char string[]);
void ler_telefone(int *telefone);
void maiuscula(char string[]);
void Menu(int *num);
void opcao(char op[]);
void Menu_1();
void Menu_2();
void Menu_3();
void Menu_4();
void Menu_5();
void posicao(int x, int y);
void cor(WORD cor);
