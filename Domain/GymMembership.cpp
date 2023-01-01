//
// Created by vladimir on 31.12.22.
//

#include "GymMembership.h"

string domain::GymMembership::GetName() {
    return _name;
}

string domain::GymMembership::GetDescription() {
    return _description;
}

int domain::GymMembership::GetPrice() {
    return _price;
}

domain::GymMembership::GymMembership(const string &userInfo):_userInfo(userInfo) {
    _description += "Client: " + userInfo;
}
