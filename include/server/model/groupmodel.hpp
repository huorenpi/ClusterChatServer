#ifndef GROUPMODEL_H
#define GROUPMODEL_H

#define CREATOR  "creator"
#define NORMAL  "normal"

#include "group.hpp"
class GroupModel
{
public:
    // 创建群组
    bool createGroup(Group &group);
    // 加入群组
    void addGroup(int userid, int groupid, string role);
    // 查询用户所在群组信息
    vector<Group> queryGroups(int userid);
    // 根据指定的groupid查询群组用户id列表，除了userid自己，主要用户群聊业务给群组其他成员群发消息
    vector<int> queryGroupUsers(int userid, int groupid); // 返回群内用户ID
};

#endif