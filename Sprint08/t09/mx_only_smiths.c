#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    if (agents == NULL) {
        return NULL;
    }
    t_agent **tmp = agents;
    int size = 0;
    int chek = 0;
    while (*tmp) {
        if(mx_strcmp((*tmp) -> name, "Smith") == 0 && (*tmp) -> strength >= strength) {
            size++;
        }
        chek++;
        tmp++;
    }
    if (size == 0) {
        return NULL;
    }
    t_agent **out = (t_agent**)malloc(16 * (size + 1));
    for (int i = 0; i < size; i++) {
        out[i] = (t_agent *) malloc(16);
    }
    int i = 0;
    out[size] = NULL;
    while (*agents) {
        if(mx_strcmp((*agents) -> name, "Smith") == 0 && (*agents) -> strength >= strength) {
            out[i]->name = mx_strdup((*agents)->name);
            out[i]->power = (*agents)->power;
            out[i]->strength = (*agents)->strength;
            i++;
        }
        agents++;
    }
    mx_exterminate_agents(&tmp);
    mx_exterminate_agents(&agents);

    return out;
}