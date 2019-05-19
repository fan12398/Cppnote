# minimum cmake version
cmake_minimum_required(VERSION 3.1)

# project name
project(Cppnote)

# head file path
include_directories(Inc)

# source directory
aux_source_directory(Src DIR_SRCS)

# add executable file
ADD_EXECUTABLE(cppnote ${DIR_SRCS})