#include "Post.hpp"

#include <iostream>
using namespace std; // basic header for c++ file

// project 1:

/* MOVED TO PROJECT 2!!!
Post::Post(const string title, const string body) // parametrized constructor

{ // created a parameterized constructor that allows the constructor
  // to take in two parameters; a title and a body to be assigned
  post_title_ = title; // takes the given title in the paramets and sets the "post_title_" to that
  post_body_ = body;   // takes the given body in the parameters and sets the "post_body_" to that

  // final step is to record the time the constructor creates the post
  post_created_ = time(0); // stores the current time of the constructor in the post_created_ variable
}
*/

void Post::setTitle(const string new_title) // mutator function using a parameter for the title of the Post
{
  // simple function used to take the parameter (new_title) and stores it as the new post_title_ value
  post_title_ = new_title;
}

string Post::getTitle() const // accessor function to get the title of the Post
{
  // simnply returns the string value of the post Title (private member variable)
  return post_title_;
}

void Post::setBody(const string new_body) // mutator function using a parameter for the body of the Post
{
  // simple function used to take the parameter (new_body) and stores it as the new post_body_ value
  post_body_ = new_body;
}

string Post::getBody() const // accessor function to get the body of the Post
{
  // simnply returns the string value of the post Body (private member variable)
  return post_body_;
}

string Post::getTimeStamp() const // converts the time to string value
{
  time_t rawtime = post_created_; // uses the time the post was created
  time(&rawtime);
  return ctime(&rawtime);
  // simnply returns the time_t value of the post_created_ (private member variable) as a string
}

void Post::displayPost() const // Print the Post in a specific format
{
  cout << getTitle() << " posted at " << getTimeStamp() << endl;
  cout << getBody() << endl;
}

// project 2:

Post::Post(const string title, const string body, const string username) // added the string username to take in account username

{ // created a parameterized constructor that allows the constructor
  // to take in two parameters; a title and a body to be assigned
  post_title_ = title;       // takes the given title in the paramets and sets the "post_title_" to that
  post_body_ = body;         // takes the given body in the parameters and sets the "post_body_" to that
  acct_username_ = username; // takes the given username in the parameters and sets the "acct_username_" to that

  // final step is to record the time the constructor creates the post
  post_created_ = time(0); // stores the current time of the constructor in the post_created_ variable
}

string Post::getUsername() const // accessor function to get the username of the account that created the new post
{
  // simnply returns the string value of the post account username (private member variable)
  return acct_username_;
}

void Post::setUsername(const string new_username) // mutator function using a parameterfor the new username associated with the Post
{
  // simple function used to take the parameter (new_username) and stores it as the new acct_username_ value
  acct_username_ = new_username;
}

/*Post::Post()
{
  post_created_ = time(0); // stores the current time of the constructor in the post_created_ variable

  // blank entries for th subclasses to fill in:
  post_title_ = "";
  post_body_ = "";
  acct_username_ = "";
} */