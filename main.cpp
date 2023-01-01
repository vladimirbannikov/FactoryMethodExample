#include <iostream>
#include <cctype>
#include "Domain/domain.h"

class Driver{
   static domain::MembershipFactory* GetFactory(char choice, const string& userInfo){
       switch (char(std::tolower(choice))) {
           case 'g':
               return new domain::GymMembershipFactory(userInfo);
           case 'l':
               return new domain::GymAndPoolMembershipFactory(userInfo);
           case 'p':
               return new domain::ProMembershipFactory(userInfo);
           default:
               return nullptr;
       }
   }

  public:
    static void run(){
        std::cout << "Welcome to fitness club program!" << std::endl;
        std::cout << "Enter your client information" << std::endl;
        string userInfo;
        std::getline(cin, userInfo);
        std::cout << '\n';
        std::cout << "> Enter the type of membership" << std::endl;
        std::cout
        << "    G - Gym membership\n"
        << "    L - Gym and pool membership\n"
        << "    P - Pro membership\n"
        << std::endl;

        char choice;
        std::cin >> choice;

        domain::MembershipFactory* factory = GetFactory(choice, userInfo);

        if(factory != nullptr){
            std::cout << factory->GetMembership()->GetDescription();
        } else std::cout << "Null\n";

    }


};


int main() {
    Driver::run();
    return 0;
}
