#include "GymAndPoolMembership.h"

using domain::GymAndPoolMembership;

string GymAndPoolMembership::GetName() {
    return _name;
}

string GymAndPoolMembership::GetDescription() {
    return _description;
}

int GymAndPoolMembership::GetPrice() {
    return _price;
}

domain::GymAndPoolMembership::GymAndPoolMembership(const string &userInfo) {
    _description += "Client: " + userInfo;
}
