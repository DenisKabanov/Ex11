// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(Test1, test1) {
  Train train1(5);
  EXPECT_EQ(5, train1.sizeOfTrain());
}

TEST(Test2, test2) {
  Train train2(5);
  train2.addCage(1);
  EXPECT_EQ(6, train2.sizeOfTrain());
}

TEST(Test3, test3) {
  Train train3(0);
  train3.addCage(0);
  EXPECT_EQ(1, train3.sizeOfTrain());
}

TEST(Test4, test4) {
  Train train4(5);
  for (int i = 0; i < 5; i++) {
    train4.addCage(0);
  }
  EXPECT_EQ(10, train4.sizeOfTrain());
}

