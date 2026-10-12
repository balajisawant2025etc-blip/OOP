
// Name: Balaji Sawant
// PRN: B25ET1069
// SY1 C1

#include<iostream>
using namespace std;
template< class T> // class is typename T is placeholder
T add(T m,T n)
{
    return m+n;
   
}
int sub(int m,int n)
{
    return m-n;
}
int main()
{
    cout<<"\n the add is \t";
    cout<< add<double>(5.3,6.3);
    cout<<"\n"<< add<char>('A','B');
    cout<<"\n the sub is \t";
    cout<<sub(5,4);
    return 0;
}
