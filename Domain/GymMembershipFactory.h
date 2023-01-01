#ifndef FACTORYMETHODEXAMPLE_GYMMEMBERSHIPFACTORY_H
#define FACTORYMETHODEXAMPLE_GYMMEMBERSHIPFACTORY_H

#include "MembershipFactory.h"
#include "GymMembership.h"

namespace domain
{

    class GymMembershipFactory:public MembershipFactory
    {
        string _userInfo;

      public:
        explicit GymMembershipFactory(const string& userInfo);
        IMembership* GetMembership() override;
    };

}


#endif //FACTORYMETHODEXAMPLE_GYMMEMBERSHIPFACTORY_H
