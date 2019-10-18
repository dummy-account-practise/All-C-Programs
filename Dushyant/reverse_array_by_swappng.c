#include <stdio.h>
 
int main() {
  int n, c, t, end;
  printf("enter the size of array\n");
  scanf("%d", &n);
  int array[n];
  end = n - 1;
  printf("enter the all elements of array\n");
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
 
  for (c = 0; c < n/2; c++) {
    t          = array[c];
    array[c]   = array[end];
    array[end] = t;
 
    end--;
  }
 
  printf("Reversed array elements are:\n");
 
  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
