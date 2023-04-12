#include "cudd/cudd.h"
#include "cudd/cuddInt.h"

int main()
{
    DdManager *manager = Cudd_Init(6, 0, CUDD_UNIQUE_SLOTS, CUDD_CACHE_SLOTS, 0);

    DdNode* bdd = Cudd_bddOr(manager, Cudd_bddAnd(manager, Cudd_bddIthVar(manager, 0), Cudd_bddIthVar(manager, 1)), Cudd_bddAnd(manager, Cudd_bddIthVar(manager, 2), Cudd_bddIthVar(manager, 3)));

    Cudd_Quit(manager);
}