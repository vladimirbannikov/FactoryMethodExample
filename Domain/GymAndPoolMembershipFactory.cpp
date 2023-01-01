#include "GymAndPoolMembershipFactory.h"

domain::GymAndPoolMembershipFactory::GymAndPoolMembershipFactory(const string &userInfo) {
    _userInfo = userInfo;
}

domain::IMembership* domain::GymAndPoolMembershipFactory::GetMembership() {
    return new domain::GymAndPoolMembership(_userInfo);
}
