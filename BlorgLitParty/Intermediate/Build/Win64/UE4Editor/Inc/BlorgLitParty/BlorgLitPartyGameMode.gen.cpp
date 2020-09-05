// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlorgLitParty/BlorgLitPartyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlorgLitPartyGameMode() {}
// Cross Module References
	BLORGLITPARTY_API UClass* Z_Construct_UClass_ABlorgLitPartyGameMode_NoRegister();
	BLORGLITPARTY_API UClass* Z_Construct_UClass_ABlorgLitPartyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BlorgLitParty();
// End Cross Module References
	void ABlorgLitPartyGameMode::StaticRegisterNativesABlorgLitPartyGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABlorgLitPartyGameMode_NoRegister()
	{
		return ABlorgLitPartyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABlorgLitPartyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlorgLitPartyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlorgLitParty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlorgLitPartyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BlorgLitPartyGameMode.h" },
		{ "ModuleRelativePath", "BlorgLitPartyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlorgLitPartyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlorgLitPartyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlorgLitPartyGameMode_Statics::ClassParams = {
		&ABlorgLitPartyGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABlorgLitPartyGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlorgLitPartyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlorgLitPartyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlorgLitPartyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlorgLitPartyGameMode, 2154313235);
	template<> BLORGLITPARTY_API UClass* StaticClass<ABlorgLitPartyGameMode>()
	{
		return ABlorgLitPartyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlorgLitPartyGameMode(Z_Construct_UClass_ABlorgLitPartyGameMode, &ABlorgLitPartyGameMode::StaticClass, TEXT("/Script/BlorgLitParty"), TEXT("ABlorgLitPartyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlorgLitPartyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
