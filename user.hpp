#include <string>
#ifndef USER_H
#define USER_H
class User
{
public:
    User(const std::string &username, const std::string &password);
    std::string getUsername() const;
    std::string getPassword() const;
    void setUsername(const std::string &newUsername);
    void setPassword(const std::string &newPassword);

private:
    std::string username;
    std::string password;
};
#endif // USER_H
