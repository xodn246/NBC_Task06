// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "A_Spawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASK06_A_Spawner_generated_h
#error "A_Spawner.generated.h already included, missing '#pragma once' in A_Spawner.h"
#endif
#define TASK06_A_Spawner_generated_h

#define FID_Task06_Source_Task06_Public_A_Spawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAA_Spawner(); \
	friend struct Z_Construct_UClass_AA_Spawner_Statics; \
public: \
	DECLARE_CLASS(AA_Spawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Task06"), NO_API) \
	DECLARE_SERIALIZER(AA_Spawner)


#define FID_Task06_Source_Task06_Public_A_Spawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AA_Spawner(AA_Spawner&&); \
	AA_Spawner(const AA_Spawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AA_Spawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AA_Spawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AA_Spawner) \
	NO_API virtual ~AA_Spawner();


#define FID_Task06_Source_Task06_Public_A_Spawner_h_11_PROLOG
#define FID_Task06_Source_Task06_Public_A_Spawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Task06_Source_Task06_Public_A_Spawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_Task06_Source_Task06_Public_A_Spawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASK06_API UClass* StaticClass<class AA_Spawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Task06_Source_Task06_Public_A_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
