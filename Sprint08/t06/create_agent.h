#ifndef IZOZULIA_CREATE_AGENT_H
#define IZOZULIA_CREATE_AGENT_H

#include <stdio.h>
#include <stdlib.h>
#include "agent.h"

t_agent *mx_create_agent(char *name, int power, int strength);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

#endif
