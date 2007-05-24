/*
 * File:        Pointer__LevelSetFunctionIntegratorStrategy.NDIM.cc
 * Copyright:   (c) 2005-2006 Kevin T. Chu
 * Revision:    $Revision: 1.5 $
 * Modified:    $Date: 2006/10/02 00:47:35 $
 * Description: Explicit template instantiation of LSMLIB classes 
 */

#include "SAMRAI_config.h"
#include "tbox/Pointer.h"
#include "tbox/Pointer.C"

#include "LevelSetFunctionIntegratorStrategy.h"
#include "LevelSetFunctionIntegratorStrategy.cc"

template class SAMRAI::tbox::Pointer< 
  LSMLIB::LevelSetFunctionIntegratorStrategy<NDIM> 
>;