#include <stdio.h>


#define LOW  0
#define UPPER 300
#define  STEP 20
#define C 5.0/9.0
int main() {
  
  for (int i = LOW; i < UPPER; i +=20) {
    printf("%d \t %f\n", i, (C) * (i - 30));
  }
}