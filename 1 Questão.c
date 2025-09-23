#include <stdio.h>
int main(){
    int n, i, s=0, t;
    printf("Digite a quantidade de termos");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Digite o termo");
        scanf("%d",&t);
        s=s+t;
    }
    printf("A soma dos %d primeiros termos e %d",n,s);
    return 0;
}
