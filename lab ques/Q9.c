#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
  int n, sum = 0;
  float mean, k=0, variance;
  printf("Enter array size: ");
  scanf("%d", &n);
  int *arr = (int*)calloc(n, sizeof(int));
  printf("Enter elements: ");
  for (int i = 0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i<n; i++){
    sum += arr[i];
  }
  mean = sum/n;
  for (int i = 0; i<n; i++){
    k += pow(arr[i] - mean, 2);
  }
  variance = k/n;
  float SD = sqrt(variance);
  printf("Standard Deviation is : %.2f", SD);
}
