
// MFCApplication1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCAMainWindow:
// See MFCApplication1.cpp for the implementation of this class
//

class CMFCAMainWindow : public CWinApp
{
public:
	CMFCAMainWindow();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCAMainWindow theApp;
