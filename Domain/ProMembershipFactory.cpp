//
// Created by vladimir on 31.12.22.
//

#include "ProMembershipFactory.h"

domain::ProMembershipFactory::ProMembershipFactory(const string &userInfo) {
    _userInfo = userInfo;
}

domain::IMembership* domain::ProMembershipFactory::GetMembership() {
    return new domain::ProMembership(_userInfo);
}
