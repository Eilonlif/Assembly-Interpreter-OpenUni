#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "settings.h"

char *ltrim(char *s);

char *rtrim(char *s);

char *trim(char *s);

void get_first_n_fields(char line[], int n, char** field_array);

void clear_white_space(char line[], char tmp_line[]);

int is_whole_number(char tmp_line[]);
