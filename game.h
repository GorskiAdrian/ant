#ifndef GAME_H
#define GAME_H
#include "engine.h"

class game:public engine
{
public:
    game(int r,int c):engine(r,c){}
    void graj();
    virtual void rysuj()=0;
    virtual ~game(){};
private:
    game(const game& g);
    game& operator =(const game& g);
};
#endif
