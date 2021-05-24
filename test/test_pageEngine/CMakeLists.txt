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
PROJECT(test_page)

include_directories(../../yijinjing/paged)
include_directories(../../yijinjing/utils)
include_directories(../../yijinjing/log)
include_directories(../../yijinjing/journal)
include_directories(../../yijinjing/longfist)

add_executable(yjj_page_service page_service.cpp)
TARGET_LINK_LIBRARIES(yjj_page_service paged journal)
