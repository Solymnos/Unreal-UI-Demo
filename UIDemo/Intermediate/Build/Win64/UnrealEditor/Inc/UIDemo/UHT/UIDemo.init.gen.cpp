// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIDemo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UIDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UIDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_UIDemo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UIDemo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x58187A53,
				0xEB190C6F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UIDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UIDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UIDemo(Z_Construct_UPackage__Script_UIDemo, TEXT("/Script/UIDemo"), Z_Registration_Info_UPackage__Script_UIDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x58187A53, 0xEB190C6F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
