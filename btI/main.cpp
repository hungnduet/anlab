#include <iostream>

using namespace std;

class sp{
    private:
        double a;
        double b;
    public:
//        void nhapsp()
//        {
//        cout<<"nhap phan thuc a: ";
//        cin>>a;
//        cout<<"nhap phan ao b: ";
//        cin>>b;
//        }
//        void xuatsp()
//        {
//            cout<<"so phuc vua nhap: "<<a<<"+"<<b<<"i"<<endl;
//        }
         friend istream& operator >>(istream &is,sp &sp)
          {
              cout<<"nhap phan thuc a: ";
              is>>sp.a;
              cout<<"nhap phan ao b: ";
              is>>sp.b;
              return is;
          }
         friend ostream& operator <<(ostream &os,sp &sp)
          {
              os<<"so phuc vua nhap: "<<sp.a<<"+"<<sp.b<<"i"<<endl;
              return os;
          }

    friend sp operator +(sp sp1,sp sp2)
    {
        sp sum;
        sum.a = sp1.a + sp2.a;
        sum.b = sp1.b + sp2.b;
        return sum;
    }
    friend sp operator -(sp sp1, sp sp2)
    {
        sp sub;
        sub.a = sp1.a - sp2.a;
        sub.b = sp1.b - sp2.b;
        return sub;
    }
    sp operator ++()
    {
        sp s;
        ++a;
        ++b;
        return s;
    }
    sp operator --()
    {
        sp s;
        --a;
        --b;
        return s;
    }
};
int main()
{
    sp sum,sub,sp1,sp2;
    cout<<"nhap so phuc 1:"<<endl;
    cin>>sp1;//sp1.nhapsp();
    cout<<sp1;//sp1.xuatsp();
    cout<<"nhap so phuc 2:"<<endl;
    cin>>sp2;//sp2.nhapsp();
    cout<<sp2;//sp2.xuatsp();
    cout<<"tong 2 so phuc:";
    sum=sp1 + sp2;
    cout<<sum;//sum.xuatsp();
    cout<<"hieu 2 so phuc:";
    sub=sp1 - sp2;
    cout<<sub;//sub.xuatsp();
    sp s;
    cout<<"\nnhap so phuc \n";
    cin>>s;//s.nhapsp();
    cout<<"\nso phuc sau khi tang la: ";
    ++s;
    cout<<s;//s.xuatsp();
    cin>>s;// s.nhapsp();
    cout<<"\n so phuc sau khi giam la: ";
    --s;
    cout<<s;//s.xuatsp();
    return 0;
}
