#include "Poll.hpp" //need to include the hpp file
#include <iostream>
using namespace std;

// project 2:

Poll::Poll(const string poll_post_title, const string poll_post_body, const string poll_post_username, const vector<string> poll_post_options) : Post(poll_post_title, poll_post_body, poll_post_username) // parameter constructor
{
    // simply puts the given parameters into the post member variables
    // BUT because these are private member variables, we must use use the mutator functions to modify these private member variables
    // setTitle(poll_post_title);
    // setBody(poll_post_body);
    // setUsername(poll_post_username);

    for (int i = 0; i < poll_post_options.size(); i++)
    {
        // loop through the vector to store the options into the poll options
        poll_options_.push_back(poll_post_options[i]);
        // also at the same time we will be able to create an initial value (0) for each option
        // to make sure that the amount of vectors in vote and options stay the same and consistent with each other
        poll_options_votes_.push_back(0);
    }
}

bool Poll::votePoll(const int user_poll_option) // taking a reference to the option number (poll option) and if within range of options (the option exist) will return if successful or not
{
    if (user_poll_option >= 0 && user_poll_option < poll_options_.size())
    {
        poll_options_votes_[user_poll_option] += 1; // increments the vote count of the user chosen option
        return true;                                // succesfully incremented the poll votes
    }
    else // a possible situation where the user enters an option that is not acceptable
        return false;
}

void Poll::changePollOption(const string new_poll_option, const int poll_option_number) // Mutator function used to either add a poll or change one of the poll options
{

    if (poll_option_number > poll_options_.size() - 1) // the chosen option number to change is out of scope of the already existing options
    {
        poll_options_.push_back(new_poll_option); // adds the new option
        poll_options_votes_.push_back(0);         // adds a respective vote count (default 0)
    }

    else if (poll_option_number >= 0 && poll_option_number < poll_options_.size()) // if the poll_option_number is greater than or equal to 0 AND less than the size of the vector, then it is in scope and has to be replaced
    {
        poll_options_[poll_option_number] = new_poll_option; // the poll option at the vector location of the option the user wants to change will take on the value of the new_poll_option which was parameter given by user
        poll_options_votes_[poll_option_number] = 0;         // new option so the vote count resets
    }
}

void Poll::getPollOptions() const // prints the reaction to the post in specific format
{
    // again same plan as General.cpp display but instead this time I will use a for loop to iterate through the options
    for (int i = 0; i < poll_options_.size(); i++)
    {
        cout << poll_options_votes_[i] << " votes for: " << poll_options_[i] << endl; // uses the ith position in each vector to print out data and since each vector is consistently the same size
    }
}

int Poll::getPollVotes(const int user_selected_option) // Accessor function that returns the number of votes for a given option
{
    // simple accessor function that uses user_selected_option to get the number of votes in that position
    return poll_options_votes_[user_selected_option];
}

void Poll::displayPost() const //  Displays the Poll post using the given format
{
    cout << endl;
    cout << getTitle() << " at " << getTimeStamp() << ":" << endl;
    cout << getBody() << endl;
    cout << endl;
    getPollOptions();
    cout << endl;
}