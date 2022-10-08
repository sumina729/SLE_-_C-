#include <stdio.h>

//ACM 호텔 //자꾸 틀려요...
int main() {
    int T;
    int H, W, N;
    int finish_num;

    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d %d %d", &H, &W, &N);
        printf("%d0%d", N%H, N/H+1);
    }
    return 0;
}
