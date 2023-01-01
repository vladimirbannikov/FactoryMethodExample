#ifndef FACTORYMETHODEXAMPLE_IMEMBERSHIP_H
#define FACTORYMETHODEXAMPLE_IMEMBERSHIP_H
#include <string>

using namespace std;

namespace domain
{

    class IMembership
    {
      public:
        IMembership();

        virtual ~IMembership();

        virtual string GetName();

        virtual string GetDescription();

        virtual int GetPrice();

    };

}

#endif
