//#include <iostream>

//using namespace std;

//int main()
//{
//     int arr[5];
//     int *p=arr;
//     cout<<"Nhap 5 so:";
//     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
//     cout<<"Cac so ban vua nhap la:\n";
//     for(int i=0;i<5;i++) cout<<*(p+i)<<endl;


//    return 0;
//}




//#include<iostream>
//using namespace std;

//int *findMax(int data[],int n)
//  {
//  int *max=data;
//  int i;
//  for(i=1;i<n;i++)
//  {
//    if(*max<*(max+i)) *max= *(max+i);
//  }
//  return max;
//}

//int main(){
//   int n,i,*p;
//  cout<<"Nhap so du lieu: ";
//  cin>>n;
//  int*q=new int[n];
//  for(i=0;i<n;i++)
//    {
//        cout<<"Nhap gia tri thu "<<i+1<<" la :";
//        cin>>q[i];
//    }
//  p=findMax(q,n);
//  cout<<"Gia tri lon nhat la: "<<*p;
//  return 0;
//  delete[] q;
//}

