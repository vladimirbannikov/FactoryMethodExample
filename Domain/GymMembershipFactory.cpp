//
// Created by vladimir on 31.12.22.
//

#include "GymMembershipFactory.h"

domain::GymMembershipFactory::GymMembershipFactory(const string &userInfo) {
    _userInfo = userInfo;
}

domain::IMembership *domain::GymMembershipFactory::GetMembership() {
    return new domain::GymMembership(_userInfo);
}

