// Copyright 06.04.21 DenisKabanov

#include "train.h"

Train::Train(int size) {
  srand(std::time(NULL));
  bool light;
  for (int i = 0; i < size; i++) {
    light = rand() % 2;
    addCage(light);
  }
}

void Train::addCage(bool light) {
  Cage* cage = new Cage;
  if (this->first == nullptr) {
    this->first = cage;
    this->last = cage;
    cage->prev = cage;
    cage->next = cage;
  } else {
    cage->prev = this->last;
    this->last->next = cage;
    this->last = cage;
    this->first->prev = cage;
    this->last->next = this->first;
  }
  if (light == 1) {
    cage->on();
  } else {
    cage->off();
  }
}

void Train::print() {
  Cage* printCage = this->first;
  char output = 'd';
  if (printCage->get() == 1) {
    output = 'l';
  }
  std::cout << output << std::endl;
  printCage = printCage->next;
  while ( printCage != this->first ) {
    if (printCage->get() == 1) {
      output = 'l';
    } else {
      output = 'd';
    }
    std::cout << output << std::endl;
    printCage = printCage->next;
  }
}

int Train::sizeOfTrain() {
    bool firstCageLight = this->first->get();
    int size = 1;
    Cage* currentCage = this->first;
    if (currentCage == nullptr) {
      return 0;
    }
    currentCage->on();
    while (currentCage->get() != 0) {
      for (int i = 1; i <= size; i++) {
        currentCage = currentCage->next;
        currentCage->off();
      }
      for (int i = 1; i <= size; i++) {
        currentCage = currentCage->prev;
      }
      size = size + 1;
    }
    return size-1;
}
