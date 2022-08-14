#include "phonon_mode_calculator.h"
#include <fstream>
#include <iostream>
#include <string>

Phonon_mode_calculator::Phonon_mode_calculator(const char *filename)
{
  std::ifstream ifs(filename);
  std::string strEc11;
  std::string strEc33;
  std::getline(ifs, strEc11);
  std::getline(ifs, strEc33);
  double a = std::stod(strEc11);
  double b = std::stod(strEc33);
  this->material = Material(a, b);
};

void Phonon_mode_calculator::calculate()
{
  std::cout << "calculated!!" << std::endl;
}
