#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    /*int z,a[89],s,f=1;
    cout<<"enter the number you need to find the factorial of ";
    cin>>s;
    for(z=1;z<=s;z++)
    {f=f*z;
    }
    cout<<"the factorial of the number is"<<f;
    return(0);*/
/*int i,milk,crl,r;
char name[20];
cout<<"enter your name";
cin>>name;
cout<<"hi!\t"<<name;
cout<<"enter the milk you have (in mililitres)";
cin>>milk;
cout<<"enter the cereal you have (in grams)";
cin>>crl;
r= milk/crl;


if(r==2&& milk>=200&& crl>=100)
cout<<"you can have"<<milk+crl<<"units of nyeh today";
else 
cout<<"no nyeh today";
return(0);    
*/char name[20];
cout<<"enter your name";
cin>>name;
if(strcmpi(name,"agastya")==0)
cout<<"you can use this device";
else
exit;
return(0);
}
