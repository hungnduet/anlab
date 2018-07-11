#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

char kiemtra;
cout << "Ban nhap du lieu : " << endl;
cin>>kiemtra;
if(((kiemtra>='A')&&(kiemtra<='Z'))||((kiemtra>='a')&&(kiemtra<='z')))
cout << "Du lieu ban vua nhap '" << kiemtra << "' la mot ky tu." << endl;
else if((kiemtra>='0')&&(kiemtra<='9'))
cout << "Du lieu ban vua nhap '" << kiemtra << "' la mot ky so." << endl;
else
cout << "Du lieu ban vua nhap '" << kiemtra << "' la mot bieu tuong." << endl;
return 0;
}
