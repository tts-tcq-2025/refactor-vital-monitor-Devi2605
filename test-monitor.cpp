#include <gtest/gtest.h>
#include "./monitor.h"

TEST(Monitor, NotOkWhenAnyVitalIsOffRange) {
  ASSERT_FALSE(vitalsOk(99, 102, 70));
  ASSERT_TRUE(vitalsOk(98.1, 70, 98));
  }

TEST(Monitor, LOW)
{
  ASSERT_TRUE(vitalsOk(94, 72, 98) == 0)
}

