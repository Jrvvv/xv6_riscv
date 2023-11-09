#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  int retcode = 0;
  int time;

  if (argc < 0 || argc > 1) {
    fprintf(2, "Error: Number of args is %d, 1 args only is available");
    retcode = 1;
  } else {
    time = atoi(argv[1]);

    if (time) {
      sleep(time);
    } else {
      fprintf(2, "Error: arg should be a number");
      retcode = 1;
    }
  }

  exit(retcode);
}