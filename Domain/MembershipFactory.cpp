//
// Created by vladimir on 31.12.22.
//

#include "MembershipFactory.h"

domain::MembershipFactory::MembershipFactory() = default;

domain::MembershipFactory::~MembershipFactory() = default;

domain::IMembership *domain::MembershipFactory::GetMembership() {return nullptr;}
