
// PythonCaller.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CPythonCallerApp: 
// �йش����ʵ�֣������ PythonCaller.cpp
//

class CPythonCallerApp : public CWinApp
{
public:
	CPythonCallerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CPythonCallerApp theApp;