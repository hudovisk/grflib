find_package(Catch2 REQUIRED)

add_executable(Test src/test.cpp src/grf.test.cpp)
target_link_libraries(Test grflib Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(Test)

configure_file(event.grf ${CMAKE_CURRENT_BINARY_DIR}/event.grf COPYONLY)