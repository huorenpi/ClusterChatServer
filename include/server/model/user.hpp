#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

// 匹配User表的ORM类
class User
{
public:
    User(int id = -1, string name = "", string pwd = "", string state = "offline")
    {
        this->id = id;
        this->name = name;
        this->password = password;
        this->state = state;
    }

    // 读操作
    int getId() { return this->id = id; }
    string getName() { return this->name = name; }
    string getPassword() { return this->password = password; }
    string getState() { return this->state = state; }
    
    // 写操作
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setPassword(string password) { this->password = password; }
    void setState(string state) { this->state = state; }

    

protected:
    int id;
    string name;
    string password;
    string state;
};

#endif