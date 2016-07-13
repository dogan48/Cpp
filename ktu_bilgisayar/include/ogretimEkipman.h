#ifndef OGRETIMEKIPMAN_H
#define OGRETIMEKIPMAN_H
#include "malzeme.h"
#include <string>

using namespace std;

class ogretimEkipman:public malzeme
{
    public:
        ogretimEkipman();
        virtual ~ogretimEkipman();
        void malzemeYaz() const;
        void malzemeEkle(string,string,string);
        string malzemeNoGonder();

    protected:
string demirbasKodu;
    private:
};

#endif // OGRETİMEKİPMAN_H
