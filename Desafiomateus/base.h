#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <locale.h>

typedef struct pessoa{
    char nome[20];
    char salario[12];
}tab_pessoa;

void cadastraContato(void);
void ordernaContato(void);
void listaContato(void);
void bolha(void);
void insercao(void);
void selecao(void);
void Menu(void);
char ValidaResp();

tab_pessoa quant[5];
static int qntd = 0;
FILE *fp;

int main (){
    setlocale(LC_ALL,"portuguese");
    int var;
    system("color 4f");

    printf("\n\n\n\n\n");
    printf("\t\t******************************************* \n\n");
    printf("\t\t\         CADRASTRO DE FUNCIONARIO        \n\n");
    printf("\t\t******************************************* \n\n");
    printf(" \t\t******************************************* \n\n");
    printf(" \t\t         ALENALDO MEDEIRO FERREIRA   \n\n");
    printf(" \t\t   FLEDSON HENRIQUE FERREIRA DO NASCIMENTO \n\n");
    printf(" \t\t******************************************* \n\n");

    printf("      \t\t       Presione enter para iniciar         \n");


    var=getch();

    if(var == 27){ exit(1);}
    Menu();
    getch();

}
void Menu(void){
     int opcao,opc,opc1;
    system("cls");
    while(1){
    printf("\n\n\n\n\n");
    printf("\t\t******************************************* \n\n");
    printf(" \t\t         [CADASTRO DE FUNCIONARIO]\n\n\n");
    printf("\t\t      [1] - CADASTRO \n\n");
    printf("\t\t      [2] - ORDENAR \n\n");
     printf("\t\t      [3] - LISTA \n\n");
    printf("\t\t      [0] - SAIR\n\n");
    printf("\t\t******************************************* \n\n");
    printf("\t\tOPÇÂO: ");
    scanf ("%d",&opcao);
    fflush(stdin);
    if(!opcao)
    break;
    switch (opcao){
       case 1:
      cadastraContato();
                    system("cls");
                    break;
       case 2:
            system("cls");
                    ordernaContato();

                    system("cls");
                    break;
        case 3:
            system("cls");
                    listaContato();
                    system("cls");
                    break;
       case 0:
            printf("SAIR\n");
            return(0);
       default:
       printf("\n\n Opcao invalida!\n");
       break;
       }
       system("cls");
    }
}

void cadastraContato(void){
     int add = 0, escrita,s=1;
      char op = 's';

     if ((fp = fopen("agenda.txt", "a")) == NULL)
     {
        printf ("Erro! Arquivo não pode ser aberto!\n");
        printf ("Faltam dados!\n");
        getch();


     }
        while ((add < 5) && (op == 's'))
     {
        do{
        system("cls");
        printf("\n\n\t\t*******************************************\n");
        printf(" \t\t            CADASTRO DE CONTATO\n");
        printf("\t\t******************************************* \n\n");
        printf("\t\t NOME: ");
        gets(quant[add].nome);
        s=strlen(quant[add].nome);
        if(s==0){
            printf("Nome Inválido \n ");
        }
        }while (s==0);
        printf("\t\t******************************************* \n");
        printf("\t\t SALARIO: ");
        gets(quant[add].salario);

           escrita = fwrite(&quant[add], sizeof(struct pessoa) ,1,fp);

           if (escrita == 1) {
               printf(" \n\t\t    Salvo com sucesso! ");
           }
           add++;
           op = ValidaResp();
           qntd++;
     }
     fclose (fp);
}

void ordernaContato(void){
   int opc3;
    printf("\n\n\t\t*******************************************");
    printf(" \n\t\t                 [ORDERNAR]\n\n\n");
    printf("\t\t                [1] - BOLHA\n\n");
    printf("\t\t                [2] - INSERÇAO\n\n");
    printf("\t\t                [3] - SELEÇÂO\n\n");
    printf("\t\t                [0] - SAIR\n\n");
    printf("\t\t*******************************************\n");
    printf("\t\tOPÇÂO: ");
    scanf ("%d",&opc3);
    fflush(stdin);
    if(!opc3);
    switch (opc3){
       case 1:
            bolha();
            break;
       case 2:
           insercao();
           break;
       case 3:
           selecao();
           break;
       case 0:
            printf("SAIR\n");
            return(0);
       default:
       printf("\n\n\t\t Opcao invalida!\n");
       break;
       }
}

void listaContato(void){
int indice = 0, leitura;

    if ((fp = fopen("agenda.txt", "r")) == NULL)
    {
    printf ("O arquivo da lista não pode ser aberto!\n");
    printf ("Insira dados!\n");
    getch();
    }

    leitura = fread(&quant[indice], sizeof(struct pessoa), 1, fp);
        system("cls");
        printf("\n\n\t\t\t         ::FUNCIONARIOS::\n\n");
   while ( leitura == 1) {
        printf("\t\t ******************************************* \n");
        printf("\t\t NOME: %s\n",quant[indice].nome);
        printf("\t\t ******************************************* \n");
        printf("\t\t SALARIO: %s\n",quant[indice].salario);
        printf("\t\t ******************************************* \n\n");

        indice++;
      leitura = fread(&quant[indice], sizeof(struct pessoa), 1, fp);
      }
      printf(" \n\n\t\t %d CONTATOS SALVOS!\n", indice);
      fclose(fp);
      system("pause");
}

