add_executable(pockage main.cpp commands.cpp)

# find_package(name version REQUIRED)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)
include_directories(../include)

find_package(fmt 9.0.0 REQUIRED)

message(${PROJECT_SOURCE_DIR})

target_link_libraries(pockage ${PROJECT_SOURCE_DIR}/lib/libfmt.a ${PROJECT_SOURCE_DIR}/lib/libgit2.1.5.0.dylib ${PROJECT_SOURCE_DIR}/lib/libgit2.a) # TODO: CROSS-PLATFORM!

