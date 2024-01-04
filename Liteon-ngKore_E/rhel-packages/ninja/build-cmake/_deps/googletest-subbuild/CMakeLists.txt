# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.20.2)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(googletest-populate NONE)



include(ExternalProject)
ExternalProject_Add(googletest-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://github.com/google/googletest/archive/release-1.10.0.tar.gz" "URL_HASH" "SHA1=9c89be7df9c5e8cb0bc20b3c4b39bf7e82686770"
                    SOURCE_DIR          "/home/rhel/Liteon-ngKore_E/rhel-packages/ninja/build-cmake/_deps/googletest-src"
                    BINARY_DIR          "/home/rhel/Liteon-ngKore_E/rhel-packages/ninja/build-cmake/_deps/googletest-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)


