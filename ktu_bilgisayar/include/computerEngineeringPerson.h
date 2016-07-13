#ifndef COMPUTERENGINEERINGPERSON_H
#define COMPUTERENGINEERINGPERSON_H
#include <string>
#include <iostream>


using namespace std;
class computerEngineeringPerson
{
    public:
        computerEngineeringPerson();
        virtual ~computerEngineeringPerson();
        virtual void yaz() const;
        virtual void personelEkle(string,string,string,double);
        virtual string personelNoGonder();
    protected:
    string ad,soyad;
    private:
};


#endif // COMPUTERENGİNEERİNGPERSON_H
