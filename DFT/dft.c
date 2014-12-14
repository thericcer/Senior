#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){

  int samples = 0;


  if (argc < 2){
    printf("Please enter the number of samples\n");
    return -1;
  }

  printf("%f samples and %f calculations.\n", (float)argv[1][0], (float)argv[1][0]*(float)argv[1][0]);
  return 0;
}
