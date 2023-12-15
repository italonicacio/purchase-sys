
#include <gtest/gtest.h>
#include "Authentication.hpp"


TEST(TestAuthentication, ItShouldBeAbleToAuthenticate) {
	
    int result = auth();

    ASSERT_EQ(1, result);

}