/*
 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.
 */

#ifndef fckit_Library_h
#define fckit_Library_h

#include "eckit/system/Library.h"

namespace fckit {

//----------------------------------------------------------------------------------------------------------------------

class Library : public eckit::system::Library {
public:

    Library();

    static const Library& instance();

protected:

    const void* addr() const;

    virtual std::string version() const;

    virtual std::string gitsha1(unsigned int count) const;

};

//----------------------------------------------------------------------------------------------------------------------

} // namespace fckit

#endif

