add_executable(pockage main.cpp)

# find_package(name version REQUIRED)

find_package(fmt REQUIRED)

include_directories(../include)

target_link_libraries(pockage)
