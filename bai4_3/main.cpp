#include <iostream>

using namespace std;
int fibo(int i)
{
    if(i==0)
    {
        return 0;
    }
    if (i==1)
    {
        return 1;
    }
    if(i>=2){
    return (fibo(i-1)+fibo(i-2));
    }
}

int main()
{
    int x;
    cout << "nhap so: " << endl;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cout<<fibo(i);
        cout<<"\t";
    }
    //cout<<fibo(x);
    return 0;
}
