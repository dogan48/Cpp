#include "ogrenci.h"



ogrenci::ogrenci()
{
    //ctor
}

ogrenci::~ogrenci()
{
    //dtor
}
void ogrenci::yaz() const
{
cout<<ogrenciKodu<<" "<<ad<<" "<<soyad<<" "<<burs<<"TL"<<endl;
}
string ogrenci::personelNoGonder()
{
return ogrenciKodu;
}
void ogrenci::personelEkle(string oAd,string osAd,string oKodu,double oBurs)
{
ad=oAd;
soyad=osAd;
ogrenciKodu=oKodu;
burs=oBurs;
}
