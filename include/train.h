// Copyright 06.04.21 DenisKabanov

#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

#include <iostream>
#include <ctime>

class Cage {
 private:
  bool light;

 public:
  Cage* next;
  Cage* prev;
  Cage() : light(false), next(nullptr), prev(nullptr) {}
  void on() { light = true; }
  void off() { light = false; }
  bool get() const { return light; }
};

class Train : public Cage {
 public:
  Cage* first;
  Cage* last;
  explicit Train(int size);
  void addCage(bool light);
  void print();
  int sizeOfTrain();
};

#endif  // INCLUDE_TRAIN_H_
