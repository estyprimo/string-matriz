#include<stdio.h> // imprimir apenas letras maiusculas
#include<ctype.h> // isupper
#include<string.h>
int main(){
    int n, i;
    scanf("%d", &n);
    char pal[n];

scanf("%s", pal);

    for(i = 0; i<strlen(pal); i++){//strlen checa o tamanho da palavra
        if(isupper(pal[i])){
            printf("%c", pal[i]);
    }
    }
    
    return 0;
}
