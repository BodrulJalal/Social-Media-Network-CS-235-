#include "Promotional.hpp" //need to include the hpp file
#include <iostream>
#include <string>
#include <regex>
using namespace std;

// project 2:

// regex url format for c++: (^(https://www.)|(http://www.))[a-zA-Z0-9]+[.][a-zA-Z0-9]{2,}

string regex_link_format = "(^(https://www.)|(http://www.))[a-zA-Z0-9]+[.][a-zA-Z0-9]{2,}"; // will use this throughout the c++ file to test if the link is formated correctly

Promotional::Promotional(const string promotional_post_title, const string promotional_post_body, const string promotional_account_username, const string promotional_link) : Post(promotional_post_title, promotional_post_body, promotional_account_username) // parameterized constructor
{
    // use the given paramters to set the title, body and user name:
    // setTitle(promotional_post_title);
    // setBody(promotional_post_body);
    // setUsername(promotional_account_username);

    // use regex to see if url is of right formant and if it is then store that into the promotional_post_link_ otherwise put "Broken Link"

    regex regexRule(regex_link_format); // sets the rule to match the format listed at the top of the file

    if (regex_match(promotional_link, regexRule)) // if the promotional_link matches to regexRule
    {
        promotional_post_link_ = promotional_link; // will set the paramter as the link for promotional_post_link_ member variable
    }
    else
    {
        promotional_post_link_ = "Broken Link"; // in the case of a non-match scenario
    }
}

string Promotional::getLink() const // simply returns the stored link
{
    // simple accessor function
    return promotional_post_link_;
}

bool Promotional::setLink(const string new_promotional_link) // will let us know if the change was succesful or not
{
    regex regexRule(regex_link_format); // sets the rule to match the format listed at the top of the file

    if (regex_match(new_promotional_link, regexRule)) // if the new_promotional_link matches with the format of the url
    {
        promotional_post_link_ = new_promotional_link; // the new url will be new_promotional_link (stored into the private member variable)
        return true;                                   // operation was succesful
    }
    else // the format does not match
    {
        promotional_post_link_ = "Broken Link"; // therefore "Broken Link" will be stored into the private data member variable: promotional_post_link_
        return false;
    }
}

void Promotional::displayPost() const //  Displays the Promotional post using the given format
{
    cout << endl;
    cout << getTitle() << " at " << getTimeStamp() << ":" << endl;
    cout << getBody() << endl;
    cout << endl;
    cout << getLink() << endl;
    cout << endl;
}