cmake_minimum_required(VERSION 3.22)

set (CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "-g3 -O0")

set(CMAKE_CXX_STANDARD 20)

project(purchase-sys)
enable_language(CXX)

set (CMAKE_VERBOSE_MAKEFILE true)

add_executable( purchase-sys
                "src/purchase-sys.cpp"
                "src/App.cpp"
                "src/User.cpp"
                "src/UserManager.cpp"
                "src/Employee.cpp"
)   

set_target_properties( 
    purchase-sys 
    PROPERTIES
        ENABLE_EXPORTS ON
        POSITION_INDEPENDENT_CODE ON 
)

target_include_directories(purchase-sys PUBLIC ${CMAKE_SOURCE_DIR}/include)

function( set_required_build_settings_for_GCC8 )
    # Always link with libstdc++fs.a when using GCC 8.
    # Note: This command makes sure that this option comes pretty late on the cmdline.
    link_libraries( "$<$<AND:$<CXX_COMPILER_ID:GNU>,$<VERSION_LESS:$<CXX_COMPILER_VERSION>,9.0>>:-lstdc++fs>" )
endfunction()



# if(testing_enabled AND CMAKE_BUILD_TYPE STREQUAL Debug) 
if(testing_enabled) 
    set(FETCHCONTENT_QUIET OFF CACHE BOOL "Desabilita o modo quiet to FetchContent" FORCE)



    include(FetchContent)
    add_subdirectory(tests/unit-tests)
endif()