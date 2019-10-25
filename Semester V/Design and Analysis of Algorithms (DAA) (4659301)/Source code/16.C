/*
Program : 16
Solve Scale Balancing problem.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define NumMax 100

void ScaleBalancing(char * strArr[], int L0, int L1) { 
int flag = -100;
char num[] = "0123456789";
int i, j;
int scale[2] = {0};
int cond[NumMax] = {0};
int count = 0;
int mul = 1;
int condNum = 0;
int I = 0;

  for (i = 0; i < L0; i++) {
      for (j = 0; j < 10; j++) {
          if (strArr[0][L0-i-1] == num[j]) {
              scale[count] += j * mul;
              mul *= 10;
              flag = i;
              break;
          }
      }
      if (j == 10 && flag == i - 1) {
          count++;
          mul = 1;
      }
  }

  flag = -100;
  mul = 1;
  for (i = 0; i < L1; i++) {
      for (j = 0; j < 10; j++) {
          if (strArr[1][L1-i-1] == num[j]) {
              cond[condNum] += j * mul;
              mul *= 10;
              flag = i;
              break;
          }
      }
      if (j == 10 && flag == i - 1) {
          condNum++;
          mul = 1;
      }
  }


  for (i = 0; i < condNum; i++) {
      if (scale[0] + cond[i] == scale[1] || scale[1] + cond[i] == scale[0]) {
          I = 1;
          break;
      }
  }

  if (I == 0) {
      for (i = 0; i < condNum - 1; i++) {
          for (j = i + 1; j < condNum; j++) {
              if (scale[0] + cond[i] + cond[j] == scale[1] || scale[1] + cond[i] + cond[j] == scale[0] || scale[0] + cond[i] == scale[1] + cond[j] || scale[1] + cond[i] == scale[0] + cond[j]) {
                  I = 2;
                  break;
              }
          }
          if (I == 2) break;
      }
  }

  if (I == 1) printf("%d", cond[i]);
  else if (I == 2) printf("%d,%d", cond[j], cond[i]);
  else printf("not possible");

}

int main() { 

  // keep this function call here
  /* Note: In C you first have to initialize an array and set 
     it equal to the stdin to test your code with arrays. */

  char * A[] = gets(stdin);
  ScaleBalancing(A, strlen(A[0]), strlen(A[1]));
  return 0;
}
