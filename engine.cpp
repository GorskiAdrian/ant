#include "engine.h"
using namespace std;

engine::~engine()
{
    if (tab)
    {
        for (int i = 0; i < nr; i++)
        {
            delete[] tab[i];
        }
        delete tab;
    }
}
engine::engine(int r, int c) :nr(r), nc(c)
{
    tab = new bool* [nr];
    for (int i = 0; i < r; i++)
    {
        tab[i] = new bool[nc];
    }
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            tab[i][j] = 0;
        }
    }

    ax = nc / 2 - 1;
    ay = nr / 2 - 1;
    dir = antleft;
}
void engine::analiza()
{
    bool check = false;

        if (dir == 0)
        {
            if (tab[ay][ax] == 1)
            {
                dir = antright;
                tab[ay][ax] = 0;
                ax++;
            }
            else if (tab[ay][ax] == 0)
            {
                dir = antleft;
                tab[ay][ax] = 1;
                ax--;
            }
        }
        else if (dir == 1)
        {
            if (tab[ay][ax] == 1)
            {
                dir = antdown;
                tab[ay][ax] = 0;
                ay++;
            }
            else if (tab[ay][ax] == 0)
            {
                dir = antup;
                tab[ay][ax] = 1;
                ay--;
            }
        }
        else if (dir == 2)
        {
            if (tab[ay][ax] == 1)
            {
                dir = antleft;
                tab[ay][ax] = 0;
                ax--;
            }
            else if (tab[ay][ax] == 0)
            {
                dir = antright;
                tab[ay][ax] = 1;
                ax++;
            }
        }
        else if (dir == 3)
        {
            if (tab[ay][ax] == 1)
            {
                dir = antup;
                tab[ay][ax] = 0;
                ay--;
            }
            else if (tab[ay][ax] == 0)
            {
                dir = antdown;
                tab[ay][ax] = 1;
                ay++;
            }
        }


        if (ax < 0)
        {
            ax = nr - 1;
        }
        else if (ax > nr - 1)
        {
            ax = 0;
        }
        if (ay < 0)
        {
            ay = nc - 1;
        }
        else if (ay > nc - 1)
        {
            ay = 0;
        }

}
