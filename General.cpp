#include "General.hpp" //need to include the hpp file
#include <iostream>
using namespace std;

// project 2:

General::General(const string post_title, const string post_body, const string post_username) : Post(post_title, post_body, post_username)
// parameter constructor taking in a title, body and username
{
    // simply puts the given parameters into the post member variables
    // BUT because these are private member variables, we must use use the mutator functions to modify these private member variables
    // setTitle(post_title);
    // setBody(post_body);
    // setUsername(post_username);

    for (int i = 0; i < 6; i++) // initializing the reactions
    {
        reactions_record_[i] = 0; // iterates through the array to set each reaction value to 0;
    }
}

bool General::reactToPost(const Reactions user_reaction) // A reference to reaction using a value type of "Reactions"
{
    // the way I want to takle this is to lay out all the possible scenarios ( 6 reactions possible) and have the appropiate
    // reaction to its respected situation... return true and add to its respected array value
    // i will do this by using a for loop and  comparing to see if it matches the inetger value of the enumurated list of reactions
    // where the first reacion is 0

    // if that fails then I will know that it is an unsuccessful reaction, meaning none of the 6 possible reactions were selected
    // and I will choose to return a value of false to indicate such

    for (int i = 0; i < 6; i++) // itterate through the possible number of reactions
    {
        if (user_reaction == i)
        {
            reactions_record_[i] += 1; // will take the "i"th reaction and go to that position in the array and add a reaction to it
            return true;               // this will mean that it was successful, which it will be if it matches the reaction
        }
    }
    // this will mean that it looped through all possible reactions and couldn't find any matching reactions so it was not done succesfully
    return false;
}

void General::getReactions() const // Prints the reaction to the post in this format (example): Like : 2 | Dislike : 0 | Laugh : 4 | Wow : 2 | Sad : 1 |  Angry : 5
{
    // my strategy to tackle this is to simply put a cout statement and just replace the numbers with the array value

    cout << "Like : " << reactions_record_[0] << " | Dislike : " << reactions_record_[1] << " | Laugh : " << reactions_record_[2] << " | Wow : " << reactions_record_[3] << " | Sad : " << reactions_record_[4] << " |  Angry : " << reactions_record_[5] << endl;

    // this will in theory print out in the right format by accessing each number in the array
}

void General::displayPost() const //  Displays the General post using the given format
{
    cout << endl;
    cout << getTitle() << " at " << getTimeStamp() << ":" << endl;
    cout << getBody() << endl;
    cout << endl;
    getReactions();
    cout << endl;
}