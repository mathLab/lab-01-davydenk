#include <deal.II/base/point.h>

#include <gtest/gtest.h>

using namespace dealii;


TEST(Pythagoras, Norm)
{
  Point<2> x(3, 4);
  ASSERT_EQ(x.norm(), 5);
}


TEST(Pythagoras, Distance)
{
  Point<2> x(4, 5);
  Point<2> y(1, 1);
  ASSERT_EQ(x.distance(y), 5);
}


TEST(Pythagoras, ScalarProduct)
{
  Point<2> x(3, 4);
  ASSERT_EQ(x * x, 25);
}

TEST(Pythagoras3, Norm)
{
  Point<3> x(20, 4, 5);
  ASSERT_EQ(x.norm(), 21);
}


TEST(Pythagoras3, Distance)
{
  Point<3> x(21, 5, 6);
  Point<3> y(1, 1, 1);
  ASSERT_EQ(x.distance(y), 21);
}


TEST(Pythagoras3, ScalarProduct)
{
  Point<3> x(20, 4, 5);
  ASSERT_EQ(x * x, 441);
}

