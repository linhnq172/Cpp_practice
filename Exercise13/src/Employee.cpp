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
