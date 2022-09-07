#pragma once

#include <string>

class User
{
private:
    const unsigned int m_id;
    std::string m_name;

public:
    User();
    User(const unsigned int m_id, const std::string& m_name);

    void SetName(std::string& name);
    std::string GetName();

    unsigned int GetId();

};