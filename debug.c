#include <stdio.h>
#include <stdlib.h>

int fAlone(int a){
  int j=0;
  while(j<30000000){
    j--;
  } 
  return rand();
}

int f1(int a){
  if (a == 3)
    return rand();
  else{
    int j=0;
    while(j<30000000)
      j++;
    return a;
  } 
}

int f2(int a){
  int i = f1(--a);
  if (i > 3)
    return a;
  else
    while(i<100000000)
      i++;
    return a+1;
}

int f(int a){
  int soma=0, array[3]={1,2,3}, tot=f2(a);
  for(int i = 0; i <= tot; i++)
    soma += array[i];
  return soma;
}

int main(){
  int c=3;
  c = f(c);
  printf("c = %d\n", c);
  return 0;
}