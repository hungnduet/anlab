#ifndef SET_H
#define SET_H
#include <iostream>

using namespace std;
class getset
{
    protected:
        int a;
        int b;
        int c;
    public:
        void set2()
        {
            cin>>a>>b;
        }

        void set3()
        {
           cin>>a>>b>>c;
        }

        void getsp()
        {
            cout<<a<<"+"<<b<<"i";
        }
};

#endif // set_H
