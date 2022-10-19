#ifndef GENERAL_HPP
#define GENERAL_HPP

// basic header for an hpp file

#include "Post.hpp" //required to include the Post class because it will inherit its public members
#include <iostream>
using namespace std;

// project 2:

enum Reactions
{
    LIKE,
    DISLIKE,
    LAUGH,
    WOW,
    SAD,
    ANGRY
}; // creates the list of reactions given to us

class General : public Post // inherits the Post public members
{
public:
    General(const string post_title, const string post_body, const string post_username); // parameter constructor taking in a title, body and username
    // mutator function to add a reaction
    bool reactToPost(const Reactions user_reaction); // A reference to reaction using a value type of "Reactions"
    void getReactions() const;                       // Prints the reaction to the post in this format (example): //Like : 2 | Dislike : 0 | Laugh : 4 | Wow : 2 | Sad : 1 |  Angry : 5
    void displayPost() const;                        //  Displays the General post using the given format
private:
    int reactions_record_[6]; // initializes an array of size 6 to allow to keep track of reactions (6 of them)
};

#endif // GENERAL_HPP