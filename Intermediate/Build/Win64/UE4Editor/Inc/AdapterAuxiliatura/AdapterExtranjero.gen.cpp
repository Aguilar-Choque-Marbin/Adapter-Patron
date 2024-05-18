// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdapterAuxiliatura/AdapterExtranjero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdapterExtranjero() {}
// Cross Module References
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_AAdapterExtranjero_NoRegister();
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_AAdapterExtranjero();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdapterAuxiliatura();
// End Cross Module References
	void AAdapterExtranjero::StaticRegisterNativesAAdapterExtranjero()
	{
	}
	UClass* Z_Construct_UClass_AAdapterExtranjero_NoRegister()
	{
		return AAdapterExtranjero::StaticClass();
	}
	struct Z_Construct_UClass_AAdapterExtranjero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdapterExtranjero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdapterAuxiliatura,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterExtranjero_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdapterExtranjero.h" },
		{ "ModuleRelativePath", "AdapterExtranjero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdapterExtranjero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdapterExtranjero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdapterExtranjero_Statics::ClassParams = {
		&AAdapterExtranjero::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdapterExtranjero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterExtranjero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdapterExtranjero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdapterExtranjero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdapterExtranjero, 878950535);
	template<> ADAPTERAUXILIATURA_API UClass* StaticClass<AAdapterExtranjero>()
	{
		return AAdapterExtranjero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdapterExtranjero(Z_Construct_UClass_AAdapterExtranjero, &AAdapterExtranjero::StaticClass, TEXT("/Script/AdapterAuxiliatura"), TEXT("AAdapterExtranjero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdapterExtranjero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
