#ifndef MAIN_H		
#define MAIN_H

char *argstostr(int ac, char **av);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
char *_strdup(char *str);

#endif
