#ifndef FACTORYMETHODEXAMPLE_PROMEMBERSHIPFACTORY_H
#define FACTORYMETHODEXAMPLE_PROMEMBERSHIPFACTORY_H

#include "MembershipFactory.h"
#include "ProMembership.h"

namespace domain
{

    class ProMembershipFactory:public MembershipFactory
    {
        string _userInfo;

    public:
        explicit ProMembershipFactory(const string& userInfo);
        IMembership* GetMembership() override;
    };

}

#endif
