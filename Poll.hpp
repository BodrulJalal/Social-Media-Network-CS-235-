#ifndef POLL_HPP
#define POLL_HPP

// basic header for an hpp file

#include "Post.hpp" //required to include the Post class because it will inherit its public members
#include <iostream>

using namespace std;

// project 2:
class Poll : public Post
{
public:
    Poll(const string poll_post_title, const string poll_post_body, const string poll_post_username, const vector<string> poll_post_options); // parameter constructor
    bool votePoll(const int user_poll_option);                                                                                                // taking a reference to the option number (poll option) and if within range of options (the option exist) will return if successful or not
    void changePollOption(const string new_poll_option, const int poll_option_number);                                                        // Mutator function used to either add a poll or change one of the poll options
    void getPollOptions() const;                                                                                                              // prints the reaction to the post in specific format
    int getPollVotes(const int user_selected_option);                                                                                         // Accessor function that returns the number of votes for a given option
    void displayPost() const;                                                                                                                 //  Displays the Poll post using the given format

private:
    vector<string> poll_options_;    // stores the poll options in a vector of strings
    vector<int> poll_options_votes_; // stores the votes for each poll option in a vector of int
    // keep in mind that both poll_options_ and poll_options_votes vector size should both always be the same size since the latter is keeping track of votes for each option in the former
};

#endif // POLL_HPP