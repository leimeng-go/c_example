#include "apue.h"
#include <dirent.h>

int main(int argc,char *argv[])
{
    DIR *dp;
    struct dirent *dirp;
    
    if (argc!=2)
      err_quit("usage: ls directory_name");

}