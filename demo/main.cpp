//
// Created by xiaoy on 2020/12/30.
//

#include "gtest/gtest.h"
#include "mockcpp/mokc.h"

int getValue()
{
    return 0;
}
TEST(TestSuite1, Expect)
{
    EXPECT_EQ(getValue(),0);
}
TEST(TestSuite1, Assert)
{
    ASSERT_EQ(getValue(),0);
}
TEST(TestSuite2, Mocker)
{
    EXPECT_EQ(getValue(),0);
    MOCKER(getValue).stubs().will(returnValue(1));
    EXPECT_EQ(getValue(),1);
}
int main(int argc, char **argv) {
  printf("Running main() from %s\n", __FILE__);
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}