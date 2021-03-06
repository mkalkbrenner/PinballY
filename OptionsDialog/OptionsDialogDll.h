// This file is part of PinballY
// Copyright 2018 Michael J Roberts | GPL v3 or later | NO WARRANTY
//
// PinballY Options Dialog - DLL wrapper functions.
//
// The Options Dialog is implemented as a DLL, rather than being
// linked directly into the main PinballY executable, to avoid any
// MFC entanglements in the main program.  The main program is 
// written directly to the Win32/DirectX APIs, with no application
// framework (e.g., MFC) involved.  We didn't use a framework for
// the main program because its user interface is game-like, not
// productivity app-like, and all of the common frameworks are
// designed around the productivity app conventions.  The options
// dialog, in contrast, is a fairly complex property sheet dialog,
// and for that it's much easier to use something like MFC,
// especially since that gives us access to third-party helper
// components based on MFC.  If we linked the dialogs directly
// into the main app, we'd have to link MFC into the main app,
// and if you do that, MFC basically wants to take over and run
// the whole show.  Isolating the MFC-based portions to a DLL
// lets us have it both ways.

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

class COptionsDialogApp : public CWinApp
{
public:
	COptionsDialogApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