void bolha(void){

    // a) Em ordem crescente de salário;

    int numconts,ib,jb,a,escrita;
    tab_pessoa vet;
    numconts = Contador();
          for(ib = 1; ib < numconts; ib++){
                 for (jb = 0; jb < numconts-1; jb++){
                      if(strcmp(quant[jb].salario,quant[jb+1].salario) > 0){
                        vet=quant[jb];
                         quant[jb]=quant[jb+1];
                         quant[jb+1] = vet;
                      }
                   }
                 }
        remove("agenda.txt");
        if ((fp = fopen("agenda.txt", "w+")) == NULL){
            printf ("Erro!\n");
            getch();

        }
        for ( a = 0 ; a < numconts ; a++ ){
            escrita = fwrite (&quant[a], sizeof(struct pessoa) ,1,fp);
            if (escrita != 1) {
                printf(" \n Erro ! ");
            }
        }
        fclose(fp);
        system("cls");
        printf("\n\n\t\t******************************************* ");
        printf("\n \t\t      ORDERNAÇÂO BOLHA CONCLUIDA! \n");
        printf("\t\t******************************************* \n");
        printf("\n\n\n");
         for(a=0;a<numconts;a++){
        printf("\n");
        printf("\t\t******************************************* \n");
        printf("\t\tNOME: %s\n",quant[a].nome);
         printf("\t\tSALARIO: %s\n",quant[a].salario);}
        printf("\t\t******************************************* \n");
        printf("\n\n\n");
        system("pause");
}
void insercao(void){
    // b)Em ordem decrescente de salário;
    int numconts,ii,ji,a,escrita;
    tab_pessoa vet;
    numconts = Contador();

    for(ii = 1; ii < numconts; ii++){
          ji=ii;
          while((ji!= 0) && (strcmp(quant[ji].salario , quant[ji-1].salario)>0)){
            vet = quant[ji];
            quant[ji] = quant[ji-1];
            quant[ji-1] = vet;
            ji--;
        }
    }
    remove("agenda.txt");
        if ((fp = fopen("agenda.txt", "w+")) == NULL){
            printf ("Erro!\n");
            getch();

        }
        for ( a = 0 ; a < numconts ; a++ ){
            escrita = fwrite (&quant[a], sizeof(struct pessoa) ,1,fp);
            if (escrita != 1) {
                printf(" \n Erro ! ");
            }
        }
        fclose(fp);
        system("cls");
        printf("\n\n\t\t******************************************* ");
        printf("\n \t\t      ORDERNAÇÂO ISERÇÃO CONCLUIDA! \n");
        printf("\t\t******************************************* \n");
         for(ii=0;ii<numconts;ii++){
        printf("\n");
        printf("\t\t******************************************* \n");
        printf("\t\tNOME: %s\n",quant[ii].nome);
         printf("\t\tSALARIO: %s\n",quant[ii].salario);}
        printf("\t\t******************************************* \n");
        printf("\n\n\n");
        system("pause");
}
void selecao(void){
    //c) Em ordem albabética.
    int numconts,is,js,ks,escrita;
    numconts = Contador();
     tab_pessoa vet;
     char *string_a, *string_b;
            for ( is = 0 ; is < numconts ; is++ ){
                string_a = quant[is].nome;
               for ( js = is+1 ; js < numconts ; js++ ){
                   string_b = quant[js].nome;
                   if ( strcmp ( string_a, string_b ) > 0 ){
                        vet = quant[is];
                        quant[is] = quant[js];
                        quant[js] = vet;
                   }
               }
        }
     remove("agenda.txt");
    if ((fp = fopen("agenda.txt", "w+")) == NULL){
        printf ("Erro!\n");
        getch();

    }
    for ( ks = 0 ; ks < numconts ; ks++ ){
        escrita = fwrite (&quant[ks], sizeof(struct pessoa) ,1,fp);
        if (escrita != 1) {
            printf(" \n Erro ! ");
        }
    }
    fclose(fp);
        system("cls");
        printf("\n\n\t\t******************************************* ");
        printf("\n \t\t      ORDERNAÇÂO SELEÇÃO CONCLUIDA! \n");
        printf("\t\t******************************************* \n");
         for(ks=0;ks<numconts;ks++){
        printf("\n");
        printf("\t\t******************************************* \n");
        printf("\t\tNOME: %s\n",quant[ks].nome);
         printf("\t\tSALARIO: %s\n",quant[ks].salario);}
        printf("\t\t******************************************* \n");
        printf("\n\n\n");
        system("pause");

}
char ValidaResp() {
   char op;
   do {
      printf(" \n\t\t    Inserir novos dados? [S ou N] ? " );
      op = getch();
      printf("\n\t\t   " );
   } while (op != 's' && op != 'n');
   getch();
   return op;
}

int Contador(){
int indice = 0, leitura;

    if ((fp = fopen("agenda.txt", "r")) == NULL)
    {
    printf ("O arquivo da lista não pode ser aberto!\n");
    printf ("Insira dados!\n");
    getch();

    }

    leitura = fread(&quant[indice], sizeof(struct pessoa), 1, fp);


   while ( leitura == 1) {
        indice++;
      leitura = fread(&quant[indice], sizeof(struct pessoa), 1, fp);
      }
      fclose(fp);
      return indice;
}


