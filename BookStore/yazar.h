#include <string>
using namespace std;
#ifndef _YAZAR_H_
#define _YAZAR_H_

class yazar{
    public:
        void yazarEkle(string ad, string soyad);
        string returnKitapYazari();
        void printYazar();
        yazar();

    protected:
        string yazarAdi;
        string yazarSoyadi;
};



#endif
