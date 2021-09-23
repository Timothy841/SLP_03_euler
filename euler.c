#include <stdio.h>

int sumFibonnaci(int n);
int squareSum(int n);
int main(){
  printf("%d\n", sumFibonnaci(4000000));
  printf("%d\n", squareSum(100));
  return 0;
}

int sumFibonnaci(int n){
  int a = 1;
  int b = 1;
  int sum = 0;
  int tempsum = 0;
  while (tempsum<n){
    if (tempsum%2==0){
      sum+=tempsum;
    }
    tempsum = a+b;
    a=b;
    b=tempsum;
  }
  return sum;
}

int squareSum(int n){
  int a = (n*(n+1))/2;
  int b = n*(n+1)*(2*n+1)/6;
  return a*a-b;
}
