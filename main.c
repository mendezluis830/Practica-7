#include <stdio.h>
#include <stdlib.h>
#include "Clist.h"

int main(){
    clist *l;
    l= create_clist();
   delete_clist(l);
    return 0;
}
