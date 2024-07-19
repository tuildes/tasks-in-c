#include <stdio.h>
 
int main() {
 
    unsigned int K;
    int N, M;
    int X, Y;

    scanf("%d", &K);
    
    while (K != 0) {
        
        scanf("%d%d", &N, &M); // Coordenadas do centro
        for (unsigned int i = 1; i <= K; i++) {
            scanf("%d%d", &X, &Y);
            
            // Verifica qual regiao esta
            if ((X == N) || (Y == M)) {
                printf("divisa\n");
            } else {
                 if (X > N) {
                    if (Y > M) printf("NE\n");
                    else printf("SE\n");
                } else {
                    if (Y > M) printf("NO\n");
                    else printf("SO\n");
                }
            }
            
        }
        
        scanf("%d", &K);
    }
 
    return 0;
}
