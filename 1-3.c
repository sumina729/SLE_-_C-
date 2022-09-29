#include <stdio.h>

int main() {
  int size; //사이즈
  int B, S; //공백, 별, 

  scanf("%d", &size);

  B=(size-1)*2;
  S=1;

  //1
  for(int i=0; i<size-1; i++){
    for(int j=0; j<S; j++){
      printf("*");
    }
    for(int j=0; j<B; j++){
      printf(" ");
    }
    for(int j=0; j<S; j++){
      printf("*");
    }
    printf("\n");
    B-=2;
    S++;
  }

  //2
  for(int i=0; i<size*2; i++){
    printf("*");
  }
  printf("\n");
  B+=2;
  S--;

  //3
  for(int i=0; i<size-1; i++){
    for(int j=0; j<S; j++){
      printf("*");
    }
    for(int j=0; j<B; j++){
      printf(" ");
    }
    for(int j=0; j<S; j++){
      printf("*");
    }
    printf("\n");
    B+=2;
    S--;
  }

	return 0;
}