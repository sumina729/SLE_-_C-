#include <stdio.h>

int main() {
    int hour, minute;
    int time;
     
    scanf("%d %d", &hour, &minute);
    scanf("%d", &time);

    minute+=time;

    while(minute>=60){
        minute=(minute-60);
        hour+=1;
    }
    
    if(hour>23){
        hour-=24;
    }

    printf("%d %d", hour, minute);

    return 0;
}