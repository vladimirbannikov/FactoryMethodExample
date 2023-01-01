#include "ProMembership.h"

using domain::ProMembership;

string ProMembership::GetName() {
    return _name;
}

string ProMembership::GetDescription() {
    return _description;
}

int ProMembership::GetPrice() {
    return _price;
}

domain::ProMembership::ProMembership(const string &userInfo):
_userInfo(userInfo){
    _trainerInfo = LookForTrainers();
    _description += "Client: " + userInfo + "\nTrainer: " + _trainerInfo;
}

string domain::ProMembership::LookForTrainers() {
    return "Trainer 1";
};