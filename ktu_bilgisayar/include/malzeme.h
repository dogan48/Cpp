#ifndef MALZEME_H
#define MALZEME_H
#include <string>

using namespace std;

class malzeme
{
    public:
        malzeme();
        virtual ~malzeme();
        virtual void malzemeYaz() const;
        virtual void malzemeEkle(string,string,string);
        virtual string malzemeNoGonder();
    protected:
    string malzemeAdi,malzemeTuru;
    private:
};

#endif // MALZEME_H
