#ifndef GROUP_H
#define GROUP_H

#include <string>
#include <vector>
#include "groupuser.hpp"
using namespace std;
// 匹配allgroup的ORM类
class Group
{
public:
    Group(int id = -1, string name = "", string desc = "")
    {
        this->id = id;
        this->name = name;
        this->desc = desc;
    }

    // 读操作
    int getId() { return this->id = id; }
    string getName() { return this->name = name; }
    string getDesc() { return this->desc = desc; }
    vector<GroupUser> &getUsers() {return this->users;}

    // 写操作
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setDesc(string password) { this->desc = desc; }
    

private:
    int id;
    string name;
    string desc;
    vector<GroupUser> users;
};

#endif