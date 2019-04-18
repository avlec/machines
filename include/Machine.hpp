#include <string>
#include <vector>

#include "../include/State.hpp"
#include "../include/Transition.hpp"


class Machine {

private:

  std::vector<State> states;

  std::vector<Transition> transitions;


public:


  // MACHINE DEFINITION FUNCTIONS

  Machine operator +(State new_state);
  Machine operator +(Transition new_transition);
  Machine operator +(Machine machine);
  Machine& operator +=(State new_state);
  Machine& operator +=(Transition new_transition);


  // INPUT SPECIFICATION

  Machine operator +(std::string input_appendment);
  Machine& operator =(std::string input);
  Machine& operator +=(std::string input_appendment);

  // MACHINE EXECUTION FUNCTIONS

  /*
    This operator advances the machine forward by one execution step.
   */
  void operator ++();

  /*
    This operator starts the machine, terminating when the machine terminates.
   */
  bool operator !();

  // MACHINE STATE VIEWING FUNCTIONS
};
