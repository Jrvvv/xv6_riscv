#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  int time;
  int retcode = 0;

  if (argc > 2) {
    fprintf(2, "Error: Number of args is %d, 1 args only is available", argc - 1);
    exit(1);
  }
  
  if (argc <= 1) {
    fprintf(2, "Sleep usage: sleep [time]");
  } else {
    time = atoi(argv[1]);

    if (time) {
      retcode = sleep(time);
    } else {
      fprintf(2, "Error: arg should be a number");
      retcode = 1;
    }
  }

  exit(retcode);
}