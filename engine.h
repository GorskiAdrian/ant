#ifndef ENGINE_H
#define ENGINE_H

class engine
{
protected:
    bool **tab;
    int nr,nc;
    int dir;
    int ax;
    int ay;
    static const int antup=0;
    static const int antright=1;
    static const int antdown=2;
    static const int antleft=3;
    engine(int r,int c);
    virtual ~engine();
    void analiza();
private:
    engine(const engine& e);
    engine& operator=(const engine& eengine);
};
#endif
