// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdapterAuxiliatura/Adaptador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptador() {}
// Cross Module References
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_AAdaptador_NoRegister();
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_AAdaptador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdapterAuxiliatura();
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_ABall_NoRegister();
	ADAPTERAUXILIATURA_API UClass* Z_Construct_UClass_UIBounceBall_NoRegister();
// End Cross Module References
	void AAdaptador::StaticRegisterNativesAAdaptador()
	{
	}
	UClass* Z_Construct_UClass_AAdaptador_NoRegister()
	{
		return AAdaptador::StaticClass();
	}
	struct Z_Construct_UClass_AAdaptador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ball;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdaptador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdapterAuxiliatura,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Adaptador.h" },
		{ "ModuleRelativePath", "Adaptador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptador_Statics::NewProp_ball_MetaData[] = {
		{ "Category", "Ball Adapter" },
		{ "ModuleRelativePath", "Adaptador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdaptador_Statics::NewProp_ball = { "ball", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdaptador, ball), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdaptador_Statics::NewProp_ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptador_Statics::NewProp_ball_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdaptador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdaptador_Statics::NewProp_ball,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAdaptador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBounceBall_NoRegister, (int32)VTABLE_OFFSET(AAdaptador, IIBounceBall), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdaptador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdaptador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdaptador_Statics::ClassParams = {
		&AAdaptador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdaptador_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptador_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdaptador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdaptador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdaptador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdaptador, 2802354132);
	template<> ADAPTERAUXILIATURA_API UClass* StaticClass<AAdaptador>()
	{
		return AAdaptador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdaptador(Z_Construct_UClass_AAdaptador, &AAdaptador::StaticClass, TEXT("/Script/AdapterAuxiliatura"), TEXT("AAdaptador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdaptador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
