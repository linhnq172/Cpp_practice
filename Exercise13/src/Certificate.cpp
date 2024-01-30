#include "Certificate.h"

void Certificate::showCertificate() {
    std::cout << "\tID: " << certificateID 
              << "\tName: " << certificateName
              << "\tRank: " << certificateRank
              << "\tDate: " << certificateDate
              << "\n";
}