/*****************************************************************************
 * Copyright [2017] [taurus.ai]
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *****************************************************************************/

/**
 * Define Type Convert utils here.
 * @Author qlu (qing.lu@taurus.ai)
 * @since  September, 2016
 */

#ifndef YIJINJING_TYPECONVERTOR_H
#define YIJINJING_TYPECONVERTOR_H

#include <vector>

#include "YJJ_DECLARE.h"
#include <boost/locale.hpp>

YJJ_NAMESPACE_START


/**
 * convert gbk to utf8
 */
inline string gbk2utf8(const string& str)
{
    return boost::locale::conv::between(str, "UTF-8", "GBK");
}

YJJ_NAMESPACE_END

#endif //YIJINJING_TYPECONVERT_H
