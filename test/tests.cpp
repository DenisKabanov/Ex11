// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(Test, test1) {
  Train train1(5);
  EXPECT_EQ(5, train1.sizeOfTrain());
}

TEST(Test, test2) {
  Train train2(5);
  train2.addCage(1);
  EXPECT_EQ(6, train2.sizeOfTrain());
}

TEST(Test, test3) {
  Train train3(0);
  train3.addCage(1);
  EXPECT_EQ(l, train3.print());
}

TEST(Test, test4) {
  Train train4(0);
  train4.addCage(0);
  EXPECT_EQ(d, train4.print());
}

TEST(Test, test5) {
  Train train5(0);
  train5.addCage(1);
  train5.sizeOfTrain();
  EXPECT_EQ(d, train5.print());
}

TEST(Test, test6) {
  Train train6(5);
  for (int i = 0; i < 5; i++) {
    train6.addCage(0);
  }
  EXPECT_EQ(10, train6.sizeOfTrain());
}

