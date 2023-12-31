#pragma once

#include <string>

class User
{
private:
    const unsigned int m_id;
    std::string m_name;

public:
    User();
    User(const unsigned int id, const std::string& name);

    void SetName(std::string& name);
    std::string GetName() const;

    unsigned int GetId() const;

};