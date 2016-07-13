#include <string>
#include <iostream>
#include "yazar.h"
using namespace std;

#ifndef _KITAP_H_
#define _KITAP_H_

class kitap : public yazar{
    public:
        void kitapEkle(string Ad, double fiyat);
        double returnKitapFiyati();
        string returnKitapAdi();
        void printKitap();
        kitap();
    private:
        string kitapAdi;
        double kitapFiyati;
};

#endif
