#include "ogretimEkipman.h"
#include <iostream>

using namespace std;
ogretimEkipman::ogretimEkipman()
{
    //ctor
}

ogretimEkipman::~ogretimEkipman()
{
    //dtor
}
void ogretimEkipman::malzemeYaz() const
{
cout<<demirbasKodu<<" "<<malzemeAdi<<" "<<malzemeTuru<<endl;
}
void ogretimEkipman::malzemeEkle(string a,string b,string c)
{
malzemeAdi=a;
malzemeTuru=b;
demirbasKodu=c;
}
string ogretimEkipman::malzemeNoGonder()
{
return demirbasKodu;
}
