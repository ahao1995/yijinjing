# Copyright [2017] [taurus.ai]
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

CMAKE_MINIMUM_REQUIRED(VERSION 3.7)
PROJECT(kungfu)

############################################################
SET(BOOST_INCLUDEDIR "${TOOLCHAIN_DIR}/boost-1.62.0/include")
SET(BOOST_LIBRARYDIR "${TOOLCHAIN_DIR}/boost-1.62.0/lib")

SET(Boost_USE_MULTITHREADED ON)
SET(Boost_USE_STATIC_LIBS OFF)
SET(Boost_USE_STATIC_RUNTIME OFF)

FIND_PACKAGE(Boost 1.62.0 COMPONENTS locale date_time filesystem system thread serialization math_tr1 chrono regex program_options REQUIRED)
INCLUDE_DIRECTORIES(${BOOST_INCLUDEDIR})

############################################################
set(CMAKE_BUILD_TYPE Release)
# SET(CMAKE_CXX_FLAGS_DEBUG "${CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3 -Wall")

OPTION(BUILD_SHARED_LIBS "turn OFF for .a libs" ON)
OPTION(USE_SERVICE "use memory service" ON)
OPTION(USE_HASH_CODE "use hash code when writing" ON)
############################################################

ADD_SUBDIRECTORY(yijinjing)
ADD_SUBDIRECTORY(test)


