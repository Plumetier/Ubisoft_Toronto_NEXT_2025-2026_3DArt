// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ubisoft_3D_ArtGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUbisoft_3D_ArtGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UBISOFT_3D_ART_API UClass* Z_Construct_UClass_AUbisoft_3D_ArtGameMode();
UBISOFT_3D_ART_API UClass* Z_Construct_UClass_AUbisoft_3D_ArtGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ubisoft_3D_Art();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUbisoft_3D_ArtGameMode **************************************************
void AUbisoft_3D_ArtGameMode::StaticRegisterNativesAUbisoft_3D_ArtGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode;
UClass* AUbisoft_3D_ArtGameMode::GetPrivateStaticClass()
{
	using TClass = AUbisoft_3D_ArtGameMode;
	if (!Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Ubisoft_3D_ArtGameMode"),
			Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode.InnerSingleton,
			StaticRegisterNativesAUbisoft_3D_ArtGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUbisoft_3D_ArtGameMode_NoRegister()
{
	return AUbisoft_3D_ArtGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUbisoft_3D_ArtGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Ubisoft_3D_ArtGameMode.h" },
		{ "ModuleRelativePath", "Ubisoft_3D_ArtGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUbisoft_3D_ArtGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUbisoft_3D_ArtGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Ubisoft_3D_Art,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUbisoft_3D_ArtGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUbisoft_3D_ArtGameMode_Statics::ClassParams = {
	&AUbisoft_3D_ArtGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUbisoft_3D_ArtGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUbisoft_3D_ArtGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUbisoft_3D_ArtGameMode()
{
	if (!Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode.OuterSingleton, Z_Construct_UClass_AUbisoft_3D_ArtGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUbisoft_3D_ArtGameMode);
AUbisoft_3D_ArtGameMode::~AUbisoft_3D_ArtGameMode() {}
// ********** End Class AUbisoft_3D_ArtGameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_p0bis_OneDrive_Documents_GitHub_Ubisoft_Toronto_NEXT_2025_2026_3DArt_Ubisoft_3D_Art_Source_Ubisoft_3D_Art_Ubisoft_3D_ArtGameMode_h__Script_Ubisoft_3D_Art_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUbisoft_3D_ArtGameMode, AUbisoft_3D_ArtGameMode::StaticClass, TEXT("AUbisoft_3D_ArtGameMode"), &Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUbisoft_3D_ArtGameMode), 2838658958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_p0bis_OneDrive_Documents_GitHub_Ubisoft_Toronto_NEXT_2025_2026_3DArt_Ubisoft_3D_Art_Source_Ubisoft_3D_Art_Ubisoft_3D_ArtGameMode_h__Script_Ubisoft_3D_Art_2878799(TEXT("/Script/Ubisoft_3D_Art"),
	Z_CompiledInDeferFile_FID_Users_p0bis_OneDrive_Documents_GitHub_Ubisoft_Toronto_NEXT_2025_2026_3DArt_Ubisoft_3D_Art_Source_Ubisoft_3D_Art_Ubisoft_3D_ArtGameMode_h__Script_Ubisoft_3D_Art_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_p0bis_OneDrive_Documents_GitHub_Ubisoft_Toronto_NEXT_2025_2026_3DArt_Ubisoft_3D_Art_Source_Ubisoft_3D_Art_Ubisoft_3D_ArtGameMode_h__Script_Ubisoft_3D_Art_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
