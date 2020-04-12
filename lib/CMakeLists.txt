
add_library(grflib 
    src/grf.cpp 
    src/grf.h
    src/file.cpp 
    src/file.h
)

target_include_directories(grflib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)