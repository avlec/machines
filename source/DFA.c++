/*
Author: Alec Cox
Email:  avlecxk@gmail.com
 */

#include <iostream>
#include <string>
#include <vector>
#include <tuple>

#include "../include/State.hpp"
#include "../include/Transition.hpp"



class DFA {
private:
  std::vector<State> states;

  int start_state;
  std::vector<int> end_states;

  std::string alphabet;

  std::tuple<int, int, char> transitons;

  std::vector<Transition> transitions;

  std::string input;

public:

  /*
    This constructs a DFA with a single state which is the start state
    and no accept states. The language of this machine is the empty set { }
   */
  DFA();

  /*
    Creates a state machine with no input string.
    This will be added later through the = overload
   */
  DFA(std::vector<State> states, std::string alphabet, std::vector<Transition> transitions);

  /*
    Creates a DFA with an input string.
   */
  DFA(std::vector<State> states, std::string alphabet, std::vector<Transition> transitions, std::string input);



  /*
    These methods can be used to produce new DFAs
    with additional states and transitions
   */
  DFA operator +(State state);
  DFA operator +(Transition transition);

  /*
    These methods can be used to update the DFA
    with new states and transitions.
  */
  DFA& operator +=(State state);
  DFA& operator +=(Transition transition);

  /*
    This function will be used to assign a new input to the DFA
   */
  DFA& operator =(std::string input)
  {
    this->input = input;
    return *this;
  }

  /*
    This function will be used to run a step of the DFA
    on the given input string
  */
  void operator ++();

  /*
    This function will be used to run the DFA on the entirety
    of the input string.
   */
  bool operator !();

private:
  void reload_states();
  void reload_transitions();
};

DFA::DFA():
  alphabet(""), input("")
{
  ;
}
DFA::DFA(std::vector<State> states, std::string alphabet, std::vector<Transition> transitions):
  states(states), alphabet(alphabet), transitions(transitions), input("")
{
  ;
}

DFA::DFA(std::vector<State> states, std::string alphabet, std::vector<Transition> transitions, std::string input):
  states(states), alphabet(alphabet), transitions(transitions), input(input)
{
  ;
}
}

DFA DFA::operator +(State state)
{
  std::vector<State> new_states(this->states);
  new_states.push_back(state);
  DFA x(new_states, this->alphabet, this->transitions, this->input);
  return x;
}

DFA DFA::operator +(Transition transition)
{
  std::vector<Transition> new_transitions(this->transitions);
  new_transitions.push_back(transition);
  DFA x(this->states, this->alphabet, new_transitions, this->input);
  return x;
}

DFA& DFA::operator +=(State state)
{
  this->states.push_back(state);
  this->reload_states();
  return *this;
}

DFA& DFA::operator +=(Transition transition)
{
  this->transitions.push_back(transition);
  this->reload_transitions();
  return *this;
}

void DFA::operator ++()
{
  ;
}

bool DFA::operator !()
{
  return false;
}

void DFA::reload_states()
{
  ;
}

void DFA::reload_transitions()
{
  ;
}

int main()
{
  return 0;
}
