//
// Created by vladimir on 31.12.22.
//

#include "IMembership.h"

domain::IMembership::IMembership() = default;

domain::IMembership::~IMembership() = default;

string domain::IMembership::GetName() {
    return "\0";
}

string domain::IMembership::GetDescription() {
    return "\0";
}

int domain::IMembership::GetPrice() {
    return 0;
}
