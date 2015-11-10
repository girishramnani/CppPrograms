/*
 * =====================================================================================
 *
 *       Filename:  file_acces.c
 *
 *    Description:  my program
 *
 *        Version:  1.0
 *        Created:  07/12/2015 04:36:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<fcntl.h>
#define BSIZE 16384
void main(){

    int fin, fout;
    char buf[BSIZE];
    int count;

    if ((fd=open("foo",O_CREAT , 0660)) <0){

        perror("cannot open the file");


    }
    else {
        fout=open("foot2",O_CREAT, 0666);
        while((buf = fout


    }



}

