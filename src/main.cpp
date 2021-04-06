// Copyright 06.04.21 DenisKabanov

#include "train.h"

int main() {
  srand(std::time(NULL));
  //    Train train(rand() % 100);
  Train train(5);
  train.addCage(1);
  train.print();
  std::cout << train.sizeOfTrain() << "\n" << std::endl;
  train.print();
  return 0;
}
