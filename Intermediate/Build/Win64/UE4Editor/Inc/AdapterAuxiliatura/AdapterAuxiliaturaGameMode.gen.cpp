// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdapterAuxiliatura/AdapterAuxiliaturaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdapterAuxiliaturaGameMode() {}
// Cross Module References
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_AAdapterAuxiliaturaGameMode_NoRegister();
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_AAdapterAuxiliaturaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AdapterAuxiliatura();
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_AAdapterAuxiliaturaPawn_NoRegister();
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_AAdaptador_NoRegister();
// End Cross Module References
	void AAdapterAuxiliaturaGameMode::StaticRegisterNativesAAdapterAuxiliaturaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAdapterAuxiliaturaGameMode_NoRegister()
	{
		return AAdapterAuxiliaturaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Adaptador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Adaptador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdapterAuxiliatura,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdapterAuxiliaturaGameMode.h" },
		{ "ModuleRelativePath", "AdapterAuxiliaturaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Jugador_MetaData[] = {
		{ "Category", "Game mode" },
		{ "ModuleRelativePath", "AdapterAuxiliaturaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdapterAuxiliaturaGameMode, Jugador), Z_Construct_UClass_AAdapterAuxiliaturaPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Jugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Jugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Adaptador_MetaData[] = {
		{ "Category", "Game mode" },
		{ "ModuleRelativePath", "AdapterAuxiliaturaGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Adaptador = { "Adaptador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdapterAuxiliaturaGameMode, Adaptador), Z_Construct_UClass_AAdaptador_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Adaptador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Adaptador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Jugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::NewProp_Adaptador,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdapterAuxiliaturaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::ClassParams = {
		&AAdapterAuxiliaturaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdapterAuxiliaturaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdapterAuxiliaturaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdapterAuxiliaturaGameMode, 4050072938);
	template<> ADAPTERAUXILIATURA_API UClass* StaticClass<AAdapterAuxiliaturaGameMode>()
	{
		return AAdapterAuxiliaturaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdapterAuxiliaturaGameMode(Z_Construct_UClass_AAdapterAuxiliaturaGameMode, &AAdapterAuxiliaturaGameMode::StaticClass, TEXT("/Script/AdapterAuxiliatura"), TEXT("AAdapterAuxiliaturaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdapterAuxiliaturaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
