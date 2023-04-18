#include "game.h"
using namespace std;

void game::graj()
{
    rysuj();
    for(int i=0;i<1000;i++)
    {
        analiza();
        rysuj();
    }
   // rysuj();
}
