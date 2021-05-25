#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() 
{
  srand(time(0));
  int count = 0, num, tentativas, novo, vez, continuar = 1, down;

  while(continuar)
  {
    int aleatorio = rand() % 1024;
    printf("\n\n\n---------------- ADIVINHAR NUMERO ---------------------\n\n\n");
    printf("\nIntroduza um numero de tentativas: ");
    scanf("%d", &tentativas);
    int countdown = tentativas;
    while(count < tentativas) 
    {
      vez = count + 1;
      if(countdown == 1)
      {
        printf("Ultima tentativa\n");
      }
      else
      {
        printf("Restam %d tentativas\n", countdown);
      }
      
      printf("Adivinhar numero: ");
      scanf("%d", &num);

      if(num == aleatorio)
      { 
        printf("\n\n\n*****************************************\n");
        printf("* Voce ganhou (*__*) (-__-)                  \n");
        printf("* Numero gerado: %d                     \n", aleatorio);
        printf("* Numero digitado %d                    \n", num);
        printf("* Tentativas para achar o numero: %d    \n", tentativas);
        printf("* Achada na tentativa nº: %d\n          \n", vez);
        printf("*****************************************\n\n");
        count = tentativas;
      }

      if(num > aleatorio)
      {
        printf("Numero digitado e maior\n\n");
      }

      if(num < aleatorio)
      {
        printf("Numero digitado e menor\n\n\n");
      }
      countdown--;
      count++;
    }
    
    // Verifica se o numero gerado e igual ao aleatorio no fim da iteracao
    if(num != aleatorio)
      {
        printf("*****************************************\n");
        printf("* Voce perdeu (-__-) (-__-)                  \n");
        printf("* Numero gerado: %d                     \n", aleatorio);
        printf("* Tentativas para achar o numero: %d    \n", tentativas);
        printf("* Tentativas perdidas: %d\n          \n", tentativas);
        printf("*****************************************\n\n");
      }   
    
      printf("Deseja comecar um novo jogo? \n1 - Sim \n0 - Nao\n");
      scanf("%d", &continuar);
      if(continuar == 1)
      {
        count = 0; //Recomeca a contagem para um novo programa
      }
    }
      printf("Jogo terminado\n");
  return 0;
}