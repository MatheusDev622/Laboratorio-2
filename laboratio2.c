#include <stdio.h>
#define MAX 1000    
int n_senhas[MAX];
int senhas_normais[MAX];
int senhas_prioridade[MAX];
int senha_total = 0 ;
int main(){
     char escolha;
     int n = 0, p = 0;
     int senha = 1;
     int cp = 0,cn = 0;
     puts("Digite N para inserir senha normal\nP para inserir senha prioridade\nC para consumir a senha\nS para saiar do programa \nV para visualizar as senhas disponiveis");
     while (senha_total != 1000){
          escolha = getchar();
          switch (escolha)
          {
          case 'N':
          case 'n':
               printf("você recebeu a senha normal n N%d\n",senha);
               senhas_normais[n] = senha;
               n_senhas[senha_total] = senhas_normais[n];
               n++;
               senha++;
               senha_total++;
               
               break;
          case 'P':
          case 'p':
               printf("você recebeu a senha prioriadade n P%d\n",senha);
               senhas_prioridade[p] = senha;
               n_senhas[senha_total] = senhas_prioridade[p];
               p++;
               senha++;
               senha_total++;
               break;
          case 'C':
          case 'c':
               cp++;
               cn++; 
               if(senhas_normais[cn] == ){
                 printf("Chamando senha normal número ");
               }
               
               break;
          case 'V':
          case 'v':
               printf("Senhas não chamadas %d\n");
               break;
          case 'S':
          case 's':
               puts("Encerrando o programa");
               break;     
          default:
               printf("Digito inválido, tente novamente!\n");
               break;
          }
     }
     
}