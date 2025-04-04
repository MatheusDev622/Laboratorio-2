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
          getchar();
          switch (escolha)
          {
          case 'N':
          case 'n':
               printf("você recebeu a senha normal N%d\n",senha);
               senhas_normais[n] = senha;
               n_senhas[senha_total] = senhas_normais[n];
               n++;
               senha++;
               senha_total++;
               break;

          case 'P':
          case 'p':
               printf("você recebeu a senha prioriadade P%d\n",senha);
               senhas_prioridade[p] = senha;
               n_senhas[senha_total] = senhas_prioridade[p];
               p++;
               senha++;
               senha_total++;
               break;

          case 'C':
          case 'c': 
               if(cn<n &&(cp>=p||cn<=cp)){
                 printf("\nChamando senha normal número N%d\n",senhas_normais[cn]);
                 cn++;
               }else if(cp<p){
                 printf("\nChamando senha prioridade número P%d\n",senhas_prioridade[cp]);
                 cp++;   
               }else{
                puts("\nNenhuma senha disponivel");
               }
               break;

          case 'V':
          case 'v':
               puts("Senhas não chamadas:\n");
               puts("Senhas normais:");
               for(int i = cn;i<n;i++){
                printf("N%d ",senhas_normais[i]);
               }
               puts("\nsenhas prioridades:");
               for(int j = cp;j<p;j++){
                printf("P%d ",senhas_prioridade[j]);
               }
               printf("\n");
               break;

          case 'S':
          case 's':
               puts("Encerrando o programa");
               char escolha2;//fiz porque deu vontade
               puts("Deseja ver todas as senhas que foram chamadas?(Digite S/N): ");
               escolha2 = getchar();
               getchar();
               if(escolha2 == 'S'){
                  printf("Senhas utilizadas no programa:\n");
                  for(int f = 0;f<p+n;f++){
                      printf("%d ",n_senhas[f]);
                  }
                  puts("Fim do programa!");
               }else if (escolha2 == 'N'){
                  puts("Fim do programa!");
               }else{
                puts("Resposta inválida");
               }
               return 0;  
          default:
               printf("Digito inválido, tente novamente!\n");
               break;
          }
     }

}