#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct address{
  int id;
  int set;
  char name[MAX_DATA]; //creates a maximum 512 element array here
  char email[MAX_DATA];
};

struct database{
  struct address_rows[MAX_ROWS]; //the database carries a maximum of 100 rows
};

struct connection{
  FILE *file;
  struct database *db;
};

void die(const char *message)
{
  if errno(){
      perror(message);
    } else{
    printf("ERROR: %s\n", message);
  }

  exit(1);
}
