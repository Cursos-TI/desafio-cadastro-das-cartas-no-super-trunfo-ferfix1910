#include <stdio.h>

    int main() {
    
    printf("Super Trunfo! \n");

   // Todas as variáveis com o final 01 correspondem a primeira carta.//
   // Todas as variáveis com o final 02 correspondem a segunda carta.//
   // A variável Pontos é correspondentende aos pontos turisticos.//

    char Estado01[100];
    char Codigo01 [100];
    char Nome01 [100];
    int Populacao01;
    float Area01;
    float PIB01;
    int Pontos01;
    
    char Estado02[100];
    char Codigo02 [100];
    char Nome02 [100];
    int Populacao02;
    float Area02;
    float PIB02;
    int Pontos02;
    
   printf("A seguir coloque as informações dos dados da carta 01: \n");

   printf("Digite o nome do Estado01: \n");
   scanf("%s", &Estado01);
   
   printf("Digite um código para carta 01: \n");
   scanf("%s", &Codigo01);
   
   printf("Digite a Cidade: \n");
   scanf("%s", &Nome01);

   printf("Digite a população: \n");
   scanf("%d", &Populacao01);

   printf("Digite a Area em Km² : \n");
   scanf("%f", &Area01);

   printf("Digite o PIB : \n");
   scanf("%f", &PIB01);
    
   printf("Digite a quantidade de pontos Turisticos: \n");
   scanf("%d",&Pontos01);

   printf("A seguir coloque as informações dos dados da carta 02: \n");
    
   printf("Digite o nome do Estado02: \n");
   scanf("%s", &Estado02);

   printf("Digite o código para a carta 02: \n");
   scanf("%s",&Codigo02);

   printf("Digite a cidade: \n");
   scanf("%s", &Nome02);

   printf("Digite a população: \n");
   scanf("%d", &Populacao02);

   printf("Digite a Area por Km²: \n");
   scanf("%f", &Area02);

   printf("Digite o PIB: \n");
   scanf("%f",&PIB02);

   printf("Digite a quantidade de pontos turisticos: \n ");
   scanf("%d", &Pontos02);




  
  
  
   return 0;




}
