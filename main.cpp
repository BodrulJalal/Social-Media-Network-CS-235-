#include <iostream>
#include "Post.hpp"
#include "Account.hpp"
#include "General.hpp"
#include "Poll.hpp"
#include "Promotional.hpp"

using namespace std;

int main()
{

    Promotional promotional_test_case("initial title", "initial body", "initial username", "https://www.something.something");
    cout << promotional_test_case.getTitle() << endl;
    cout << promotional_test_case.getBody() << endl;
    cout << promotional_test_case.getUsername() << endl;
    cout << promotional_test_case.getLink() << endl;

    promotional_test_case.displayPost();

    promotional_test_case.setLink("https://www.something.sog");

    cout << promotional_test_case.getLink() << endl;

    /*
    General test_case("initial title", "initial body", "initial username");
    cout << test_case.getTitle() << endl;
    cout << test_case.getBody() << endl;
    cout << test_case.getUsername() << endl;

    Reactions test_reaction = ANGRY;
    if (test_case.reactToPost(test_reaction))
        cout << "it was successful" << endl;

    test_case.displayPost();

    cout << endl;
    cout << "This test is the test the getReaction function: " << endl;
    test_case.getReactions();

    return 0;
    */

    /*

     vector<string> test_options;
     test_options.push_back("choice #1");
     test_options.push_back("choice #2");
     test_options.push_back("choice #3");

     Poll poll_test_case("initial title", "initial body", "initial username", test_options);
     cout << poll_test_case.getTitle() << endl;
     cout << poll_test_case.getBody() << endl;
     cout << poll_test_case.getUsername() << endl;

     if (poll_test_case.votePoll(1))
     {
         cout << "number is within range" << endl;
     }
     else
     {
         cout << "number is not within range" << endl;
     }

     if (poll_test_case.votePoll(1))
     {
         cout << "number is within range" << endl;
     }
     else
     {
         cout << "number is not within range" << endl;
     }

     if (poll_test_case.votePoll(1))
     {
         cout << "number is within range" << endl;
     }
     else
     {
         cout << "number is not within range" << endl;
     }

     poll_test_case.displayPost();

     cout << "getPollOptions test and changepoll test (change ooption 3): " << endl;

     poll_test_case.changePollOption("new option", 2);

     poll_test_case.getPollOptions();

     cout << "getPollOptions test and changepoll test (new option): " << endl;

     poll_test_case.changePollOption("new option", 3);

     poll_test_case.getPollOptions();

     cout << "testing the getpollvotes funtcion: " << endl;

     cout << poll_test_case.getPollVotes(1) << endl;

     poll_test_case.displayPost();
     */

    return 0;
}