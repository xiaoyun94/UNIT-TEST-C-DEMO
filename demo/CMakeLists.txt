add_subdirectory(../googletest gtest)
add_subdirectory(../mockcpp mockcpp)

add_executable(demo main.cpp)
target_compile_options(demo PRIVATE -fprofile-arcs -ftest-coverage)
target_include_directories(demo PRIVATE
        ../googletest/googletest/include
        ../googletest/googlemock/include
        ../mockcpp/include
        ../mockcpp/3rdparty)
target_link_libraries(demo gtest gcov mockcpp)