/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2013-2018 Regents of the University of California.
 *
 * This file is part of ndn-cxx library (NDN C++ library with eXperimental eXtensions).
 *
 * ndn-cxx library is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * ndn-cxx library is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 * You should have received copies of the GNU General Public License and GNU Lesser
 * General Public License along with ndn-cxx, e.g., in COPYING.md file.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * See AUTHORS.md for complete list of ndn-cxx authors and contributors.
 */

#ifndef NDN_VERSION_HPP
#define NDN_VERSION_HPP

namespace ndn {

/** ndn-cxx version follows Semantic Versioning 2.0.0 specification
 *  http://semver.org/
 */

/** \brief ndn-cxx version represented as an integer
 *
 *  MAJOR*1000000 + MINOR*1000 + PATCH
 */
#define NDN_CXX_VERSION 7000

/** \brief ndn-cxx version represented as a string
 *
 *  MAJOR.MINOR.PATCH
 */
#define NDN_CXX_VERSION_STRING "0.7.0"

/** \brief ndn-cxx version string, including git commit information, if ndn-cxx is build from
 *         specific git commit
 *
 * NDN_CXX_VERSION_BUILD_STRING is obtained using the following command (`ndn-cxx-` prefix is
 * afterwards removed):
 *
 *    `git describe --match 'ndn-cxx-*'`
 *
 * When ndn-cxx is built not from git, NDN_CXX_VERSION_BUILD_STRING equals NDN_CXX_VERSION_STRING
 *
 * MAJOR.MINOR.PATCH(-release-candidate-tag)(-(number-of-commits-since-tag)-COMMIT-HASH)
 *
 * Example, 0.1.0-rc1-1-g5c86570
 */
#define NDN_CXX_VERSION_BUILD_STRING "0.7.0-commit-3526f44"

/// MAJOR version
#define NDN_CXX_VERSION_MAJOR 0
/// MINOR version
#define NDN_CXX_VERSION_MINOR 7
/// PATCH version
#define NDN_CXX_VERSION_PATCH 0

} // namespace ndn

#endif // NDN_VERSION_HPP
