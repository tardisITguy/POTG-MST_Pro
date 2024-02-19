// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncLoadingScreen/Public/LoadingScreenSettings.h"
#include "Fonts/SlateFontInfo.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenSettings() {}
// Cross Module References
	ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSettings();
	ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister();
	ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout();
	ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType();
	ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FALoadingScreenSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FBackgroundSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FCenterLayoutSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FCircularThrobberSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FClassicLayoutSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FDualSidebarLayoutSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FImageSequenceSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLetterboxLayoutSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingCompleteTextSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingWidgetSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FSidebarLayoutSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FTextAppearance();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FThrobberSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FTipSettings();
	ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MOVIEPLAYER_API UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UPackage* Z_Construct_UPackage__Script_AsyncLoadingScreen();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout;
	static UEnum* EAsyncLoadingScreenLayout_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("EAsyncLoadingScreenLayout"));
		}
		return Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.OuterSingleton;
	}
	template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<EAsyncLoadingScreenLayout>()
	{
		return EAsyncLoadingScreenLayout_StaticEnum();
	}
	struct Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enumerators[] = {
		{ "EAsyncLoadingScreenLayout::ALSL_Classic", (int64)EAsyncLoadingScreenLayout::ALSL_Classic },
		{ "EAsyncLoadingScreenLayout::ALSL_Center", (int64)EAsyncLoadingScreenLayout::ALSL_Center },
		{ "EAsyncLoadingScreenLayout::ALSL_Letterbox", (int64)EAsyncLoadingScreenLayout::ALSL_Letterbox },
		{ "EAsyncLoadingScreenLayout::ALSL_Sidebar", (int64)EAsyncLoadingScreenLayout::ALSL_Sidebar },
		{ "EAsyncLoadingScreenLayout::ALSL_DualSidebar", (int64)EAsyncLoadingScreenLayout::ALSL_DualSidebar },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enum_MetaDataParams[] = {
		{ "ALSL_Center.Comment", "/** \n\x09 * The loading widget is at the center of the screen, tip widget can be at the bottom or top.\n\x09 * The Center layout is a good choice if your loading icon is the main design.\n\x09 */" },
		{ "ALSL_Center.DisplayName", "Center" },
		{ "ALSL_Center.Name", "EAsyncLoadingScreenLayout::ALSL_Center" },
		{ "ALSL_Center.ToolTip", "The loading widget is at the center of the screen, tip widget can be at the bottom or top.\nThe Center layout is a good choice if your loading icon is the main design." },
		{ "ALSL_Classic.Comment", "/**\n\x09 * The Classic is a simple, generic layout and fits well with many designs.\n\x09 * Loading and tip widgets can be at the bottom or top.\n\x09 */" },
		{ "ALSL_Classic.DisplayName", "Classic" },
		{ "ALSL_Classic.Name", "EAsyncLoadingScreenLayout::ALSL_Classic" },
		{ "ALSL_Classic.ToolTip", "The Classic is a simple, generic layout and fits well with many designs.\nLoading and tip widgets can be at the bottom or top." },
		{ "ALSL_DualSidebar.Comment", "/**\n\x09 * Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\n\x09 * The Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
		{ "ALSL_DualSidebar.DisplayName", "Dual Sidebar" },
		{ "ALSL_DualSidebar.Name", "EAsyncLoadingScreenLayout::ALSL_DualSidebar" },
		{ "ALSL_DualSidebar.ToolTip", "Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\nThe Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget." },
		{ "ALSL_Letterbox.Comment", "/**\n\x09 * The Letterbox layout has two borders on top and bottom of the screen. Loading widget \n\x09 * can be on the top and the tip is at the bottom of the screen, or vice versa.\n\x09 */" },
		{ "ALSL_Letterbox.DisplayName", "Letterbox" },
		{ "ALSL_Letterbox.Name", "EAsyncLoadingScreenLayout::ALSL_Letterbox" },
		{ "ALSL_Letterbox.ToolTip", "The Letterbox layout has two borders on top and bottom of the screen. Loading widget\ncan be on the top and the tip is at the bottom of the screen, or vice versa." },
		{ "ALSL_Sidebar.Comment", "/**\n\x09 * The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar \n\x09 * is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
		{ "ALSL_Sidebar.DisplayName", "Sidebar" },
		{ "ALSL_Sidebar.Name", "EAsyncLoadingScreenLayout::ALSL_Sidebar" },
		{ "ALSL_Sidebar.ToolTip", "The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar\nis suitable for storytelling, long paragraphs due to the height of the tip widget." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Asynce Loading Screen Layouts\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Asynce Loading Screen Layouts" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		"EAsyncLoadingScreenLayout",
		"EAsyncLoadingScreenLayout",
		Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout()
	{
		if (!Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.InnerSingleton, Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadingIconType;
	static UEnum* ELoadingIconType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadingIconType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadingIconType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ELoadingIconType"));
		}
		return Z_Registration_Info_UEnum_ELoadingIconType.OuterSingleton;
	}
	template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<ELoadingIconType>()
	{
		return ELoadingIconType_StaticEnum();
	}
	struct Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enumerators[] = {
		{ "ELoadingIconType::LIT_Throbber", (int64)ELoadingIconType::LIT_Throbber },
		{ "ELoadingIconType::LIT_CircularThrobber", (int64)ELoadingIconType::LIT_CircularThrobber },
		{ "ELoadingIconType::LIT_ImageSequence", (int64)ELoadingIconType::LIT_ImageSequence },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Loading Icon Type*/" },
		{ "LIT_CircularThrobber.Comment", "/** SCircularThrobber widget */" },
		{ "LIT_CircularThrobber.DisplayName", "Circular Throbber" },
		{ "LIT_CircularThrobber.Name", "ELoadingIconType::LIT_CircularThrobber" },
		{ "LIT_CircularThrobber.ToolTip", "SCircularThrobber widget" },
		{ "LIT_ImageSequence.Comment", "/** Animated images */" },
		{ "LIT_ImageSequence.DisplayName", "Image Sequence" },
		{ "LIT_ImageSequence.Name", "ELoadingIconType::LIT_ImageSequence" },
		{ "LIT_ImageSequence.ToolTip", "Animated images" },
		{ "LIT_Throbber.Comment", "/** SThrobber widget */" },
		{ "LIT_Throbber.DisplayName", "Throbber" },
		{ "LIT_Throbber.Name", "ELoadingIconType::LIT_Throbber" },
		{ "LIT_Throbber.ToolTip", "SThrobber widget" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading Icon Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		"ELoadingIconType",
		"ELoadingIconType",
		Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType()
	{
		if (!Z_Registration_Info_UEnum_ELoadingIconType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadingIconType.InnerSingleton, Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadingIconType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadingWidgetType;
	static UEnum* ELoadingWidgetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadingWidgetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadingWidgetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ELoadingWidgetType"));
		}
		return Z_Registration_Info_UEnum_ELoadingWidgetType.OuterSingleton;
	}
	template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<ELoadingWidgetType>()
	{
		return ELoadingWidgetType_StaticEnum();
	}
	struct Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enumerators[] = {
		{ "ELoadingWidgetType::LWT_Horizontal", (int64)ELoadingWidgetType::LWT_Horizontal },
		{ "ELoadingWidgetType::LWT_Vertical", (int64)ELoadingWidgetType::LWT_Vertical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Loading Widget type */" },
		{ "LWT_Horizontal.Comment", "/** Horizontal alignment */" },
		{ "LWT_Horizontal.DisplayName", "Horizontal" },
		{ "LWT_Horizontal.Name", "ELoadingWidgetType::LWT_Horizontal" },
		{ "LWT_Horizontal.ToolTip", "Horizontal alignment" },
		{ "LWT_Vertical.Comment", "/** Vertical alignment */" },
		{ "LWT_Vertical.DisplayName", "Vertical" },
		{ "LWT_Vertical.Name", "ELoadingWidgetType::LWT_Vertical" },
		{ "LWT_Vertical.ToolTip", "Vertical alignment" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading Widget type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		"ELoadingWidgetType",
		"ELoadingWidgetType",
		Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType()
	{
		if (!Z_Registration_Info_UEnum_ELoadingWidgetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadingWidgetType.InnerSingleton, Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadingWidgetType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetAlignment;
class UScriptStruct* FWidgetAlignment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetAlignment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetAlignment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAlignment, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("WidgetAlignment"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetAlignment.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FWidgetAlignment>()
{
	return FWidgetAlignment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetAlignment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAlignment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Alignment for widget*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Alignment for widget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAlignment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Alignment Setting" },
		{ "Comment", "/** The horizontal alignment of the widget.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the widget." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAlignment, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment_MetaData), Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment_MetaData) }; // 483256341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Alignment Setting" },
		{ "Comment", "/** The vertical alignment of the widget.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the widget." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAlignment, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment_MetaData), Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment_MetaData) }; // 1653762848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"WidgetAlignment",
		Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers),
		sizeof(FWidgetAlignment),
		alignof(FWidgetAlignment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetAlignment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetAlignment()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetAlignment.InnerSingleton, Z_Construct_UScriptStruct_FWidgetAlignment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetAlignment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextAppearance;
class UScriptStruct* FTextAppearance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextAppearance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextAppearance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextAppearance, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("TextAppearance"));
	}
	return Z_Registration_Info_UScriptStruct_TextAppearance.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FTextAppearance>()
{
	return FTextAppearance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextAppearance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Text appearance settings\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text appearance settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextAppearance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextAppearance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "/** Text color and opacity */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text color and opacity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity_MetaData), Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "// The font to render the text with.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The font to render the text with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font_MetaData), Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font_MetaData) }; // 2074891513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "/** Drop shadow offset in pixels */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Drop shadow offset in pixels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset_MetaData), Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "/** Shadow color and opacity */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Shadow color and opacity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity_MetaData), Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification_MetaData[] = {
		{ "Category", "Text Appearance" },
		{ "Comment", "/** How the text should be aligned with the margin. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "How the text should be aligned with the margin." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification_MetaData), Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification_MetaData) }; // 1085334074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextAppearance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"TextAppearance",
		Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers),
		sizeof(FTextAppearance),
		alignof(FTextAppearance),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextAppearance_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTextAppearance()
	{
		if (!Z_Registration_Info_UScriptStruct_TextAppearance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextAppearance.InnerSingleton, Z_Construct_UScriptStruct_FTextAppearance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextAppearance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ThrobberSettings;
class UScriptStruct* FThrobberSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ThrobberSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ThrobberSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThrobberSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ThrobberSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ThrobberSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FThrobberSettings>()
{
	return FThrobberSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FThrobberSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateHorizontally_MetaData[];
#endif
		static void NewProp_bAnimateHorizontally_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateHorizontally;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateVertically_MetaData[];
#endif
		static void NewProp_bAnimateVertically_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateVertically;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateOpacity_MetaData[];
#endif
		static void NewProp_bAnimateOpacity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThrobberSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many pieces there are */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThrobberSettings, NumberOfPieces), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData), Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate horizontally? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should the pieces animate horizontally?" },
	};
#endif
	void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_SetBit(void* Obj)
	{
		((FThrobberSettings*)Obj)->bAnimateHorizontally = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally = { "bAnimateHorizontally", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_MetaData), Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate vertically? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should the pieces animate vertically?" },
	};
#endif
	void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_SetBit(void* Obj)
	{
		((FThrobberSettings*)Obj)->bAnimateVertically = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically = { "bAnimateVertically", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_MetaData), Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the pieces animate their opacity? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should the pieces animate their opacity?" },
	};
#endif
	void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_SetBit(void* Obj)
	{
		((FThrobberSettings*)Obj)->bAnimateOpacity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity = { "bAnimateOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_MetaData), Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for each segment of the throbber */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Image to use for each segment of the throbber" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThrobberSettings, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"ThrobberSettings",
		Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers),
		sizeof(FThrobberSettings),
		alignof(FThrobberSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FThrobberSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FThrobberSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ThrobberSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ThrobberSettings.InnerSingleton, Z_Construct_UScriptStruct_FThrobberSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ThrobberSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CircularThrobberSettings;
class UScriptStruct* FCircularThrobberSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CircularThrobberSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CircularThrobberSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircularThrobberSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("CircularThrobberSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CircularThrobberSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FCircularThrobberSettings>()
{
	return FCircularThrobberSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircularThrobberSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many pieces there are */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircularThrobberSettings, NumberOfPieces), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData), Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of time for a full circle (in seconds) */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The amount of time for a full circle (in seconds)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircularThrobberSettings, Period), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period_MetaData), Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircularThrobberSettings, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use for each segment of the throbber */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Image to use for each segment of the throbber" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircularThrobberSettings, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"CircularThrobberSettings",
		Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers),
		sizeof(FCircularThrobberSettings),
		alignof(FCircularThrobberSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCircularThrobberSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CircularThrobberSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CircularThrobberSettings.InnerSingleton, Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CircularThrobberSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageSequenceSettings;
class UScriptStruct* FImageSequenceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageSequenceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageSequenceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageSequenceSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ImageSequenceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ImageSequenceSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FImageSequenceSettings>()
{
	return FImageSequenceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImageSequenceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayReverse_MetaData[];
#endif
		static void NewProp_bPlayReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayReverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageSequenceSettings>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** An array of images for animating the loading icon.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "An array of images for animating the loading icon." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageSequenceSettings, Images), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_MetaData), Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Scale of the images.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Scale of the images." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageSequenceSettings, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale_MetaData), Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Time in second to update the images, the smaller value the faster of the animation. A zero value will update the images every frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Time in second to update the images, the smaller value the faster of the animation. A zero value will update the images every frame." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageSequenceSettings, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval_MetaData), Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Play the image sequence in reverse.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Play the image sequence in reverse." },
	};
#endif
	void Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_SetBit(void* Obj)
	{
		((FImageSequenceSettings*)Obj)->bPlayReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse = { "bPlayReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImageSequenceSettings), &Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_MetaData), Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"ImageSequenceSettings",
		Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers),
		sizeof(FImageSequenceSettings),
		alignof(FImageSequenceSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FImageSequenceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ImageSequenceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageSequenceSettings.InnerSingleton, Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImageSequenceSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BackgroundSettings;
class UScriptStruct* FBackgroundSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BackgroundSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BackgroundSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBackgroundSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("BackgroundSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BackgroundSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FBackgroundSettings>()
{
	return FBackgroundSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBackgroundSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageStretch_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayBackgroundManually_MetaData[];
#endif
		static void NewProp_bSetDisplayBackgroundManually_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayBackgroundManually;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Background widget for the widget loading screen\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background widget for the widget loading screen" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBackgroundSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Background" },
		{ "Comment", "// The images randomly display while in the loading screen on top of the movie \n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The images randomly display while in the loading screen on top of the movie" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, Images), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_MetaData), Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "// The scaling type to apply to images.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The scaling type to apply to images." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch = { "ImageStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, ImageStretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch_MetaData), Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch_MetaData) }; // 3498569652
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** The padding area between the border and the image it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the border and the image it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding_MetaData), Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "// The border's background color if there is any image defined. If padding = 0 you will not see the border color.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The border's background color if there is any image defined. If padding = 0 you will not see the border color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData), Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/**\n\x09 * If true, you will have to manually set which background index you want to display on the loading screen by calling \"SetDisplayBackgroundIndex\" function\n\x09 * in your Blueprint before opening a new level. If the index you set is not valid, then it will display random background in the \"Images\" array.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, you will have to manually set which background index you want to display on the loading screen by calling \"SetDisplayBackgroundIndex\" function\nin your Blueprint before opening a new level. If the index you set is not valid, then it will display random background in the \"Images\" array." },
	};
#endif
	void Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_SetBit(void* Obj)
	{
		((FBackgroundSettings*)Obj)->bSetDisplayBackgroundManually = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually = { "bSetDisplayBackgroundManually", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBackgroundSettings), &Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_MetaData), Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"BackgroundSettings",
		Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers),
		sizeof(FBackgroundSettings),
		alignof(FBackgroundSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBackgroundSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBackgroundSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BackgroundSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BackgroundSettings.InnerSingleton, Z_Construct_UScriptStruct_FBackgroundSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BackgroundSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoadingWidgetSettings;
class UScriptStruct* FLoadingWidgetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoadingWidgetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoadingWidgetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingWidgetSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LoadingWidgetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LoadingWidgetSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FLoadingWidgetSettings>()
{
	return FLoadingWidgetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingIconType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingIconType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingIconType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingWidgetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingWidgetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformPivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LoadingText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadingTextRightPosition_MetaData[];
#endif
		static void NewProp_bLoadingTextRightPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadingTextRightPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadingTextTopPosition_MetaData[];
#endif
		static void NewProp_bLoadingTextTopPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadingTextTopPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Appearance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrobberSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThrobberSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircularThrobberSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CircularThrobberSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSequenceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSequenceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingIconAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingIconAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideLoadingWidgetWhenCompletes_MetaData[];
#endif
		static void NewProp_bHideLoadingWidgetWhenCompletes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLoadingWidgetWhenCompletes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Loading widget settings\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading widget settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingWidgetSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Loading icon type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading icon type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType = { "LoadingIconType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingIconType), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_MetaData) }; // 3028597685
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Loading Widget type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading Widget type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType = { "LoadingWidgetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingWidgetType), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_MetaData) }; // 1798306888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Render transform translation of the loading icon.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Render transform translation of the loading icon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation = { "TransformTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformTranslation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Render transform scale of the loading icon, a negative value will flip the icon.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Render transform scale of the loading icon, a negative value will flip the icon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Render transform pivot of the loading icon (in normalized local space).*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Render transform pivot of the loading icon (in normalized local space)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot = { "TransformPivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "// Text displayed beside the animated icon\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text displayed beside the animated icon" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText = { "LoadingText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Is Loading Text on the right of the loading icon? Ignore this if you don't choose Loading Widget Type = Horizontal.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is Loading Text on the right of the loading icon? Ignore this if you don't choose Loading Widget Type = Horizontal." },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_SetBit(void* Obj)
	{
		((FLoadingWidgetSettings*)Obj)->bLoadingTextRightPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition = { "bLoadingTextRightPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Is Loading Text on the top of the loading icon? Ignore this if you don't choose Loading Widget Type = Vertical.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is Loading Text on the top of the loading icon? Ignore this if you don't choose Loading Widget Type = Vertical." },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_SetBit(void* Obj)
	{
		((FLoadingWidgetSettings*)Obj)->bLoadingTextTopPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition = { "bLoadingTextTopPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance_MetaData[] = {
		{ "Category", "Tip Settings" },
		{ "Comment", "// Loading text appearance settings\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading text appearance settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance_MetaData) }; // 2153280083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Throbber settings. Ignore this if you don't choose the 'Throbber' icon type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Throbber settings. Ignore this if you don't choose the 'Throbber' icon type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings = { "ThrobberSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, ThrobberSettings), Z_Construct_UScriptStruct_FThrobberSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings_MetaData) }; // 3366687758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Circular Throbber settings. Ignore this if you don't choose the 'Circular Throbber' icon type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Circular Throbber settings. Ignore this if you don't choose the 'Circular Throbber' icon type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings = { "CircularThrobberSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, CircularThrobberSettings), Z_Construct_UScriptStruct_FCircularThrobberSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings_MetaData) }; // 2020075600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Image Sequence settings. Ignore this if you don't choose the 'Image Sequence' icon type*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Image Sequence settings. Ignore this if you don't choose the 'Image Sequence' icon type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings = { "ImageSequenceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, ImageSequenceSettings), Z_Construct_UScriptStruct_FImageSequenceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings_MetaData) }; // 2534377216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** The alignment of the loading text.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the loading text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment = { "TextAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TextAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** The alignment of the loading icon. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the loading icon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment = { "LoadingIconAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingIconAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Empty space between the loading text and the loading icon */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Empty space between the loading text and the loading icon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, Space), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** Hide the loading widget when the level loading is complete*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Hide the loading widget when the level loading is complete" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_SetBit(void* Obj)
	{
		((FLoadingWidgetSettings*)Obj)->bHideLoadingWidgetWhenCompletes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes = { "bHideLoadingWidgetWhenCompletes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_MetaData), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"LoadingWidgetSettings",
		Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers),
		sizeof(FLoadingWidgetSettings),
		alignof(FLoadingWidgetSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingWidgetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LoadingWidgetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoadingWidgetSettings.InnerSingleton, Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LoadingWidgetSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TipSettings;
class UScriptStruct* FTipSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TipSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TipSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("TipSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TipSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FTipSettings>()
{
	return FTipSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTipSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FTextPropertyParams NewProp_TipText_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipText_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TipText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Appearance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipWrapAt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TipWrapAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayTipTextManually_MetaData[];
#endif
		static void NewProp_bSetDisplayTipTextManually_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayTipTextManually;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tips text settings\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Tips text settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTipSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipSettings>();
	}
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_Inner = { "TipText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_MetaData[] = {
		{ "Category", "Tip Settings" },
		{ "Comment", "// The tip text randomly display in the loading screen.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The tip text randomly display in the loading screen." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText = { "TipText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipSettings, TipText), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_MetaData), Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance_MetaData[] = {
		{ "Category", "Tip Settings" },
		{ "Comment", "// Tip text appearance settings\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Tip text appearance settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance_MetaData), Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance_MetaData) }; // 2153280083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt_MetaData[] = {
		{ "Category", "Tip Settings" },
		{ "Comment", "// The size of the tip before it's wrapped to the next line\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The size of the tip before it's wrapped to the next line" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt = { "TipWrapAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipSettings, TipWrapAt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt_MetaData), Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/**\n\x09 * If true, you will have to manually set which TipText index you want to display on the loading screen by calling \"SetDisplayTipTextIndex\" function\n\x09 * in your Blueprint before opening a new level. If the index you set is not valid, then it will display random Tip in the \"TipText\" array.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, you will have to manually set which TipText index you want to display on the loading screen by calling \"SetDisplayTipTextIndex\" function\nin your Blueprint before opening a new level. If the index you set is not valid, then it will display random Tip in the \"TipText\" array." },
	};
#endif
	void Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_SetBit(void* Obj)
	{
		((FTipSettings*)Obj)->bSetDisplayTipTextManually = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually = { "bSetDisplayTipTextManually", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTipSettings), &Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_MetaData), Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"TipSettings",
		Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers),
		sizeof(FTipSettings),
		alignof(FTipSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTipSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTipSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TipSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TipSettings.InnerSingleton, Z_Construct_UScriptStruct_FTipSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TipSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoadingCompleteTextSettings;
class UScriptStruct* FLoadingCompleteTextSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoadingCompleteTextSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoadingCompleteTextSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LoadingCompleteTextSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LoadingCompleteTextSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FLoadingCompleteTextSettings>()
{
	return FLoadingCompleteTextSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingCompleteText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LoadingCompleteText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Appearance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Alignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFadeInOutAnim_MetaData[];
#endif
		static void NewProp_bFadeInOutAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeInOutAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The text that displayed when loading is complete. Ignore this if you don't set \"bShowLoadingCompletedText\" = true\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The text that displayed when loading is complete. Ignore this if you don't set \"bShowLoadingCompletedText\" = true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingCompleteTextSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "Comment", "// The text that shows up when level loading is done.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The text that shows up when level loading is done." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText = { "LoadingCompleteText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, LoadingCompleteText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText_MetaData), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "Comment", "// Text appearance settings\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text appearance settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance_MetaData), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance_MetaData) }; // 2153280083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "Comment", "/** The alignment of the text.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Alignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment_MetaData), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "Comment", "/** Text padding. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Text padding." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding_MetaData), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "Comment", "// Animate the text?\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Animate the text?" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_SetBit(void* Obj)
	{
		((FLoadingCompleteTextSettings*)Obj)->bFadeInOutAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim = { "bFadeInOutAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadingCompleteTextSettings), &Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_MetaData), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Animation speed\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Animation speed" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed = { "AnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, AnimationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed_MetaData), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"LoadingCompleteTextSettings",
		Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers),
		sizeof(FLoadingCompleteTextSettings),
		alignof(FLoadingCompleteTextSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingCompleteTextSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LoadingCompleteTextSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoadingCompleteTextSettings.InnerSingleton, Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LoadingCompleteTextSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ALoadingScreenSettings;
class UScriptStruct* FALoadingScreenSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ALoadingScreenSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ALoadingScreenSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALoadingScreenSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ALoadingScreenSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ALoadingScreenSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FALoadingScreenSettings>()
{
	return FALoadingScreenSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLoadingScreenDisplayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLoadingScreenDisplayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompleteWhenLoadingCompletes_MetaData[];
#endif
		static void NewProp_bAutoCompleteWhenLoadingCompletes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompleteWhenLoadingCompletes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoviesAreSkippable_MetaData[];
#endif
		static void NewProp_bMoviesAreSkippable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoviesAreSkippable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForManualStop_MetaData[];
#endif
		static void NewProp_bWaitForManualStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForManualStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInEarlyStartup_MetaData[];
#endif
		static void NewProp_bAllowInEarlyStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInEarlyStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowEngineTick_MetaData[];
#endif
		static void NewProp_bAllowEngineTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEngineTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MoviePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoviePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MoviePaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShuffle_MetaData[];
#endif
		static void NewProp_bShuffle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayMovieIndexManually_MetaData[];
#endif
		static void NewProp_bSetDisplayMovieIndexManually_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayMovieIndexManually;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWidgetOverlay_MetaData[];
#endif
		static void NewProp_bShowWidgetOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWidgetOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLoadingCompleteText_MetaData[];
#endif
		static void NewProp_bShowLoadingCompleteText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLoadingCompleteText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingCompleteTextSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingCompleteTextSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipWidget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingWidget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Layout_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Layout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Loading Screen Settings\n */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading Screen Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALoadingScreenSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "// The minimum time that a loading screen should be opened for, -1 if there is no minimum time. I recommend set it to -1.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The minimum time that a loading screen should be opened for, -1 if there is no minimum time. I recommend set it to -1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime = { "MinimumLoadingScreenDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, MinimumLoadingScreenDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "// If true, the loading screen will disappear as soon as loading is done.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, the loading screen will disappear as soon as loading is done." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bAutoCompleteWhenLoadingCompletes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes = { "bAutoCompleteWhenLoadingCompletes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "// If true, movies can be skipped by clicking the loading screen as long as loading is done.\n" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, movies can be skipped by clicking the loading screen as long as loading is done." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bMoviesAreSkippable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable = { "bMoviesAreSkippable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/** \n\x09 * If true, movie playback continue until Stop is called.\n\x09 * \n\x09 * NOTE: If set \"Minimum Loading Screen Display Time\" = -1, it will allow players to press any key to stop the loading screen.\n\x09 * If \"Minimum Loading Screen Display Time\" >= 0, you have to call \"StopLoadingScreen\" in the BeginPlay event \n\x09 * of your GameInstance, GameMode, or PlayerController blueprint to stop the loading screen (\"bAllowEngineTick\" must be true)\n\x09 **/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, movie playback continue until Stop is called.\n\nNOTE: If set \"Minimum Loading Screen Display Time\" = -1, it will allow players to press any key to stop the loading screen.\nIf \"Minimum Loading Screen Display Time\" >= 0, you have to call \"StopLoadingScreen\" in the BeginPlay event\nof your GameInstance, GameMode, or PlayerController blueprint to stop the loading screen (\"bAllowEngineTick\" must be true)" },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bWaitForManualStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop = { "bWaitForManualStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/** If true loading screens here cannot have any uobjects of any kind or use any engine features at all. This will start the movies very early as a result on platforms that support it */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true loading screens here cannot have any uobjects of any kind or use any engine features at all. This will start the movies very early as a result on platforms that support it" },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bAllowInEarlyStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup = { "bAllowInEarlyStartup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/** If true, this will call the engine tick while the game thread is stalled waiting for a loading movie to finish. This only works for post-startup load screens and is potentially unsafe */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, this will call the engine tick while the game thread is stalled waiting for a loading movie to finish. This only works for post-startup load screens and is potentially unsafe" },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bAllowEngineTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick = { "bAllowEngineTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/** Should we just play back, loop, etc.  NOTE: if the playback type is MT_LoopLast, then bAutoCompleteWhenLoadingCompletes will be togged on when the last movie is hit*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should we just play back, loop, etc.  NOTE: if the playback type is MT_LoopLast, then bAutoCompleteWhenLoadingCompletes will be togged on when the last movie is hit" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType = { "PlaybackType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, PlaybackType), Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType_MetaData) }; // 3042039471
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_Inner = { "MoviePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/**\n\x09 * All movie files must be locate at Content/Movies/ directory. Suggested format: MPEG-4 Movie (mp4). Enter file path/name without the extension.\n\x09 * E.g., if you have a movie name my_movie.mp4 in the 'Content/Movies' folder, then enter my_movie in the input field.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "All movie files must be locate at Content/Movies/ directory. Suggested format: MPEG-4 Movie (mp4). Enter file path/name without the extension.\nE.g., if you have a movie name my_movie.mp4 in the 'Content/Movies' folder, then enter my_movie in the input field." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths = { "MoviePaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, MoviePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/**\n\x09 * If true, shuffle the movies list before playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, shuffle the movies list before playing." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bShuffle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle = { "bShuffle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_MetaData[] = {
		{ "Category", "Movies Settings" },
		{ "Comment", "/**\n\x09 * If true, the \"Shuffle\" option will be ignored, and you will have to manually set which Movie index you want to display on the loading screen \n\x09 * by calling \"SetDisplayMovieIndex\" function in your Blueprint before opening a new level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, the \"Shuffle\" option will be ignored, and you will have to manually set which Movie index you want to display on the loading screen\nby calling \"SetDisplayMovieIndex\" function in your Blueprint before opening a new level." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bSetDisplayMovieIndexManually = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually = { "bSetDisplayMovieIndexManually", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/** \n\x09 * Should we show the loading screen widgets (background/tips/loading widget)? Generally you'll want to set this to false if you just want to show a movie.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Should we show the loading screen widgets (background/tips/loading widget)? Generally you'll want to set this to false if you just want to show a movie." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bShowWidgetOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay = { "bShowWidgetOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/**\n\x09 * If true show a text when level loading is completed. Ignore this if you choose \"Show Widget Overlay\" = false\n\x09 *\n\x09 * NOTE: To enable this option properly, you need to set \"Wait For Manual Stop\" = true, and \"Minimum Loading Screen Display Time\" = -1.\n\x09 * This also allows players press any button to stop the Loading Screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true show a text when level loading is completed. Ignore this if you choose \"Show Widget Overlay\" = false\n\nNOTE: To enable this option properly, you need to set \"Wait For Manual Stop\" = true, and \"Minimum Loading Screen Display Time\" = -1.\nThis also allows players press any button to stop the Loading Screen." },
	};
#endif
	void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_SetBit(void* Obj)
	{
		((FALoadingScreenSettings*)Obj)->bShowLoadingCompleteText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText = { "bShowLoadingCompleteText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/**\n\x09 * The text that displayed when loading is complete. Ignore this if you set \"Show Loading Complete Text\" = false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The text that displayed when loading is complete. Ignore this if you set \"Show Loading Complete Text\" = false." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings = { "LoadingCompleteTextSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, LoadingCompleteTextSettings), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings_MetaData) }; // 2209672645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/** Background widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, Background), Z_Construct_UScriptStruct_FBackgroundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background_MetaData) }; // 1260300565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/** Tip widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Tip widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget = { "TipWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, TipWidget), Z_Construct_UScriptStruct_FTipSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget_MetaData) }; // 1535799351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/** Loading widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Loading widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget = { "LoadingWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, LoadingWidget), Z_Construct_UScriptStruct_FLoadingWidgetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget_MetaData) }; // 3816857265
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
		{ "Comment", "/**\n\x09 * Select async loading screen Layout. Ignore this if you choose \"Show Widget Overlay = false\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Select async loading screen Layout. Ignore this if you choose \"Show Widget Overlay = false\"" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, Layout), Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_MetaData), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_MetaData) }; // 1048329593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"ALoadingScreenSettings",
		Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers),
		sizeof(FALoadingScreenSettings),
		alignof(FALoadingScreenSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FALoadingScreenSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ALoadingScreenSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ALoadingScreenSettings.InnerSingleton, Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ALoadingScreenSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassicLayoutSettings;
class UScriptStruct* FClassicLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassicLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassicLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassicLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ClassicLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ClassicLayoutSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FClassicLayoutSettings>()
{
	return FClassicLayoutSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWidgetAtBottom_MetaData[];
#endif
		static void NewProp_bIsWidgetAtBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWidgetAtBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtLeft_MetaData[];
#endif
		static void NewProp_bIsLoadingWidgetAtLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BorderHorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Classic Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Classic Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassicLayoutSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** Is the border that contains loading and tip widget located at the bottom or top? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is the border that contains loading and tip widget located at the bottom or top?" },
	};
#endif
	void Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_SetBit(void* Obj)
	{
		((FClassicLayoutSettings*)Obj)->bIsWidgetAtBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom = { "bIsWidgetAtBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClassicLayoutSettings), &Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_MetaData), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** Is loading widget on the left of the tip? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is loading widget on the left of the tip?" },
	};
#endif
	void Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_SetBit(void* Obj)
	{
		((FClassicLayoutSettings*)Obj)->bIsLoadingWidgetAtLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft = { "bIsLoadingWidgetAtLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClassicLayoutSettings), &Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_MetaData), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** The empty space between loading widget and the tip.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The empty space between loading widget and the tip." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, Space), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space_MetaData), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** The alignment of the tips. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the tips." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment_MetaData), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** The horizontal alignment of the border background.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the border background." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment = { "BorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData) }; // 483256341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** The padding area between the border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the border and the widget it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding_MetaData), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Classic Layout" },
		{ "Comment", "/** Background appearance settings for the border widget */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for the border widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground_MetaData), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"ClassicLayoutSettings",
		Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers),
		sizeof(FClassicLayoutSettings),
		alignof(FClassicLayoutSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClassicLayoutSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassicLayoutSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassicLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassicLayoutSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CenterLayoutSettings;
class UScriptStruct* FCenterLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CenterLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CenterLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCenterLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("CenterLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CenterLayoutSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FCenterLayoutSettings>()
{
	return FCenterLayoutSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTipAtBottom_MetaData[];
#endif
		static void NewProp_bIsTipAtBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTipAtBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BorderHorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderVerticalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderVerticalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Center Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Center Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCenterLayoutSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** Is tip located at the bottom or top? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is tip located at the bottom or top?" },
	};
#endif
	void Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_SetBit(void* Obj)
	{
		((FCenterLayoutSettings*)Obj)->bIsTipAtBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom = { "bIsTipAtBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCenterLayoutSettings), &Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_MetaData), Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** The alignment of the tips. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the tips." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment_MetaData), Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** The horizontal alignment of the border.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the border." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment = { "BorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData), Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment_MetaData) }; // 483256341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** Offset to bottom or top of the screen depending on the tip located at the bottom or top position.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Offset to bottom or top of the screen depending on the tip located at the bottom or top position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset = { "BorderVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderVerticalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset_MetaData), Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** The padding area between the border and the tips it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the border and the tips it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding_MetaData), Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Center Layout" },
		{ "Comment", "/** Background appearance settings for tip area */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for tip area" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground_MetaData), Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"CenterLayoutSettings",
		Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers),
		sizeof(FCenterLayoutSettings),
		alignof(FCenterLayoutSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCenterLayoutSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CenterLayoutSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CenterLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CenterLayoutSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LetterboxLayoutSettings;
class UScriptStruct* FLetterboxLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LetterboxLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LetterboxLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLetterboxLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LetterboxLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LetterboxLayoutSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FLetterboxLayoutSettings>()
{
	return FLetterboxLayoutSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtTop_MetaData[];
#endif
		static void NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingWidgetAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopBorderHorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TopBorderHorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomBorderHorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BottomBorderHorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopBorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopBorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomBorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BottomBorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopBorderBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopBorderBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomBorderBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BottomBorderBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Letterbox Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Letterbox Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLetterboxLayoutSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** Is loading widget located at the bottom or top? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is loading widget located at the bottom or top?" },
	};
#endif
	void Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj)
	{
		((FLetterboxLayoutSettings*)Obj)->bIsLoadingWidgetAtTop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop = { "bIsLoadingWidgetAtTop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLetterboxLayoutSettings), &Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The alignment of the tips. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the tips." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The alignment of the loading widget. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the loading widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment = { "LoadingWidgetAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, LoadingWidgetAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The horizontal alignment of the top border.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the top border." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment = { "TopBorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment_MetaData) }; // 483256341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The horizontal alignment of the bottom border.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The horizontal alignment of the bottom border." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment = { "BottomBorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment_MetaData) }; // 483256341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The top padding area between the border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The top padding area between the border and the widget it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding = { "TopBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** The bottom padding area between the border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The bottom padding area between the border and the widget it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding = { "BottomBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** Background appearance settings for top border */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for top border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground = { "TopBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground_MetaData) }; // 899956612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground_MetaData[] = {
		{ "Category", "Letterbox Layout" },
		{ "Comment", "/** Background appearance settings for bottom border */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for bottom border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground = { "BottomBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground_MetaData), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"LetterboxLayoutSettings",
		Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers),
		sizeof(FLetterboxLayoutSettings),
		alignof(FLetterboxLayoutSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLetterboxLayoutSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LetterboxLayoutSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LetterboxLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LetterboxLayoutSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SidebarLayoutSettings;
class UScriptStruct* FSidebarLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SidebarLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SidebarLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSidebarLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("SidebarLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SidebarLayoutSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FSidebarLayoutSettings>()
{
	return FSidebarLayoutSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWidgetAtRight_MetaData[];
#endif
		static void NewProp_bIsWidgetAtRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWidgetAtRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtTop_MetaData[];
#endif
		static void NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingWidgetAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BorderVerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderHorizontalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Sidebar Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Sidebar Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSidebarLayoutSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** Is the border that contains loading and tip widgets located at the right or left? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is the border that contains loading and tip widgets located at the right or left?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_SetBit(void* Obj)
	{
		((FSidebarLayoutSettings*)Obj)->bIsWidgetAtRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight = { "bIsWidgetAtRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSidebarLayoutSettings), &Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** Is loading widget on the top of the tip? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is loading widget on the top of the tip?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj)
	{
		((FSidebarLayoutSettings*)Obj)->bIsLoadingWidgetAtTop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop = { "bIsLoadingWidgetAtTop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSidebarLayoutSettings), &Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The empty space between loading widget and the tip.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The empty space between loading widget and the tip." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, Space), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the vertical box that contains loading/tip widgets. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the vertical box that contains loading/tip widgets." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment_MetaData) }; // 1653762848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The alignment of the loading widget. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the loading widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment = { "LoadingWidgetAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, LoadingWidgetAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The alignment of the tips. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The alignment of the tips." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment_MetaData) }; // 2777906451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the border background that contains all widgets. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the border background that contains all widgets." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment = { "BorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment_MetaData) }; // 1653762848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** Offset to left or right of the screen depending on the border that contains loading and tip widgets located at the left or right position.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Offset to left or right of the screen depending on the border that contains loading and tip widgets located at the left or right position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset = { "BorderHorizontalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderHorizontalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** The padding area between the border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the border and the widget it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Sidebar Layout" },
		{ "Comment", "/** Background appearance settings for the border widget */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for the border widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground_MetaData), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"SidebarLayoutSettings",
		Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers),
		sizeof(FSidebarLayoutSettings),
		alignof(FSidebarLayoutSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSidebarLayoutSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SidebarLayoutSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SidebarLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SidebarLayoutSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DualSidebarLayoutSettings;
class UScriptStruct* FDualSidebarLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DualSidebarLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DualSidebarLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("DualSidebarLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DualSidebarLayoutSettings.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UScriptStruct* StaticStruct<FDualSidebarLayoutSettings>()
{
	return FDualSidebarLayoutSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtRight_MetaData[];
#endif
		static void NewProp_bIsLoadingWidgetAtRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeftVerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RightVerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBorderVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeftBorderVerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBorderVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RightBorderVerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftBorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightBorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBorderBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftBorderBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBorderBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightBorderBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Dual Sidebar Layout settings*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Dual Sidebar Layout settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDualSidebarLayoutSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** Is loading widget on the right or left border? */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Is loading widget on the right or left border?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_SetBit(void* Obj)
	{
		((FDualSidebarLayoutSettings*)Obj)->bIsLoadingWidgetAtRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight = { "bIsLoadingWidgetAtRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDualSidebarLayoutSettings), &Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the left widget. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the left widget." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment = { "LeftVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment_MetaData) }; // 1653762848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the right widget. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the right widget." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment = { "RightVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment_MetaData) }; // 1653762848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the left border background that contains all widgets. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the left border background that contains all widgets." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment = { "LeftBorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment_MetaData) }; // 1653762848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The vertical alignment of the right border background that contains all widgets. */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The vertical alignment of the right border background that contains all widgets." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment = { "RightBorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment_MetaData) }; // 1653762848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The padding area between the left border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the left border and the widget it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding = { "LeftBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** The padding area between the right border and the widget it contains.*/" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The padding area between the right border and the widget it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding = { "RightBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** Background appearance settings for the left border widget */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for the left border widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground = { "LeftBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground_MetaData) }; // 899956612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
		{ "Comment", "/** Background appearance settings for the right border widget */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Background appearance settings for the right border widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground = { "RightBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground_MetaData), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground_MetaData) }; // 899956612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
		nullptr,
		&NewStructOps,
		"DualSidebarLayoutSettings",
		Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers),
		sizeof(FDualSidebarLayoutSettings),
		alignof(FDualSidebarLayoutSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDualSidebarLayoutSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DualSidebarLayoutSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DualSidebarLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DualSidebarLayoutSettings.InnerSingleton;
	}
	void ULoadingScreenSettings::StaticRegisterNativesULoadingScreenSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadingScreenSettings);
	UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister()
	{
		return ULoadingScreenSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreloadBackgroundImages_MetaData[];
#endif
		static void NewProp_bPreloadBackgroundImages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreloadBackgroundImages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupLoadingScreen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartupLoadingScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLoadingScreen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLoadingScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Classic_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Classic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Letterbox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Letterbox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sidebar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sidebar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DualSidebar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DualSidebar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Async Loading Screen Settings \n */" },
		{ "DisplayName", "Async Loading Screen" },
		{ "IncludePath", "LoadingScreenSettings.h" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Async Loading Screen Settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * If true, load all background images at the start of the game.\n\x09 * \n\x09 * This is a workaround for the issue when the background image \n\x09 * is loaded too late with the wrong image scaling. \n\x09 * \n\x09 * This issue only happens in the Standalone or Launch mode.\n\x09 * The packaged game should work fine.\n\x09 * \n\x09 * If you don't encounter this issue when developing, don't enable \n\x09 * this option, since it will keep the background images in the \n\x09 * memory all the time, therefore consumes memory resources.\n\x09 * \n\x09 * However, you can manually remove all the preloaded background\n\x09 * images by calling the Blueprint function \n\x09 * \"RemovePreloadedBackgroundImages\"\n\x09 * \n\x09 * You will need to re-load all background images by calling \n\x09 * the Blueprint function \"PreloadBackgroundImages\"\n\x09 * \n\x09 * Note: Call \"PreloadBackgroundImages\" before the \"OpenLevel\"\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "If true, load all background images at the start of the game.\n\nThis is a workaround for the issue when the background image\nis loaded too late with the wrong image scaling.\n\nThis issue only happens in the Standalone or Launch mode.\nThe packaged game should work fine.\n\nIf you don't encounter this issue when developing, don't enable\nthis option, since it will keep the background images in the\nmemory all the time, therefore consumes memory resources.\n\nHowever, you can manually remove all the preloaded background\nimages by calling the Blueprint function\n\"RemovePreloadedBackgroundImages\"\n\nYou will need to re-load all background images by calling\nthe Blueprint function \"PreloadBackgroundImages\"\n\nNote: Call \"PreloadBackgroundImages\" before the \"OpenLevel\"" },
	};
#endif
	void Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages_SetBit(void* Obj)
	{
		((ULoadingScreenSettings*)Obj)->bPreloadBackgroundImages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages = { "bPreloadBackgroundImages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULoadingScreenSettings), &Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages_MetaData), Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * The startup loading screen when you first open the game. Setup any studio logo movies here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The startup loading screen when you first open the game. Setup any studio logo movies here." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen = { "StartupLoadingScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, StartupLoadingScreen), Z_Construct_UScriptStruct_FALoadingScreenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen_MetaData), Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen_MetaData) }; // 2514674308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * The default loading screen that shows up whenever you open a new level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "The default loading screen that shows up whenever you open a new level." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen = { "DefaultLoadingScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, DefaultLoadingScreen), Z_Construct_UScriptStruct_FALoadingScreenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen_MetaData), Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen_MetaData) }; // 2514674308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Classic Layout settings.\n\x09 * The Classic is a simple, generic layout and fits well with many designs.\n\x09 * A border that contains loading and tip widgets can be at the bottom or top.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Classic Layout settings.\nThe Classic is a simple, generic layout and fits well with many designs.\nA border that contains loading and tip widgets can be at the bottom or top." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic = { "Classic", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, Classic), Z_Construct_UScriptStruct_FClassicLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic_MetaData), Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic_MetaData) }; // 1661244037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Center Layout settings.\n\x09 * The loading widget is at the center of the screen, tip widget can be at the bottom or top.\n\x09 * The Center layout is a good choice if your loading icon is the main design.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Center Layout settings.\nThe loading widget is at the center of the screen, tip widget can be at the bottom or top.\nThe Center layout is a good choice if your loading icon is the main design." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, Center), Z_Construct_UScriptStruct_FCenterLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center_MetaData), Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center_MetaData) }; // 2421431512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Letterbox Layout settings.\n\x09 * The Letterbox layout has two borders on top and bottom of the screen. Loading widget\n\x09 * can be on the top and the tip is at the bottom of the screen, or vice versa.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Letterbox Layout settings.\nThe Letterbox layout has two borders on top and bottom of the screen. Loading widget\ncan be on the top and the tip is at the bottom of the screen, or vice versa." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox = { "Letterbox", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, Letterbox), Z_Construct_UScriptStruct_FLetterboxLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox_MetaData), Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox_MetaData) }; // 2496765698
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Sidebar Layout settings.\n\x09 * The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar \n\x09 * is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Sidebar Layout settings.\nThe Sidebar layout has a vertical border on the left or right of the screen. The Sidebar\nis suitable for storytelling, long paragraphs due to the height of the tip widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar = { "Sidebar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, Sidebar), Z_Construct_UScriptStruct_FSidebarLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar_MetaData), Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar_MetaData) }; // 665929474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * Dual Sidebar Layout settings\n\x09 * Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\n\x09 * The Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ToolTip", "Dual Sidebar Layout settings\nSimilar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\nThe Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar = { "DualSidebar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, DualSidebar), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar_MetaData), Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar_MetaData) }; // 3396184363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams = {
		&ULoadingScreenSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULoadingScreenSettings()
	{
		if (!Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton, Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton;
	}
	template<> ASYNCLOADINGSCREEN_API UClass* StaticClass<ULoadingScreenSettings>()
	{
		return ULoadingScreenSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenSettings);
	ULoadingScreenSettings::~ULoadingScreenSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::EnumInfo[] = {
		{ EAsyncLoadingScreenLayout_StaticEnum, TEXT("EAsyncLoadingScreenLayout"), &Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1048329593U) },
		{ ELoadingIconType_StaticEnum, TEXT("ELoadingIconType"), &Z_Registration_Info_UEnum_ELoadingIconType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3028597685U) },
		{ ELoadingWidgetType_StaticEnum, TEXT("ELoadingWidgetType"), &Z_Registration_Info_UEnum_ELoadingWidgetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1798306888U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::ScriptStructInfo[] = {
		{ FWidgetAlignment::StaticStruct, Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewStructOps, TEXT("WidgetAlignment"), &Z_Registration_Info_UScriptStruct_WidgetAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetAlignment), 2777906451U) },
		{ FTextAppearance::StaticStruct, Z_Construct_UScriptStruct_FTextAppearance_Statics::NewStructOps, TEXT("TextAppearance"), &Z_Registration_Info_UScriptStruct_TextAppearance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextAppearance), 2153280083U) },
		{ FThrobberSettings::StaticStruct, Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewStructOps, TEXT("ThrobberSettings"), &Z_Registration_Info_UScriptStruct_ThrobberSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThrobberSettings), 3366687758U) },
		{ FCircularThrobberSettings::StaticStruct, Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewStructOps, TEXT("CircularThrobberSettings"), &Z_Registration_Info_UScriptStruct_CircularThrobberSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCircularThrobberSettings), 2020075600U) },
		{ FImageSequenceSettings::StaticStruct, Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewStructOps, TEXT("ImageSequenceSettings"), &Z_Registration_Info_UScriptStruct_ImageSequenceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageSequenceSettings), 2534377216U) },
		{ FBackgroundSettings::StaticStruct, Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewStructOps, TEXT("BackgroundSettings"), &Z_Registration_Info_UScriptStruct_BackgroundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBackgroundSettings), 1260300565U) },
		{ FLoadingWidgetSettings::StaticStruct, Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewStructOps, TEXT("LoadingWidgetSettings"), &Z_Registration_Info_UScriptStruct_LoadingWidgetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadingWidgetSettings), 3816857265U) },
		{ FTipSettings::StaticStruct, Z_Construct_UScriptStruct_FTipSettings_Statics::NewStructOps, TEXT("TipSettings"), &Z_Registration_Info_UScriptStruct_TipSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTipSettings), 1535799351U) },
		{ FLoadingCompleteTextSettings::StaticStruct, Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewStructOps, TEXT("LoadingCompleteTextSettings"), &Z_Registration_Info_UScriptStruct_LoadingCompleteTextSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadingCompleteTextSettings), 2209672645U) },
		{ FALoadingScreenSettings::StaticStruct, Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewStructOps, TEXT("ALoadingScreenSettings"), &Z_Registration_Info_UScriptStruct_ALoadingScreenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALoadingScreenSettings), 2514674308U) },
		{ FClassicLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewStructOps, TEXT("ClassicLayoutSettings"), &Z_Registration_Info_UScriptStruct_ClassicLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassicLayoutSettings), 1661244037U) },
		{ FCenterLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewStructOps, TEXT("CenterLayoutSettings"), &Z_Registration_Info_UScriptStruct_CenterLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCenterLayoutSettings), 2421431512U) },
		{ FLetterboxLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewStructOps, TEXT("LetterboxLayoutSettings"), &Z_Registration_Info_UScriptStruct_LetterboxLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLetterboxLayoutSettings), 2496765698U) },
		{ FSidebarLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewStructOps, TEXT("SidebarLayoutSettings"), &Z_Registration_Info_UScriptStruct_SidebarLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSidebarLayoutSettings), 665929474U) },
		{ FDualSidebarLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewStructOps, TEXT("DualSidebarLayoutSettings"), &Z_Registration_Info_UScriptStruct_DualSidebarLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDualSidebarLayoutSettings), 3396184363U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingScreenSettings, ULoadingScreenSettings::StaticClass, TEXT("ULoadingScreenSettings"), &Z_Registration_Info_UClass_ULoadingScreenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingScreenSettings), 3226461695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_2208790602(TEXT("/Script/AsyncLoadingScreen"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
