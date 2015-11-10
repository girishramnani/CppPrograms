/*
 * =====================================================================================
 *
 *       Filename:  greeting_to_file.c
 *
 *    Description:  my program
 *
 *        Version:  1.0
 *        Created:  07/12/2015 04:23:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include<fcntl.h>


void main() {
    int fd;
    fd = open("foo",O_WRONLY | O_CREAT, 0777 );
    if (fd != -1){
    write(fd, "girish",6);
    close(fd);
          }


}

