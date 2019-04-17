/*
Author: Alec Cox
Email:  avlecxk@gmail.com
 */

#include <iostream>
#include <string>
#include <vector>
#include <utility>


/*
  This class defines the a unit of processing in a DFA.
 */
class State {
 public:
};


/*
  This class defines a transition from a state to a state.
 */
class Transition {
private:
  State from;
  State to;
  char transition;

public:
  Transition(State from, State to);

private:
  Transition();
};

class DFA {
private:
  std::vector<State> verticies;
  std::vector<Transition> edges;

public:

  /*
    This constructs a DFA with a single state, that is the start and end state.
    This DFA has no transitions, and it accepts any symbol for its input.
   */
  DFA();

  DFA(std::vector<State> states, std::string alphabet, std::vector<Transition> transitions, State start_state, std::vector<State> end_states);

  /* This function will be used to assign a new input to the DFA
   */
  DFA& operator =(std::string input);

  /* This function will be used to simulate a step of the DFA
     on the given input string */
  void operator ++();
};

int main()
{
  return 0;
}
