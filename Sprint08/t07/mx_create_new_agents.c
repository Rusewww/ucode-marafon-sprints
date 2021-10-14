#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    if(*name == NULL || power == NULL || strength == NULL){
        return NULL;
    }

    t_agent **out = (t_agent**)malloc(16 * (count + 1));

    int i = 0;
    while(i < count) {
        out[i] = mx_create_agent(name[i], power[i], strength[i]);
        i++;
    }

    out[count] = NULL;
    return out;
}
