// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task10/Task10GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask10GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TASK10_API UClass* Z_Construct_UClass_ATask10GameMode();
TASK10_API UClass* Z_Construct_UClass_ATask10GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task10();
// End Cross Module References

// Begin Class ATask10GameMode
void ATask10GameMode::StaticRegisterNativesATask10GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATask10GameMode);
UClass* Z_Construct_UClass_ATask10GameMode_NoRegister()
{
	return ATask10GameMode::StaticClass();
}
struct Z_Construct_UClass_ATask10GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Task10GameMode.h" },
		{ "ModuleRelativePath", "Task10GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATask10GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATask10GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Task10,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATask10GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATask10GameMode_Statics::ClassParams = {
	&ATask10GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATask10GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATask10GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATask10GameMode()
{
	if (!Z_Registration_Info_UClass_ATask10GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATask10GameMode.OuterSingleton, Z_Construct_UClass_ATask10GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATask10GameMode.OuterSingleton;
}
template<> TASK10_API UClass* StaticClass<ATask10GameMode>()
{
	return ATask10GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATask10GameMode);
ATask10GameMode::~ATask10GameMode() {}
// End Class ATask10GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Task10_Source_Task10_Task10GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATask10GameMode, ATask10GameMode::StaticClass, TEXT("ATask10GameMode"), &Z_Registration_Info_UClass_ATask10GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATask10GameMode), 1741844324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Task10_Source_Task10_Task10GameMode_h_3511907089(TEXT("/Script/Task10"),
	Z_CompiledInDeferFile_FID_Task10_Source_Task10_Task10GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Task10_Source_Task10_Task10GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
