#ifndef FACTORYMETHODEXAMPLE_GYMANDPOOLMEMBERSHIPFACTORY_H
#define FACTORYMETHODEXAMPLE_GYMANDPOOLMEMBERSHIPFACTORY_H

#include "MembershipFactory.h"
#include "GymAndPoolMembership.h"

namespace domain {

    class GymAndPoolMembershipFactory: public MembershipFactory
    {
        string _userInfo;

    public:
        explicit GymAndPoolMembershipFactory(const string& userInfo);
        IMembership* GetMembership() override;
    };

}

#endif //FACTORYMETHODEXAMPLE_GYMANDPOOLMEMBERSHIPFACTORY_H
