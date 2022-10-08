#include <stdio.h>

//별 찍기 - 17
int main() {
    int size;
    int s_b, m_b;

    scanf("%d", &size);
    s_b=size-1;
    m_b=1;

    for(int i=0; i<s_b; i++){
        printf(" ");
    }
    printf("*");
    printf("\n");
    s_b--;

    for(int i=0; i<size-2; i++){
        for(int i=0; i<s_b; i++){
            printf(" ");
        }
        printf("*");
        for(int i=0; i<m_b; i++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        s_b--;
        m_b+=2;
    }

    for(int i=0; i<2*size-1; i++){
        if(size>1){
            printf("*");
        }
        
    }
    printf("\n");


    return 0;
}
