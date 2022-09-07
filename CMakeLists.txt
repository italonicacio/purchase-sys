cmake_minimum_required(VERSION 3.12)

project(purchase-sys)

add_executable( purchase-sys
                "src/main.cpp"
                "src/App.hpp"
                "src/App.cpp"
                "src/User.hpp"
                "src/User.cpp"


)   

function( set_required_build_settings_for_GCC8 )
    # Always link with libstdc++fs.a when using GCC 8.
    # Note: This command makes sure that this option comes pretty late on the cmdline.
    link_libraries( "$<$<AND:$<CXX_COMPILER_ID:GNU>,$<VERSION_LESS:$<CXX_COMPILER_VERSION>,9.0>>:-lstdc++fs>" )
endfunction()

set_target_properties(purchase-sys PROPERTIES CXX_STANDARD 17)