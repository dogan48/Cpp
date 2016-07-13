#include "labEkipman.h"
#include <iostream>

using namespace std;

labEkipman::labEkipman()
{
    //ctor
}

labEkipman::~labEkipman()
{
    //dtor
}
void labEkipman::malzemeYaz() const
{
cout<<demirbasKodu<<" "<<malzemeAdi<<" "<<malzemeTuru<<endl;
}

void labEkipman::malzemeEkle(string a,string b,string c)
{
malzemeAdi=a;
malzemeTuru=b;
demirbasKodu=c;

}
string labEkipman::malzemeNoGonder()
{
return demirbasKodu;
}
