#include <iostream>
#include <vector>
#include <string>

struct Position_vector
{
public:
  double r;
  double theta;
  double z;
  Position_vector(double r, double theta, double z)
      : r(r), theta(theta), z(z)
  {
  }
};
struct Phonon_mode
{
public:
  Position_vector displacement;
  double wave_number;
  double angular_frequency;
  Phonon_mode(Position_vector displacement, double wn, double af)
      : displacement(displacement), wave_number(wn), angular_frequency(af)
  {
  }
};
struct Material
{
public:
  double elastic_const11;
  double elastic_const33;
  // double piezoelectric_const15;
  // double piezoelectric_const31;
  // double piezoelectric_const33;
  Material() {}
  Material(double ec11, double ec33)
      : elastic_const11(ec11), elastic_const33(ec33)
  {
  }
};
class Phonon_mode_calculator
{
private:
  Material material;
  std::vector<Phonon_mode> dilatational_mode;
  std::vector<Phonon_mode> torsional_mode;

public:
  Phonon_mode_calculator(const char *filename);
  void calculate();
  void dump();
};
