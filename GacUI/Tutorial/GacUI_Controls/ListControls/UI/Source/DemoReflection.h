﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION

#include "Demo.h"
#ifndef VCZH_DEBUG_NO_REFLECTION
#include "GacUIReflection.h"
#endif

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			DECL_TYPE_INFO(::demo::ListViewTabPage)
			DECL_TYPE_INFO(::demo::ListViewTabPageConstructor)
			DECL_TYPE_INFO(::demo::MainWindow)
			DECL_TYPE_INFO(::demo::MainWindowConstructor)
			DECL_TYPE_INFO(::demo::MyTextItem)
			DECL_TYPE_INFO(::demo::TextListTabPage)
			DECL_TYPE_INFO(::demo::TextListTabPageConstructor)
			DECL_TYPE_INFO(::demo::TreeViewTabPage)
			DECL_TYPE_INFO(::demo::TreeViewTabPageConstructor)
#endif

			extern bool LoadDemoTypes();
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
