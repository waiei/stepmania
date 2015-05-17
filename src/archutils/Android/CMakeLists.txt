cmake_minimum_required(VERSION 3.0.99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY, "../")
project( Stepmania_Android )

include("../../../StepmaniaCore.cmake")

# Set current dir as an includes dir.
include_directories(BEFORE ${PROJECT_SOURCE_DIR})

# Set a relative variable because more simple.
set(PROJECT_INTERNAL_ROOTDIR "${PROJECT_SOURCE_DIR}/../../..")

# Specifically to fool the CLion IDE into considering the root of the SMgit as an alternate source directory
set(Stepmania_Android_SOURCE_DIR "../../../")