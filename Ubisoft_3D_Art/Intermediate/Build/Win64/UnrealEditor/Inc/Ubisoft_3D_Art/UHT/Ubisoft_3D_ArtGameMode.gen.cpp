// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ubisoft_3D_Art/Ubisoft_3D_ArtGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUbisoft_3D_ArtGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UBISOFT_3D_ART_API UClass* Z_Construct_UClass_AUbisoft_3D_ArtGameMode();
UBISOFT_3D_ART_API UClass* Z_Construct_UClass_AUbisoft_3D_ArtGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ubisoft_3D_Art();
// End Cross Module References

// Begin Class AUbisoft_3D_ArtGameMode
void AUbisoft_3D_ArtGameMode::StaticRegisterNativesAUbisoft_3D_ArtGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUbisoft_3D_ArtGameMode);
UClass* Z_Construct_UClass_AUbisoft_3D_ArtGameMode_NoRegister()
{
	return AUbisoft_3D_ArtGameMode::StaticClass();
}
struct Z_Construct_UClass_AUbisoft_3D_ArtGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Ubisoft_3D_ArtGameMode.h" },
		{ "ModuleRelativePath", "Ubisoft_3D_ArtGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
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
	0x008802ACu,
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
template<> UBISOFT_3D_ART_API UClass* StaticClass<AUbisoft_3D_ArtGameMode>()
{
	return AUbisoft_3D_ArtGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUbisoft_3D_ArtGameMode);
AUbisoft_3D_ArtGameMode::~AUbisoft_3D_ArtGameMode() {}
// End Class AUbisoft_3D_ArtGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_p0bis_OneDrive_Documents_GitHub_Ubisoft_Toronto_NEXT_2025_2026_3DArt_Ubisoft_3D_Art_Source_Ubisoft_3D_Art_Ubisoft_3D_ArtGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUbisoft_3D_ArtGameMode, AUbisoft_3D_ArtGameMode::StaticClass, TEXT("AUbisoft_3D_ArtGameMode"), &Z_Registration_Info_UClass_AUbisoft_3D_ArtGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUbisoft_3D_ArtGameMode), 4144307274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_p0bis_OneDrive_Documents_GitHub_Ubisoft_Toronto_NEXT_2025_2026_3DArt_Ubisoft_3D_Art_Source_Ubisoft_3D_Art_Ubisoft_3D_ArtGameMode_h_3080608173(TEXT("/Script/Ubisoft_3D_Art"),
	Z_CompiledInDeferFile_FID_Users_p0bis_OneDrive_Documents_GitHub_Ubisoft_Toronto_NEXT_2025_2026_3DArt_Ubisoft_3D_Art_Source_Ubisoft_3D_Art_Ubisoft_3D_ArtGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_p0bis_OneDrive_Documents_GitHub_Ubisoft_Toronto_NEXT_2025_2026_3DArt_Ubisoft_3D_Art_Source_Ubisoft_3D_Art_Ubisoft_3D_ArtGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
