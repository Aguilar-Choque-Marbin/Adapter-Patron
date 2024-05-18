// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ADAPTERAUXILIATURA_AdapterAuxiliaturaProjectile_generated_h
#error "AdapterAuxiliaturaProjectile.generated.h already included, missing '#pragma once' in AdapterAuxiliaturaProjectile.h"
#endif
#define ADAPTERAUXILIATURA_AdapterAuxiliaturaProjectile_generated_h

#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_SPARSE_DATA
#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdapterAuxiliaturaProjectile(); \
	friend struct Z_Construct_UClass_AAdapterAuxiliaturaProjectile_Statics; \
public: \
	DECLARE_CLASS(AAdapterAuxiliaturaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterAuxiliatura"), NO_API) \
	DECLARE_SERIALIZER(AAdapterAuxiliaturaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAdapterAuxiliaturaProjectile(); \
	friend struct Z_Construct_UClass_AAdapterAuxiliaturaProjectile_Statics; \
public: \
	DECLARE_CLASS(AAdapterAuxiliaturaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterAuxiliatura"), NO_API) \
	DECLARE_SERIALIZER(AAdapterAuxiliaturaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdapterAuxiliaturaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdapterAuxiliaturaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdapterAuxiliaturaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterAuxiliaturaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdapterAuxiliaturaProjectile(AAdapterAuxiliaturaProjectile&&); \
	NO_API AAdapterAuxiliaturaProjectile(const AAdapterAuxiliaturaProjectile&); \
public:


#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdapterAuxiliaturaProjectile(AAdapterAuxiliaturaProjectile&&); \
	NO_API AAdapterAuxiliaturaProjectile(const AAdapterAuxiliaturaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdapterAuxiliaturaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterAuxiliaturaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdapterAuxiliaturaProjectile)


#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AAdapterAuxiliaturaProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAdapterAuxiliaturaProjectile, ProjectileMovement); }


#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_12_PROLOG
#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_SPARSE_DATA \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_RPC_WRAPPERS \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_INCLASS \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_SPARSE_DATA \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_INCLASS_NO_PURE_DECLS \
	AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERAUXILIATURA_API UClass* StaticClass<class AAdapterAuxiliaturaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdapterAuxiliatura_Source_AdapterAuxiliatura_AdapterAuxiliaturaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
