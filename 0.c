#include<stdio.h>

int main(){
    int lin, col, i, j;

    scanf("%d %d", &lin, &col);

    int m[lin][col];
    int rep[lin][col];

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &m[i][j]);
        }
        }
    int x;
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(m[i][j] == 0){
                for(x = 0; x < lin; x++){
                    rep[x][j] = 0;
                }
                for(x = 0; x < col; x++){
                    rep[i][x] = 0;
                }
            } else if(rep[i][j] != 0){
                rep[i][j] = m[i][j];
                
            }
        }
    }
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d", rep[i][j]);
            if(j != col-1) printf(" ");
        }

        printf("\n");
    }


return 0;
}
