set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.11.0
)

FetchContent_MakeAvailable(googletest)

add_executable( purchase-sys-tests
                "Authentication.test.cpp"

)


target_link_libraries( purchase-sys-tests PRIVATE purchase-sys gtest_main)


