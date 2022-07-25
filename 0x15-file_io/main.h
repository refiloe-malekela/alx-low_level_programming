#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/select.h>
#include <aio.h>
#include <sys/types.h>
#include <sys/stat.h>

/*Functions*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
