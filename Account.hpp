#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

// required heading for a hpp file
#include <iostream>
#include "Post.hpp"
#include <vector>
#include <string>
using namespace std;

class Account
{
public:
    // project 1:
    Account();                                                               // Default constructor using empty values for private members
    Account(const string input_username, const string input_password);       // Parameter constructor that takes in an input from user for a username and a password and sets the vector to be empty
    void setUsername(const string new_username);                             // takes in parameter to be the new username for the account
    string getUsername() const;                                              // accessor function used to return the current username
    void setPassword(const string new_password);                             // mutator function that uses the given parameter to change the value of the password for the account
    string getPassword() const;                                              // accessor function used to return the current password
    bool addPost(const string parameter_title, const string parameter_body); // generates a Post with the given title and body and adds it to it's vector of posts and returns bool if the Post does not have an empty title or body and the Post is successfully added to the vector
    void viewPosts() const;                                                  // prints the list (vector) of posts added to the account
private:
    // project 1:
    //  these are the given and required private member variables
    string account_username_;    // username for the account class
    string account_password_;    // user password for the account class
    vector<Post> account_posts_; // stores and keeps track of the posts that are submitted by the account
};

#endif // ACCOUNT_HPP