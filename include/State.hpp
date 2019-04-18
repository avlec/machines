#ifndef STATE_HPP
#define STATE_HPP

#include <string>

class State {
private:
  std::string label;
  bool start_state;
  bool end_state;
public:
  State(std::string label, bool start_state, bool end_state);
};

#endif
