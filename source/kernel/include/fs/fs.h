#ifndef __FILE_H__
#define __FILE_H__

#include <sys/stat.h>

int sys_open(const char *name, int flags, ...);
int sys_read(int file, char *ptr, int len);
int sys_write(int file, char *ptr, int len);
int sys_lseek(int file, int ptr, int dir);
int sys_close(int file);

int sys_isatty(int file);
int sys_fstat(int file, struct stat *st);

#endif // FILE_H

