
#include <stdio.h>
int main(){
    int n, i, s=0, media, m;
    printf("Digite a quantidade de termos");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Digite o termo");
        scanf("%d",&m);
        s=s+m;
    }
    for (i=1;i<=n;i++){
        media=s/n;
    } 
    printf("A soma dos %d primeiros termos e %d",n,s);
    printf("A media dos %d primeiros termos e %d",n,media);
    return 0;
}