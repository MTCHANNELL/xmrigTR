/* XMRig
 * Copyright (c) 2018-2023 SChernykh   <https://github.com/SChernykh>
 * Copyright (c) 2016-2023 XMRig       <https://github.com/xmrig>, <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef XMRIG_VERSION_H
#define XMRIG_VERSION_H

#define APP_ID        "XMRiG"
#define APP_NAME      "XMRiG"
#define APP_DESC      "XMRiG - TÜRKÇE MADENCi YAZILIMI"
#define APP_VERSION   " - VERSiYON 6.20.0 - MAKSiMUM PERFORMANS - MTCHANNEL TARAFINDAN TÜRKÇE'YE ÇEViRiLMiŞTiR"
#define APP_DOMAIN    "XMRiG - TÜRKÇE MADENCi YAZILIMI"
#define APP_SITE      "XMRiG - TÜRKÇE MADENCi YAZILIMI"
#define APP_COPYRIGHT "XMRiG - TÜRKÇE MADENCi YAZILIMI"
#define APP_KIND      "XMRiG - TÜRKÇE MADENCi YAZILIMI"

#define APP_VER_MAJOR  6
#define APP_VER_MINOR  20
#define APP_VER_PATCH  0

#ifdef _MSC_VER
#   if (_MSC_VER >= 1930)
#       define MSVC_VERSION 2022
#   elif (_MSC_VER >= 1920 && _MSC_VER < 1930)
#       define MSVC_VERSION 2019
#   elif (_MSC_VER >= 1910 && _MSC_VER < 1920)
#       define MSVC_VERSION 2017
#   elif _MSC_VER == 1900
#       define MSVC_VERSION 2015
#   elif _MSC_VER == 1800
#       define MSVC_VERSION 2013
#   elif _MSC_VER == 1700
#       define MSVC_VERSION 2012
#   elif _MSC_VER == 1600
#       define MSVC_VERSION 2010
#   else
#       define MSVC_VERSION 0
#   endif
#endif

#endif // XMRIG_VERSION_H
