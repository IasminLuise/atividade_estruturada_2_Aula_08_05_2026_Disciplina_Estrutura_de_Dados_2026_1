//Questão 02 - Atividade Estruturada 2. 

#include <stdio.h> 

#define MAX 50 


void inserirSemRepetir(int v[], int valor, int *pos, int max);  

void listar(int v[], int quantidade);  

void removerPeloIndice(int v[], int *quantidade, int indice); 

int contem(int v[], int quantidade, int valor);  

void intercalarListas(int a[], int qa, int b[], int qb, int c[], int *qc, int max);  

void intersecaoListas(int a[], int qa, int b[], int qb, int inter[], int *qinter, int max);  

void uniaoListas(int a[], int qa, int b[], int qb, int uni[], int *quni, int max); 

int main(void) {  

int lista1[MAX], lista2[MAX]; int q1 = 0, q2 = 0; 

int intercalada[2 * MAX]; 
int qIntercalada = 0; 
 
int intersecao[MAX]; 
int qIntersecao = 0; 
 
int uniao[2 * MAX]; 
int qUniao = 0; 
 
int valor; 

 
printf("== Criar LISTA 1 (ate %d valores, 0 nao permitido, negativo encerra) ==\n", MAX); 
while (q1 < MAX) { 
 
  printf("Digite um inteiro para a Lista 1: "); 

 
   if (scanf("%d", &valor) != 1) return 0; 
 
   if (valor < 0) break; 
 
   if (valor == 0) { 
       printf("ERRO: 0 nao e permitido (inteiros nao nulos).\n"); 
       continue; 
   } 
 
   inserirSemRepetir(lista1, valor, &q1, MAX); 
} 

 
printf("\n== Criar LISTA 2 (ate %d valores, 0 nao permitido, negativo encerra) ==\n", MAX); 
 
while (q2 < MAX) { 
   printf("Digite um inteiro para a Lista 2: "); 
   if (scanf("%d", &valor) != 1) return 0; 
 
   if (valor < 0) break; 
 
   if (valor == 0) { 
       printf("ERRO: 0 nao e permitido (inteiros nao nulos).\n"); 
       continue; 
   } 
 
   inserirSemRepetir(lista2, valor, &q2, MAX); 
} 
 
 
printf("\n--- LISTA 1 ---\n"); 
listar(lista1, q1); 
 
printf("\n--- LISTA 2 ---\n"); 
listar(lista2, q2); 

 
intercalarListas(lista1, q1, lista2, q2, intercalada, &qIntercalada, 2 * MAX); 
 
printf("\n--- LISTA INTERCALADA (item c) ---\n"); 
listar(intercalada, qIntercalada); 

 
intersecaoListas(lista1, q1, lista2, q2, intersecao, &qIntersecao, MAX); 
 
printf("\n--- INTERSECAO (item d) ---\n"); 
listar(intersecao, qIntersecao); 

 
uniaoListas(lista1, q1, lista2, q2, uniao, &qUniao, 2 * MAX); 
 
printf("\n--- UNIAO (item f) ---\n"); 
listar(uniao, qUniao); 

 
if (qUniao > 0) { 
   int indice; 
   printf("\nDigite o indice para remover na UNIAO (0 a %d): ", qUniao - 1); 
   if (scanf("%d", &indice) != 1) return 0; 
 
   if (indice < 0 || indice >= qUniao) { 
       printf("ERRO: indice invalido.\n"); 
   } else { 
       removerPeloIndice(uniao, &qUniao, indice); 
       printf("\n--- UNIAO apos remocao (item g) ---\n"); 
       listar(uniao, qUniao); 
   } 
} else { 
   printf("\nUNIAO vazia: nao ha o que remover.\n"); 
} 
 
return 0; 
 

} 

 

int contem(int v[], int quantidade, int valor) {  

for (int i = 0; i < quantidade; i++) {  

if (v[i] == valor) return 1;  

} return 0;  

} 

void inserirSemRepetir(int v[], int valor, int *pos, int max) {  

if (*pos >= max) {  

printf("ERRO: lista cheia (limite %d).\n", max);  

return;  

} 

if (contem(v, *pos, valor)) { 

 
  printf("ERRO: valor %d repetido, nao inserido.\n", valor); 

  return; 
 

} 
 
v[*pos] = valor; 
(*pos)++; 

} 

 void listar(int v[], int quantidade) {  

if (quantidade == 0) {  

printf("(lista vazia)\n");  

return;  

} 

for (int i = 0; i < quantidade; i++) { 
   printf("%d", v[i]); 
   if (i < quantidade - 1) printf(" "); 
} 
printf("\n"); 
 

} 

 

void intercalarListas(int a[], int qa, int b[], int qb, int c[], int *qc, int max) {  

*qc = 0;  

int i = 0; 

while ((i < qa || i < qb) && *qc < max) { 
   if (i < qa) c[(*qc)++] = a[i]; 
   if (i < qb && *qc < max) c[(*qc)++] = b[i]; 
   i++; 
} 
 
if (i < qa || i < qb) { 
   printf("ERRO: faltou espaco para intercalar tudo (max=%d).\n", max); 
} 
 

} 

void intersecaoListas(int a[], int qa, int b[], int qb, int inter[], int *qinter, int max) {  

*qinter = 0; 

for (int i = 0; i < qa; i++) { 
   if (contem(b, qb, a[i])) { 
       // evita repeticao na intersecao 
       if (!contem(inter, *qinter, a[i])) { 
           if (*qinter < max) { 
               inter[(*qinter)++] = a[i]; 
           } else { 
               printf("ERRO: intersecao excedeu o tamanho maximo (%d).\n", max); 
               return; 
           } 
       } 
   } 
} 
 

} 

 

void uniaoListas(int a[], int qa, int b[], int qb, int uni[], int *quni, int max) {  

*quni = 0; 

 
for (int i = 0; i < qa; i++) { 
   if (*quni >= max) { 
       printf("ERRO: uniao excedeu o tamanho maximo (%d).\n", max); 
       return; 
   } 
   uni[(*quni)++] = a[i]; 
} 
 
 
for (int i = 0; i < qb; i++) { 
   if (!contem(uni, *quni, b[i])) { 
       if (*quni >= max) { 
           printf("ERRO: uniao excedeu o tamanho maximo (%d).\n", max); 
           return; 
       } 
      uni[(*quni)++] = b[i]; 
   } 
} 
 

} 

void removerPeloIndice(int v[], int *quantidade, int indice) {  

for (int i = indice; i < *quantidade - 1; i++) {  

v[i] = v[i + 1];  

} (*quantidade)--; } 
