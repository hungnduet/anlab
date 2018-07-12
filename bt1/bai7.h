#ifndef BAI7_H
#define BAI7_H
class bai7:public getset
{
    public:
         bai7 &operator ++();
         bai7 &operator --();
};
 bai7 &bai7:: operator ++()
    {
        bai7 sp;
        ++a;
        ++b;
        return sp;
    }
#endif // BAI7_H
