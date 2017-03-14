#include "animal.h"
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

class AnimalTest : public ::testing::Test {
  protected:
    AnimalTest(){}
};

TEST(AnimalTest, GetTextMethod) {
    Animal obj_colibri(19, 2, 4, 100);
    ASSERT_EQ(19, obj_colibri.GetID());
    ASSERT_EQ(true, obj_colibri.IsLandAnimal());
    ASSERT_EQ(false, obj_colibri.IsWaterAnimal());
    ASSERT_EQ(true, obj_colibri.IsAirAnimal());
    ASSERT_EQ(true, obj_colibri.IsHerbivore());
    ASSERT_EQ(false, obj_colibri.IsCarnivore());
    ASSERT_EQ(false, obj_colibri.IsOmnivore());
    ASSERT_EQ(0, obj_colibri.GetReqMeat());
    ASSERT_EQ(60, obj_colibri.GetReqPlant());
    ASSERT_EQ(2, obj_colibri.GetX());
    ASSERT_EQ(4, obj_colibri.GetY());
    ASSERT_EQ(false, obj_colibri.GetBehavior());
    ASSERT_EQ('O', obj_colibri.Render());

    Animal obj_wild_colibri(21, 5, 8, 100);
    ASSERT_EQ(21, obj_wild_colibri.GetID());
    ASSERT_EQ(true, obj_wild_colibri.IsLandAnimal());
    ASSERT_EQ(false, obj_wild_colibri.IsWaterAnimal());
    ASSERT_EQ(true, obj_wild_colibri.IsAirAnimal());
    ASSERT_EQ(true, obj_wild_colibri.IsHerbivore());
    ASSERT_EQ(false, obj_wild_colibri.IsCarnivore());
    ASSERT_EQ(false, obj_wild_colibri.IsOmnivore());
    ASSERT_EQ(0, obj_wild_colibri.GetReqMeat());
    ASSERT_EQ(60, obj_wild_colibri.GetReqPlant());
    ASSERT_EQ(5, obj_wild_colibri.GetX());
    ASSERT_EQ(8, obj_wild_colibri.GetY());
    ASSERT_EQ(true, obj_wild_colibri.GetBehavior());
    ASSERT_EQ(false, obj_wild_colibri.IsEnemy(1));
    ASSERT_EQ(true, obj_wild_colibri.IsEnemy(19));
    ASSERT_EQ('O', obj_wild_colibri.Render());
}