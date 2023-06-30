// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PrettyNumbers.pas' rev: 5.00

#ifndef PrettyNumbersHPP
#define PrettyNumbersHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Prettynumbers
{
//-- type declarations -------------------------------------------------------
struct PrettyInteger
{
	__int64 input;
	__int64 adjusted;
	__int64 scale;
	__int64 factor;
} ;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE PrettyInteger __fastcall RoundUp(int i);

}	/* namespace Prettynumbers */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Prettynumbers;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PrettyNumbers
