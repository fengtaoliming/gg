﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "HelloWorld.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, HelloWorldReflection.h) */
#include "HelloWorldReflection.h"
#endif
/* CodePack:EndIgnore() */

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::HelloWorld::
#define GLOBAL_NAME ::vl_workflow_global::HelloWorld::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::HelloWorld::Instance()

/* USER_CONTENT_BEGIN(custom global declarations) */
/* USER_CONTENT_END() */

/***********************************************************************
Class (::helloworld::MainWindow)
***********************************************************************/

namespace helloworld
{
	bool MainWindow::GetHasLoggedIn()
	{
		return this->__vwsn_prop_HasLoggedIn;
	}
	void MainWindow::SetHasLoggedIn(bool __vwsn_value_)
	{
		if ((this->__vwsn_prop_HasLoggedIn != __vwsn_value_))
		{
			(this->__vwsn_prop_HasLoggedIn = __vwsn_value_);
			::vl::__vwsn::EventInvoke(this->HasLoggedInChanged)();
		}
	}

	::vl::Ptr<::vm::IViewModel> MainWindow::GetViewModel()
	{
		return this->__vwsn_parameter_ViewModel;
	}

	void MainWindow::buttonSignUp_Clicked(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::helloworld::MainWindow) */
		if (this->GetViewModel()->SignUp())
		{
			this->SetHasLoggedIn(true);
			this->buttonSignUp->SetText(L"Success!");
		}
	}/* USER_CONTENT_END() */

	MainWindow::MainWindow(::vl::Ptr<::vm::IViewModel> __vwsn_ctor_parameter_ViewModel)
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
		, __vwsn_prop_HasLoggedIn(false)
		, __vwsn_parameter_ViewModel(::vl::Ptr<::vm::IViewModel>())
	{
		(this->__vwsn_parameter_ViewModel = __vwsn_ctor_parameter_ViewModel);
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"helloworld::MainWindow"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_helloworld_MainWindow_Initialize(this);
	}

	MainWindow::~MainWindow()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiControlHost*>(this));
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
