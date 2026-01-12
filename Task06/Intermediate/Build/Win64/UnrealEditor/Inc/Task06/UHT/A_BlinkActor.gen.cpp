// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task06/Public/A_BlinkActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_BlinkActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TASK06_API UClass* Z_Construct_UClass_AA_BlinkActor();
TASK06_API UClass* Z_Construct_UClass_AA_BlinkActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task06();
// End Cross Module References

// Begin Class AA_BlinkActor
void AA_BlinkActor::StaticRegisterNativesAA_BlinkActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_BlinkActor);
UClass* Z_Construct_UClass_AA_BlinkActor_NoRegister()
{
	return AA_BlinkActor::StaticClass();
}
struct Z_Construct_UClass_AA_BlinkActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "A_BlinkActor.h" },
		{ "ModuleRelativePath", "Public/A_BlinkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "BlinkActor|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_BlinkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "BlinkActor|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_BlinkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsBlink_MetaData[] = {
		{ "Category", "BlinkActor|Property" },
		{ "ModuleRelativePath", "Public/A_BlinkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleTime_MetaData[] = {
		{ "Category", "BlinkActor|Property" },
		{ "ModuleRelativePath", "Public/A_BlinkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVisibleTime_MetaData[] = {
		{ "Category", "BlinkActor|Property" },
		{ "ModuleRelativePath", "Public/A_BlinkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[] = {
		{ "Category", "BlinkActor|Property" },
		{ "ModuleRelativePath", "Public/A_BlinkActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static void NewProp_IsBlink_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBlink;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVisibleTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_BlinkActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_BlinkActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_BlinkActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
void Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_IsBlink_SetBit(void* Obj)
{
	((AA_BlinkActor*)Obj)->IsBlink = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_IsBlink = { "IsBlink", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AA_BlinkActor), &Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_IsBlink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsBlink_MetaData), NewProp_IsBlink_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_VisibleTime = { "VisibleTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_BlinkActor, VisibleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleTime_MetaData), NewProp_VisibleTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_InVisibleTime = { "InVisibleTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_BlinkActor, InVisibleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVisibleTime_MetaData), NewProp_InVisibleTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_BlinkActor, StartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDelay_MetaData), NewProp_StartDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_BlinkActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_IsBlink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_VisibleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_InVisibleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_BlinkActor_Statics::NewProp_StartDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_BlinkActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AA_BlinkActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Task06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_BlinkActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_BlinkActor_Statics::ClassParams = {
	&AA_BlinkActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AA_BlinkActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AA_BlinkActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_BlinkActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AA_BlinkActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AA_BlinkActor()
{
	if (!Z_Registration_Info_UClass_AA_BlinkActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_BlinkActor.OuterSingleton, Z_Construct_UClass_AA_BlinkActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AA_BlinkActor.OuterSingleton;
}
template<> TASK06_API UClass* StaticClass<AA_BlinkActor>()
{
	return AA_BlinkActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AA_BlinkActor);
AA_BlinkActor::~AA_BlinkActor() {}
// End Class AA_BlinkActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_BlinkActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AA_BlinkActor, AA_BlinkActor::StaticClass, TEXT("AA_BlinkActor"), &Z_Registration_Info_UClass_AA_BlinkActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_BlinkActor), 1339749224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_BlinkActor_h_581549017(TEXT("/Script/Task06"),
	Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_BlinkActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_BlinkActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
