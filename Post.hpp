#ifndef POST_HPP
#define POST_HPP
#include <time.h> //required for a private member
#include <vector>
#include <iostream>
#include <string>
#include <regex>
using namespace std;

// required heading for a hpp file

class Post
{
public:
    // project 1:
    // taken the commented function to project 2
    // Post(const string title, const string body); // parameterized constructor
    void setTitle(const string new_title); // mutator function using a parameter for the title of the Post
    string getTitle() const;               // accessor function to get the title of the Post
    void setBody(const string new_body);   // mutator function using a parameter for the body of the Post
    string getBody() const;                // accessor function to get the body of the Post
    string getTimeStamp() const;           // converts the time to string value
    void displayPost() const;              // Print the Post in a specific format

    // project 2:
    Post(const string title, const string body, const string username); // added the string username to take in account username
    // because of this added parameter, under account.cpp, must change the code for bool addPost()
    //  to allow for the test case post to include the third parameter (the const string username)
    string getUsername() const;                  // accessor function to get the username of the account that created the new post
    void setUsername(const string new_username); // mutator function using a parameterfor the new username associated with the Post
    // Post();                                      // a default constructor to help with the subclasses?

private: // private member variables
    // project 1:
    string post_title_;   // title for the post
    string post_body_;    // body text of the post
    time_t post_created_; // recorded time for the creation of a post using a time_t object
    // project 2:
    string acct_username_; // this will be used to store the username of the account that creates a new post
};

#endif // POST_HPP