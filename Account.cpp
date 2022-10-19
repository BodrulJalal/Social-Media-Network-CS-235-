#include "Account.hpp"

#include <iostream>
using namespace std; // basic header for c++ file

// project 1:

Account::Account() // Default constructor using empty values for private members
{
    account_username_ = "";
    account_password_ = ""; // default constructor sets the username and password to be an empty string
}

Account::Account(const string input_username, const string input_password) // Parameter constructor that takes in an input from user for a username and a password and sets the vector to be empty
{
    account_username_ = input_username;
    account_password_ = input_password; // constructor which takes in paramter and sets the username and password as such
}

void Account::setUsername(const string new_username) // takes in parameter to be the new username for the account
{
    account_username_ = new_username; // changes the username to the user inputed new username
}

string Account::getUsername() const // accessor function used to return the current username
{
    return account_username_; // getter function to get the current value of the username
}

void Account::setPassword(const string new_password) // mutator function that uses the given parameter to change the value of the password for the account
{
    account_password_ = new_password; // mutator function to change the value of the password to the user submitted password
}

string Account::getPassword() const // accessor function used to return the current password
{
    return account_password_; // getter fucntion to get the current value of the account's password
}

/* EDITTED UNDER PROJECT 2
bool Account::addPost(const string parameter_title, const string parameter_body) // generates a Post with the given title and body and adds it to it's vector of posts and returns bool if the Post does not have an empty title or body and the Post is successfully added to the vector
{
    // first step is to count the size of the vector currently to compare in the end to see if the post was
    //  successfully added to the vector
    int vecSize = account_posts_.size();

    int finalValue = account_posts_.size() + 1; // we can later compare to see if the vector was properly added

    // next step is to create a post so that we can later add this to the vector and check if values are empty
    Post temp_case_post(parameter_title, parameter_body); // creates the post using the given parameters by the user

    // now to see if the body or the title is empty

    // have to use the get functions to get the values of the title and the body since they are private member variables
    string body = temp_case_post.getBody();   // used to get the value of the body
    string title = temp_case_post.getTitle(); // used to get the value of the title

    if (body.empty() || title.empty())
        return false; // will return false if any value is empty whether its the body or the title
    else
        account_posts_.push_back(temp_case_post); // add the Post to the account vector

    if (account_posts_.size() == finalValue) // if the new size of the vector is original size + 1 then it worked succesfully
        return true;
    else
        return false; // worst case where everything was created but wasn't successfully added to the account_posts_ vector
}
*/

void Account::viewPosts() const // prints the list (vector) of posts added to the account
{
    for (int x = 0; x < account_posts_.size(); x++) // for loop to get every post in the vector
    {
        account_posts_[x].displayPost(); // using the displaypost fucntion, you take the post at x vlaue and print it out
    }
}

// project 2:
bool Account::addPost(const string parameter_title, const string parameter_body) // generates a Post with the given title and body and adds it to it's vector of posts and returns bool if the Post does not have an empty title or body and the Post is successfully added to the vector
{
    // first step is to count the size of the vector currently to compare in the end to see if the post was
    //  successfully added to the vector
    int vecSize = account_posts_.size();

    int finalValue = account_posts_.size() + 1; // we can later compare to see if the vector was properly added

    // next step is to create a post so that we can later add this to the vector and check if values are empty
    Post temp_case_post(parameter_title, parameter_body, getUsername()); // creates the post using the given parameters by the user
    // project 2 requires a username in the parameterized constructor so the get username() function was added to record the username from the account

    // now to see if the body or the title is empty

    // have to use the get functions to get the values of the title and the body since they are private member variables
    string body = temp_case_post.getBody();   // used to get the value of the body
    string title = temp_case_post.getTitle(); // used to get the value of the title

    if (body.empty() || title.empty())
        return false; // will return false if any value is empty whether its the body or the title
    else
        account_posts_.push_back(temp_case_post); // add the Post to the account vector

    if (account_posts_.size() == finalValue) // if the new size of the vector is original size + 1 then it worked succesfully
        return true;
    else
        return false; // worst case where everything was created but wasn't successfully added to the account_posts_ vector
}