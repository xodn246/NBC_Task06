// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task06/Public/A_RotationActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_RotationActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TASK06_API UClass* Z_Construct_UClass_AA_RotationActor();
TASK06_API UClass* Z_Construct_UClass_AA_RotationActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task06();
// End Cross Module References

// Begin Class AA_RotationActor
void AA_RotationActor::StaticRegisterNativesAA_RotationActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_RotationActor);
UClass* Z_Construct_UClass_AA_RotationActor_NoRegister()
{
	return AA_RotationActor::StaticClass();
}
struct Z_Construct_UClass_AA_RotationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "A_RotationActor.h" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "RotateActor|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "RotateActor|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomActor_MetaData[] = {
		{ "Category", "RotateActor|Property|Random" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Random_MaxSpeed_MetaData[] = {
		{ "Category", "RotateActor|Property|Random" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Random_MinSpeed_MetaData[] = {
		{ "Category", "RotateActor|Property|Random" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRoll_MetaData[] = {
		{ "Category", "RotateActor|Property" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePitch_MetaData[] = {
		{ "Category", "RotateActor|Property" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveYaw_MetaData[] = {
		{ "Category", "RotateActor|Property" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollSpeed_MetaData[] = {
		{ "Category", "RotateActor|Property" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchSpeed_MetaData[] = {
		{ "Category", "RotateActor|Property" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[] = {
		{ "Category", "RotateActor|Property" },
		{ "ModuleRelativePath", "Public/A_RotationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static void NewProp_RandomActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Random_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Random_MinSpeed;
	static void NewProp_ActiveRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActiveRoll;
	static void NewProp_ActivePitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivePitch;
	static void NewProp_ActiveYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActiveYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_RotationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_RotationActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_RotationActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
void Z_Construct_UClass_AA_RotationActor_Statics::NewProp_RandomActor_SetBit(void* Obj)
{
	((AA_RotationActor*)Obj)->RandomActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_RandomActor = { "RandomActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AA_RotationActor), &Z_Construct_UClass_AA_RotationActor_Statics::NewProp_RandomActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomActor_MetaData), NewProp_RandomActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_Random_MaxSpeed = { "Random_MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_RotationActor, Random_MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Random_MaxSpeed_MetaData), NewProp_Random_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_Random_MinSpeed = { "Random_MinSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_RotationActor, Random_MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Random_MinSpeed_MetaData), NewProp_Random_MinSpeed_MetaData) };
void Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActiveRoll_SetBit(void* Obj)
{
	((AA_RotationActor*)Obj)->ActiveRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActiveRoll = { "ActiveRoll", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AA_RotationActor), &Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActiveRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveRoll_MetaData), NewProp_ActiveRoll_MetaData) };
void Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActivePitch_SetBit(void* Obj)
{
	((AA_RotationActor*)Obj)->ActivePitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActivePitch = { "ActivePitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AA_RotationActor), &Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActivePitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePitch_MetaData), NewProp_ActivePitch_MetaData) };
void Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActiveYaw_SetBit(void* Obj)
{
	((AA_RotationActor*)Obj)->ActiveYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActiveYaw = { "ActiveYaw", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AA_RotationActor), &Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActiveYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveYaw_MetaData), NewProp_ActiveYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_RollSpeed = { "RollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_RotationActor, RollSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollSpeed_MetaData), NewProp_RollSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_PitchSpeed = { "PitchSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_RotationActor, PitchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchSpeed_MetaData), NewProp_PitchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_RotationActor_Statics::NewProp_YawSpeed = { "YawSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_RotationActor, YawSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawSpeed_MetaData), NewProp_YawSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_RotationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_RandomActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_Random_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_Random_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActiveRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActivePitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_ActiveYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_RollSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_PitchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_RotationActor_Statics::NewProp_YawSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_RotationActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AA_RotationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Task06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_RotationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_RotationActor_Statics::ClassParams = {
	&AA_RotationActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AA_RotationActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AA_RotationActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_RotationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AA_RotationActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AA_RotationActor()
{
	if (!Z_Registration_Info_UClass_AA_RotationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_RotationActor.OuterSingleton, Z_Construct_UClass_AA_RotationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AA_RotationActor.OuterSingleton;
}
template<> TASK06_API UClass* StaticClass<AA_RotationActor>()
{
	return AA_RotationActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AA_RotationActor);
AA_RotationActor::~AA_RotationActor() {}
// End Class AA_RotationActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_RotationActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AA_RotationActor, AA_RotationActor::StaticClass, TEXT("AA_RotationActor"), &Z_Registration_Info_UClass_AA_RotationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_RotationActor), 2916973138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_RotationActor_h_4061116235(TEXT("/Script/Task06"),
	Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_RotationActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_RotationActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
