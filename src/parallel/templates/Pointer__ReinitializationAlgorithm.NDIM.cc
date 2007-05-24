/*
 * File:        Pointer__ReinitializationAlgorithm.NDIM.cc
 * Copyright:   (c) 2005-2006 Kevin T. Chu
 * Revision:    $Revision: 1.5 $
 * Modified:    $Date: 2006/10/02 00:47:36 $
 * Description: Explicit template instantiation of LSMLIB classes 
 */

#include "SAMRAI_config.h"
#include "tbox/Pointer.h"
#include "tbox/Pointer.C"

#include "ReinitializationAlgorithm.h"
#include "ReinitializationAlgorithm.cc"

template class SAMRAI::tbox::Pointer< LSMLIB::ReinitializationAlgorithm<NDIM> >;