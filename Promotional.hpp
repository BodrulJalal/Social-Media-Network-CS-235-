#ifndef PROMOTIONAL_HPP
#define PROMOTIONAL_HPP

// basic header for an hpp file

#include "Post.hpp" //required to include the Post class because it will inherit its public members
#include <iostream>

using namespace std;

// project 2:
class Promotional : public Post
{
public:
    Promotional(const string promotional_post_title, const string promotional_post_body, const string promotional_account_username, const string promotional_link); // parameterized constructor
    string getLink() const;                                                                                                                                         // simply returns the stored link
    bool setLink(const string new_promotional_link);                                                                                                                // will let us know if the change was succesful or not
    void displayPost() const;                                                                                                                                       //  Displays the Promotional post using the given format
private:
    string promotional_post_link_; // string that represents a url
};
#endif // PROMOTIONAL_HPP