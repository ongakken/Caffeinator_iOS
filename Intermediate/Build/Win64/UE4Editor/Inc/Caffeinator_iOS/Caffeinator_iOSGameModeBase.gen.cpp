// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caffeinator_iOS/Caffeinator_iOSGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaffeinator_iOSGameModeBase() {}
// Cross Module References
	CAFFEINATOR_IOS_API UClass* Z_Construct_UClass_ACaffeinator_iOSGameModeBase_NoRegister();
	CAFFEINATOR_IOS_API UClass* Z_Construct_UClass_ACaffeinator_iOSGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Caffeinator_iOS();
// End Cross Module References
	void ACaffeinator_iOSGameModeBase::StaticRegisterNativesACaffeinator_iOSGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACaffeinator_iOSGameModeBase_NoRegister()
	{
		return ACaffeinator_iOSGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACaffeinator_iOSGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaffeinator_iOSGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Caffeinator_iOS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaffeinator_iOSGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Caffeinator_iOSGameModeBase.h" },
		{ "ModuleRelativePath", "Caffeinator_iOSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaffeinator_iOSGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaffeinator_iOSGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaffeinator_iOSGameModeBase_Statics::ClassParams = {
		&ACaffeinator_iOSGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACaffeinator_iOSGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACaffeinator_iOSGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaffeinator_iOSGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaffeinator_iOSGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaffeinator_iOSGameModeBase, 3344325173);
	template<> CAFFEINATOR_IOS_API UClass* StaticClass<ACaffeinator_iOSGameModeBase>()
	{
		return ACaffeinator_iOSGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaffeinator_iOSGameModeBase(Z_Construct_UClass_ACaffeinator_iOSGameModeBase, &ACaffeinator_iOSGameModeBase::StaticClass, TEXT("/Script/Caffeinator_iOS"), TEXT("ACaffeinator_iOSGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaffeinator_iOSGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
