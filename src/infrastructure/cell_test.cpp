#include "cell.h"
#include <gtest/gtest.h>

class CellTest : public ::testing::Test {
  protected:
    CellTest(){}
};

TEST(CellTest, Park) {
  Cell obj_park(false, "Park", "Ji Sung", false, false);
  ASSERT_EQ(false, obj_park.IsAccessible());
  EXPECT_NE("",obj_park.GetName());
  ASSERT_EQ('*',obj_park.Render());
}
TEST(CellTest, Restaurant) {
  Cell obj_restaurant(false, "Restaurant", "Queen", false, false);
  ASSERT_EQ(false, obj_restaurant.IsAccessible());
  EXPECT_NE("",obj_restaurant.GetName());
  ASSERT_EQ('R',obj_restaurant.Render());
}
TEST(CellTest, Road) {
  Cell obj_road(true, "Road", "", false, false);
  ASSERT_EQ(true, obj_road.IsAccessible());
  ASSERT_EQ(false, obj_road.IsEntrance());
  ASSERT_EQ(false, obj_road.IsExit());
  ASSERT_EQ('.',obj_road.Render());
}
TEST(CellTest, AirHabitat) {
  Cell obj_air_habitat(false, "AirHabitat", "", false, false);
  ASSERT_EQ('a',obj_air_habitat.Render());
}
TEST(CellTest, LandHabitat) {
  Cell obj_land_habitat(false, "LandHabitat", "", false, false);
  ASSERT_EQ('l',obj_land_habitat.Render());
}
TEST(CellTest, WaterHabitat) {
  Cell obj_water_habitat(false, "WaterHabitat", "", false, false);
  ASSERT_EQ('w',obj_water_habitat.Render());
}