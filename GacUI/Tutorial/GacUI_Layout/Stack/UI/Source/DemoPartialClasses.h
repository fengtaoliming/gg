﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

namespace vl_workflow_global
{
	struct __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf7_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
}

namespace demo
{
	class MainWindowConstructor;
	class MainWindow;

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf7_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::vl::presentation::controls::GuiSelectableButton::MutexGroupController* groupStackDirection;
		::vl::presentation::compositions::GuiStackComposition* stackLayout;
		::demo::MainWindow* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_2;
		::vl::presentation::controls::GuiSelectableButton* __vwsn_precompile_3;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_4;
		::vl::presentation::controls::GuiSelectableButton* __vwsn_precompile_5;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_6;
		::vl::presentation::controls::GuiSelectableButton* __vwsn_precompile_7;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_8;
		::vl::presentation::controls::GuiSelectableButton* __vwsn_precompile_9;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_10;
		::vl::presentation::controls::GuiLabel* __vwsn_precompile_11;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_12;
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_13;
		::vl::presentation::controls::GuiButton* __vwsn_precompile_14;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_15;
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_16;
		::vl::presentation::controls::GuiButton* __vwsn_precompile_17;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_18;
		::vl::presentation::compositions::GuiStackItemComposition* __vwsn_precompile_19;
		::vl::presentation::controls::GuiButton* __vwsn_precompile_20;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_21;
		::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_precompile_22;
		void __vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf7_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		MainWindow();
		~MainWindow();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		static Demo& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf7_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf7_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
