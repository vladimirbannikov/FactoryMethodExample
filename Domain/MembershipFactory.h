#ifndef FACTORYMETHODEXAMPLE_MEMBERSHIPFACTORY_H
#define FACTORYMETHODEXAMPLE_MEMBERSHIPFACTORY_H

#include "IMembership.h"

namespace domain
{

    class MembershipFactory {
      public:
        MembershipFactory();

        virtual ~MembershipFactory();

        virtual IMembership* GetMembership();
    };

}



#endif //FACTORYMETHODEXAMPLE_MEMBERSHIPFACTORY_H
