#include <stdio.h>

int main() {
    printf("Super Trunfo!");

   // Todas as variáveis com o final 01 correspondem a primeira carta.//
   // Todas as variáveis com o final 02 correspondem a segunda carta.//

    char Estado01[50];
    char Código ,da, carta01 [50];
    char Nome01 [50];
    int População01;
    float Area01;
    float PIB01;
    int Pontos, Turisticos01;
    
    char Estado02[50];
    char Código ,da, carta02 [50];
    char Nome02 [50];
    int População02;
    float Area02;
    float PIB02;
    int Pontos, Turisticos02;
    
   printf("Digite o nome do Estado: \n");
   scanf("%s", &Estado01);
   
   printf("Digite código da carta correspondente ao Estado 01: \n");
   scanf("%s", &Código ,da, carta01);
   
   printf("Digite o nome da Cidade: \n");
   scanf("%s", &Nome01);

   printf("Digite a população: \n");
   scanf("%d", &População01);

   printf("Digite a Area em Km² : \n");
   scanf("%f", &Area01);

   printf("Digite o PIB : \n");
   scanf("%f", &PIB01);
    
   printf("Digite a quantidade de pontos Turisticos: \n");
   scanf("%d",Pontos, Turisticos01);


    return 0;




}
