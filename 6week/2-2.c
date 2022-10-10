#include <stdio.h>

//ACM 호텔 //자꾸 틀려요...
int main() {
    int T;
    int H, W, N;

    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d %d %d", &H, &W, &N);
        if(N%H==0){
          printf("%d%02d", H, N/H);
        }
        else
        {
          printf("%d%02d", N%H, N/H+1);
        }
      printf("\n");
    }
    return 0;
}
