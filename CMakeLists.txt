cmake_minimum_required(VERSION 3.24)
project(FactoryMethodExample)

set(CMAKE_CXX_STANDARD 17)

add_executable(FactoryMethodExample main.cpp Domain/IMembership.cpp Domain/IMembership.h Domain/GymMembership.cpp Domain/GymMembership.h Domain/GymAndPoolMembership.cpp Domain/GymAndPoolMembership.h Domain/ProMembership.cpp Domain/ProMembership.h Domain/MembershipFactory.cpp Domain/MembershipFactory.h Domain/domain.h Domain/GymMembershipFactory.cpp Domain/GymMembershipFactory.h Domain/GymAndPoolMembershipFactory.cpp Domain/GymAndPoolMembershipFactory.h Domain/ProMembershipFactory.cpp Domain/ProMembershipFactory.h)
