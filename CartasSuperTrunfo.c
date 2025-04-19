#include <stdio.h>

    int main() {
    
    printf("Super Trunfo!");

   // Todas as variáveis com o final 01 correspondem a primeira carta.//
   // Todas as variáveis com o final 02 correspondem a segunda carta.//
   // A variável Pontos é correspondentende aos pontos turisticos.//

    char Estado01[50];
    char Código01 [50];
    char Nome01 [50];
    int População01;
    float Area01;
    float PIB01;
    int Pontos01;
    
    char Estado02[50];
    char Código02 [50];
    char Nome02 [50];
    int População02;
    float Area02;
    float PIB02;
    int Pontos02;
    
   printf("A seguir coloque as informações dos dados da carta 01");

   printf("Digite o nome do Estado01: \n");
   scanf("%s", &Estado01);
   
   printf("Digite um código para carta 01: \n");
   scanf("%s", &Código01);
   
   printf("Digite a Cidade: \n");
   scanf("%s", &Nome01);

   printf("Digite a população: \n");
   scanf("%d", &População01);

   printf("Digite a Area em Km² : \n");
   scanf("%f", &Area01);

   printf("Digite o PIB : \n");
   scanf("%f", &PIB01);
    
   printf("Digite a quantidade de pontos Turisticos: \n");
   scanf("%d",&Pontos01);

   printf("A seguir coloque as informações dos dados da carta 02");
    
   printf("Digite o nome do Estado02: \n");
   scanf("%s", &Estado02);

   printf("Digite o código para a carta 02: \n");
   scanf("%s",&Código02);

   printf("Digite a cidade: \n");
   scanf("%s", &Nome02);

   printf("Digite a população: \n");
   scanf("%d", &População02);

   printf("Digite a Area por Km²: \n");
   scanf("%f", &Area02);

   printf("Digite o PIB: \n");
   scanf("%f",&PIB02);

   printf("Digite a quantidade de pontos turisticos: \n ");
   scanf("%d", &Pontos02);


   






    return 0;




}
