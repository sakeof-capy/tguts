cmake_minimum_required(VERSION 3.5)
project(tguts)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(wxBUILD_SHARED OFF)

add_subdirectory(dependencies/ctre)
add_subdirectory(dependencies/wxWidgets)
add_subdirectory(tguts_root)
