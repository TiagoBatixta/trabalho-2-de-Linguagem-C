#include <stdio.h>
#include <string.h>

typedef struct {
    char loc[513];
    float lat;
    float lon;
}Geo;

void printg(Geo g){
    printf("{%s, %.3f, %.3f}\n", g.loc, g.lat, g.lon);
}  

void setLoc(char *loc, Geo *g){
    strcpy(g->loc, loc);
}  

int main(void) {
    
    Geo p = {"CPS", -23.52908, -46.63179};
    printg(p);
    setLoc("Fatec-SP", &p);
    printg(p);
   
   return 0;
}