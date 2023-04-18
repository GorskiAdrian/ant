#ifndef VIEW_H
#define VIEW_H

#include "game.h"

class view : public game
{
public:
    int it=0;
    int pr,pc;
    view(int r,int c):game(r,c),pr(r),pc(c)
    {
    }
    virtual ~view(){};
    virtual void rysuj();

private:
    view(const view& v);
    view& operator =(const view& v);
};

#endif
