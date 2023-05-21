// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIDemo/UIDemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIDemoGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UIDEMO_API UClass* Z_Construct_UClass_AUIDemoGameMode();
	UIDEMO_API UClass* Z_Construct_UClass_AUIDemoGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UIDemo();
// End Cross Module References
	void AUIDemoGameMode::StaticRegisterNativesAUIDemoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUIDemoGameMode);
	UClass* Z_Construct_UClass_AUIDemoGameMode_NoRegister()
	{
		return AUIDemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUIDemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIDemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UIDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIDemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UIDemoGameMode.h" },
		{ "ModuleRelativePath", "UIDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIDemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIDemoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUIDemoGameMode_Statics::ClassParams = {
		&AUIDemoGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUIDemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIDemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIDemoGameMode()
	{
		if (!Z_Registration_Info_UClass_AUIDemoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUIDemoGameMode.OuterSingleton, Z_Construct_UClass_AUIDemoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUIDemoGameMode.OuterSingleton;
	}
	template<> UIDEMO_API UClass* StaticClass<AUIDemoGameMode>()
	{
		return AUIDemoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIDemoGameMode);
	AUIDemoGameMode::~AUIDemoGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_carl3_OneDrive_Documents_Unreal_Projects_UIDemo_Source_UIDemo_UIDemoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carl3_OneDrive_Documents_Unreal_Projects_UIDemo_Source_UIDemo_UIDemoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUIDemoGameMode, AUIDemoGameMode::StaticClass, TEXT("AUIDemoGameMode"), &Z_Registration_Info_UClass_AUIDemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUIDemoGameMode), 1446293969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_carl3_OneDrive_Documents_Unreal_Projects_UIDemo_Source_UIDemo_UIDemoGameMode_h_1608313720(TEXT("/Script/UIDemo"),
		Z_CompiledInDeferFile_FID_Users_carl3_OneDrive_Documents_Unreal_Projects_UIDemo_Source_UIDemo_UIDemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_carl3_OneDrive_Documents_Unreal_Projects_UIDemo_Source_UIDemo_UIDemoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
