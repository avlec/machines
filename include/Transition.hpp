#ifndef TRANSITION_HPP
#define TRANSITION_HPP

#include "../include/State.hpp"

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

#endif
