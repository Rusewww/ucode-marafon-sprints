#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength){
    if(name == NULL){
        return NULL;
    }
    t_agent *out = (t_agent*)malloc(16);
    out->name = mx_strdup(name);
    out->power = power;
    out->strength = strength;
    return out;
}
