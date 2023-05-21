#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc != 2){
    printf("ERROR: You need one argument")
      //This is how to abort a program
      return 1;
  }

  int i = 0;
  for(i = 0; argv[1][i] != '0'; i++){
    char letter = argv[1][i];

    switch (letter) {
    case 'a':
    case 'A':
      printf("%d: 'A'\n", i);
      break;
    }
  }
}
