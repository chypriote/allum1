#ifndef __GET_NEXT_LINE_H__
#define __GET_NEXT_LINE_H__

int     my_strlen(char *s);
char    *my_strcpy(char *dest, char *src);
int     my_cat_buf_to_line(char *line, char *buf, char *save);
char    *get_next_line(const int fd);

#define BUF_LEN         (2)
#define LINE_LEN        (1024)

#endif  /*__GET_NEXT_LINE_H__*/
