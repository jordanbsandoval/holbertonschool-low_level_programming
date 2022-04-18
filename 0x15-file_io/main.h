#ifndef FILESYSTEM
#define FILESYSTEM

#include <stdio.h>

/*for open*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*for close*/
#include <unistd.h>
#include <stdlib.h>

#define MAXSIZE 1024

/*prototipos*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(const char *);

#endif /*FILESYSTEM*/
