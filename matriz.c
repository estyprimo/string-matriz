#include<stdio.h>

int main(){

int i, j, lin, col, soma = 0;

scanf("%d %d", &lin, &col);
int m[lin][col];

    for(i = 0; i<lin; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &m[i][j]);
                if(i == j){
                   soma += soma + m[i][j]; 
                }
        }
         }

    printf("%d", soma);
    
    return 0;
}
