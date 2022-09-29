#include <stdio.h>

int main() {
    int num[5];
    int sum=0;
    int finish_num;


    for(int i=0; i<5; i++){
        scanf("%d", &num[i]);
        sum+=num[i]*num[i];
    }

    finish_num=sum%10;

    printf("%d", finish_num);
    
    return 0;
}
