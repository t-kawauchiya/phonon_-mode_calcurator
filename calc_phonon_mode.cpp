#include "phonon_mode_calculator.h"
#include <fstream>
#include <iostream>
#include <string>

int main()
{
  const char *file_name = "input.txt";
  Phonon_mode_calculator pmc = Phonon_mode_calculator(file_name);
  pmc.calculate();
  // pmc.dump();
  return 0;
}
