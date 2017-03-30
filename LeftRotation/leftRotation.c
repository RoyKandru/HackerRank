#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n,d;
  printf("Enter the size and left rotation value\n");
  scanf("%d %d",&n,&d);
  int a[n];

  for(int i=0;i<n;i++){
    printf("a[%d] ",i);
    scanf("%d",&a[(i+n-d)%n]);
  }
  for(int j=0;j<n;j++){
    printf("%d ",a[j]); 
  } 
  printf("\n");
  return 0;
}

