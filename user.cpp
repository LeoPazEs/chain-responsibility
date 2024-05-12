#include <string>
#include "user.hpp"

User::User(const std::string &username, const std::string &password)
{
    setUsername(username);
    setPassword(password);
}

std::string User::getUsername() const
{
    return username;
}

std::string User::getPassword() const
{
    return password;
}

void User::setUsername(const std::string &newUsername)
{
    username = newUsername;
}

void User::setPassword(const std::string &newPassword)
{
    password = newPassword;
}