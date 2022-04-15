#include <iostream>
#include <fstream>
#include "../library/input.h"
#include "../library/proses.h"
#include "../library/output.h"

int main() {

  Input input;
  input.cetak();
  input.toFile();
  Proses proses;
  proses.getData();
  proses.proses();
  proses.toFile();
  output out;
  out.getData();
  out.Out();
  return 0;
} 