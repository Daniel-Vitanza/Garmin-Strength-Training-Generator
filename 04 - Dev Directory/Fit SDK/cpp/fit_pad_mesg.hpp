/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.105Release
// Tag = production/release/21.105.00-0-gdc65d24
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_PAD_MESG_HPP)
#define FIT_PAD_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class PadMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    PadMesg(void) : Mesg(Profile::MESG_PAD)
    {
    }

    PadMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

};

} // namespace fit

#endif // !defined(FIT_PAD_MESG_HPP)