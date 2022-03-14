#ifndef USERMODEL_H
#define USERMODEL_H

#include "user.hpp"

// User表的数据操作类
// 与业务无关
class UserModel
{
public:
    // User表的增加方法 对对象进行操作 而不是数据库的字段 封装性强
    bool insert(User &user);

    // 根据用户id搜索用户信息
    User query(int id);

    // 更新用户的状态信息
    bool updateState(User &user); 

    // 重置用户状态信息
    void resetState();
};

#endif