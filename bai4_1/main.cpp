#include <iostream>

using namespace std;

int main()
{
    int a,b,x,y;
    cout << "Nhap 2 chu so tuong ung a,b: " << endl;
    cin>>a>>b;
    if(a>=8||b>=8) cout<<"ko phai so bat phan";
    else
    {

        int arr[6];
        for(int i=0;i<3;++i)
        {
            arr[i]=a%2;
            a=a/2;
        }


        for(int i=3;i<6;++i)
        {
            arr[i]=b%2;
            b=b/2;
        }
        cout<<"so bat phan sau khi chuyen thanh nhi phan: "<<endl;
        for(int i=2;i>=0;i--)
        {
            cout<<arr[i];
        }
        for(int i=5;i>=3;i--)
        {
            cout<<arr[i];
        }
    }
    cout<<endl;
    return 0;
}
