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
	struct __vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_;
	struct __vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_;
	struct __vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	struct __vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
	class __vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription;
	class __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
}

namespace demo
{
	class ColorBomboItemTemplateConstructor;
	class ColorBomboItemTemplate;
	class IColorItem;
	class IViewModel;
	class MainWindowConstructor;
	class MainWindow;

	class ColorBomboItemTemplateConstructor : public ::vl::Object, public ::vl::reflection::Description<ColorBomboItemTemplateConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ColorBomboItemTemplateConstructor>;
#endif
	protected:
		::vl::Ptr<::demo::IColorItem> ViewModel;
		::demo::ColorBomboItemTemplate* self;
		::vl::presentation::compositions::GuiSharedSizeItemComposition* __vwsn_precompile_0;
		::vl::presentation::controls::GuiButton* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_2;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_3;
		::vl::Ptr<::vl::presentation::elements::GuiSolidBackgroundElement> __vwsn_precompile_4;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_5;
		::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement> __vwsn_precompile_6;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_7;
		void __vwsn_demo_ColorBomboItemTemplate_Initialize(::demo::ColorBomboItemTemplate* __vwsn_this_);
	public:
		ColorBomboItemTemplateConstructor();
	};

	class ColorBomboItemTemplate : public ::vl::presentation::templates::GuiControlTemplate, public ::demo::ColorBomboItemTemplateConstructor, public ::vl::reflection::Description<ColorBomboItemTemplate>
	{
		friend class ::demo::ColorBomboItemTemplateConstructor;
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ColorBomboItemTemplate>;
#endif
	private:
		::vl::Ptr<::demo::IColorItem> __vwsn_parameter_ViewModel;
	public:
		::vl::Ptr<::demo::IColorItem> GetViewModel();
		ColorBomboItemTemplate(::vl::Ptr<::demo::IColorItem> __vwsn_ctor_parameter_ViewModel);
		~ColorBomboItemTemplate();
	};

	class IColorItem : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IColorItem>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IColorItem>;
#endif
	public:
		virtual ::vl::WString GetItemName() = 0;
		virtual ::vl::presentation::Color GetItemColor() = 0;
		virtual ::vl::Ptr<::demo::IViewModel> GetViewModel() = 0;
	};

	class IViewModel : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IViewModel>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IViewModel>;
#endif
	public:
		virtual ::vl::presentation::Color GetSelectedColor() = 0;
		virtual void SetSelectedColor(::vl::presentation::Color __vwsn_value_) = 0;
		::vl::Event<void()> SelectedColorChanged;
		virtual ::vl::collections::LazyList<::vl::Ptr<::demo::IColorItem>> GetColorItems() = 0;
	};

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::vl::Ptr<::demo::IViewModel> ViewModel;
		::vl::presentation::controls::GuiComboButton* comboColor;
		::demo::MainWindow* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_2;
		::vl::presentation::controls::GuiLabel* __vwsn_precompile_3;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_4;
		::vl::presentation::controls::GuiControl* __vwsn_precompile_5;
		::vl::presentation::compositions::GuiSharedSizeRootComposition* __vwsn_precompile_6;
		::vl::presentation::compositions::GuiRepeatFlowComposition* __vwsn_precompile_7;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_8;
		::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_precompile_9;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_10;
		::vl::Ptr<::vl::presentation::elements::GuiSolidBackgroundElement> __vwsn_precompile_11;
		::vl::Ptr<::demo::IViewModel> __vwsn_precompile_12;
		::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_precompile_13;
		void __vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	private:
		::vl::Ptr<::demo::IViewModel> __vwsn_parameter_ViewModel;
	public:
		::vl::Ptr<::demo::IViewModel> GetViewModel();
		MainWindow(::vl::Ptr<::demo::IViewModel> __vwsn_ctor_parameter_ViewModel);
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

	struct __vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_
	{
		::demo::ColorBomboItemTemplateConstructor* __vwsnthis_0;

		__vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_(::demo::ColorBomboItemTemplateConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_
	{
		::demo::ColorBomboItemTemplateConstructor* __vwsnthis_0;

		__vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize_(::demo::ColorBomboItemTemplateConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		::vl::presentation::templates::GuiTemplate* operator()(const ::vl::reflection::description::Value& __vwsn_viewModel_) const;
	};

	struct __vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_
	{
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()() const;
	};

	class __vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::demo::ColorBomboItemTemplateConstructor* __vwsnthis_0;

		__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_demo_ColorBomboItemTemplate_Initialize__vl_reflection_description_IValueSubscription(::demo::ColorBomboItemTemplateConstructor* __vwsnctorthis_0);

		::demo::ColorBomboItemTemplate* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1);
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription(::demo::MainWindowConstructor* __vwsnctorthis_0);

		::vl::Ptr<::demo::IViewModel> __vwsn_bind_cache_0;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0();
		bool Open() override;
		bool Update() override;
		bool Close() override;
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
