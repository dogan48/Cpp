#ifndef LABEKIPMAN_H
#define LABEKIPMAN_H
#include "malzeme.h"
#include <string>

using namespace std;

class labEkipman:public malzeme
{
    public:
        labEkipman();
        virtual ~labEkipman();
        void malzemeYaz() const;
        void malzemeEkle(string,string,string);
        string malzemeNoGonder();
    protected:
    string demirbasKodu;
    private:
};

#endif // LABEKİPMAN_H
