#ifndef GROUPUSER_H
#define GROUPUSER_H

#include "user.hpp"
// 匹配groupuser表的orm类
// groupuser成员的读写操作包括user表成员的读写操作，直接继承
class GroupUser : public User
{
public:
    void setRole(string role) { this->role = role; }
    string getRole() {return this->role;}

private:
    string role;
};

#endif