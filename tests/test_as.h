#ifndef TEST_AS_H
#define TEST_AS_H
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "func.h"
}

TEST(Func, no_sol) {
    getRoots r = Func(1, 2, 6);
    EXPECT_EQ(0, r.n);
}
TEST(Func, one_sol) {
    getRoots r = Func(4, 4, 1);
    EXPECT_EQ(-0.5, r.x1);
}

TEST(Func, two_sol) {
    getRoots r = Func(2, 5, 2);
    EXPECT_EQ(-2, r.x1);
    EXPECT_EQ(-0.5, r.x2);
}
TEST(Func, test4_negative){
    getRoots r = Func(0, 1, 1);
    EXPECT_EQ(-1, r.x1);

}
TEST(Func, test5_negative){
    getRoots r = Func(1, 0, -1);
    EXPECT_EQ(-1, r.x1);
    EXPECT_EQ(1, r.x2);

}
TEST(Func, test6_negative){
    getRoots r = Func(1, 0, 1);
    EXPECT_EQ(0, r.n);

}
TEST(Func, test7_negative){
    getRoots r = Func(0, 0, 1);
    EXPECT_EQ(0, r.n);

}
TEST(Func, test8_negative){
    getRoots r = Func(0, 1, 0);
    EXPECT_EQ(0, r.x1);

}
TEST(Func, test9_negative){
    getRoots r = Func(0, 0, 0);
    EXPECT_EQ(0, r.n);

}
TEST(Func, test10_negative){
    getRoots r = Func(1, 1, 0);
    EXPECT_EQ(-1, r.x1);
    EXPECT_EQ(0, r.x2);

}
TEST(Func, test11_negative){
    getRoots r = Func(1, 0, 0);
    EXPECT_EQ(0, r.x1);


}

#endif // TEST_AS_H
