#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
