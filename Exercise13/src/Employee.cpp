#include "Employee.h"

int Employee::employeeCount = 0;

void Employee::showInfo()
{
    std::cout << "ID: " << ID 
              << "\tFull Name: " << fullName
              << "\tBirthday: " << birthday
              << "\tPhone: " << phone
              << "\tEmail: " << email
              << "\n";
    std::cout << "Certificate list:\n";
    for (auto certificate : certificates) {
        certificate.showCertificate();
    }
}

void Employee::modifyInfo()
{
    std::cout << "Employee edit\n";
    std::string temp;
    std::cout << "Enter fullname: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) fullName = temp;
    std::cout << "Enter birthday: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) birthday = temp;
    std::cout << "Enter phone number: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) phone = temp;
    std::cout << "Enter email: ";
    std::getline(std::cin, temp);
    if (!temp.empty()) email = temp;
}
