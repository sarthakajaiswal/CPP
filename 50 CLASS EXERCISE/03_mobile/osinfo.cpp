#include <iostream>
#include <string>
#include "osinfo.hpp"

OsInfo::OsInfo(std::string os, std::string version) : 
    m_os(os), 
    m_version(version) {

    }

std::ostream& operator<<(std::ostream& os, const OsInfo& obj) {
    os << obj.m_os << " "
        << obj.m_version;

    return os; 
}