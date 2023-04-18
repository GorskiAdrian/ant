#include "view.h"
#include <windows.h>
#include <iostream>
using namespace std;
void view::rysuj()
{
    for(int i=0;i<pr;i++)
    {
        for(int j=0;j<pc;j++)
        {
            if (i==ay&&j==ax)
            {
                cout<<"B";
            }
            else if(tab[i][j]==0)
            {
                cout<<"*";
            }
            else if(tab[i][j]==1)
                cout<<"&";
        }
        cout<<endl;
    }
    it++;
    cout <<endl<<"Iteracja: " <<it<<endl;
    Sleep(1000);
}
