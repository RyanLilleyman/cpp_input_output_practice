#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

int main(){
  /*When formatting a scanf snippet, remember the general expression is 
   scanf('format_specifier',value) 
   and for print it is printf('format_specifier',value) */

  int pi;
  long big_number;
  char a;
  float big;
  double big_big;

  scanf("%d %ld %c %f %lf",&pi, &big_number, &a, &big, &big_big);
  printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n",pi, big_number, a, big, big_big);

  return 0;
}

