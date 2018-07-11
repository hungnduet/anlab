#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

char chucai;
cout << "Nhap chu cai : " << endl;
cin>>chucai;
//int num1=chucai;
cout<<"chu cai lien truoc: "<<(char)(chucai-1)<<endl;
cout<<"chu cai lien sau: "<<(char)(chucai+1)<<endl;
cout << "Ma ASCII cua " << chucai << " la " <<(int)chucai<< "." << endl;
return 0;
}
