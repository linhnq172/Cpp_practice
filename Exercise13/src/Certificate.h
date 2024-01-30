#ifndef _CERTIFICATE_H_
#define _CERTIFICATE_H_
#include <iostream>

class Certificate
{
public:
    Certificate(int id, std::string name, char rank, std::string date)
    {
        certificateID = id;
        certificateName = name;
        certificateRank = rank;
        certificateDate = date;
    }

    int getID() const
    {
        return certificateID;
    }

    const std::string& getName() const
    {
        return certificateName;
    }

    char getRank() const
    {
        return certificateRank;
    }

    const std::string& getDate() const
    {
        return certificateDate;
    }

private:
    int certificateID;
    std::string certificateName;
    char certificateRank;
    std::string certificateDate;
};

#endif /* _CERTIFICATE_H_ */