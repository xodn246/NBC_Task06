// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task06/Public/A_MoveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_MoveActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TASK06_API UClass* Z_Construct_UClass_AA_MoveActor();
TASK06_API UClass* Z_Construct_UClass_AA_MoveActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task06();
// End Cross Module References

// Begin Class AA_MoveActor
void AA_MoveActor::StaticRegisterNativesAA_MoveActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_MoveActor);
UClass* Z_Construct_UClass_AA_MoveActor_NoRegister()
{
	return AA_MoveActor::StaticClass();
}
struct Z_Construct_UClass_AA_MoveActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "A_MoveActor.h" },
		{ "ModuleRelativePath", "Public/A_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "MoveActor|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "MoveActor|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDir_MetaData[] = {
		{ "Category", "MoveActor|Property" },
		{ "ModuleRelativePath", "Public/A_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveActor|Property" },
		{ "ModuleRelativePath", "Public/A_MoveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "MoveActor|Property" },
		{ "ModuleRelativePath", "Public/A_MoveActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_MoveActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_MoveActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_MoveActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_MoveActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_MoveActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AA_MoveActor_Statics::NewProp_MoveDir = { "MoveDir", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_MoveActor, MoveDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDir_MetaData), NewProp_MoveDir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_MoveActor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_MoveActor, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AA_MoveActor_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_MoveActor, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_MoveActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_MoveActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_MoveActor_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_MoveActor_Statics::NewProp_MoveDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_MoveActor_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_MoveActor_Statics::NewProp_MaxRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_MoveActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AA_MoveActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Task06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_MoveActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_MoveActor_Statics::ClassParams = {
	&AA_MoveActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AA_MoveActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AA_MoveActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_MoveActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AA_MoveActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AA_MoveActor()
{
	if (!Z_Registration_Info_UClass_AA_MoveActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_MoveActor.OuterSingleton, Z_Construct_UClass_AA_MoveActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AA_MoveActor.OuterSingleton;
}
template<> TASK06_API UClass* StaticClass<AA_MoveActor>()
{
	return AA_MoveActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AA_MoveActor);
AA_MoveActor::~AA_MoveActor() {}
// End Class AA_MoveActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_MoveActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AA_MoveActor, AA_MoveActor::StaticClass, TEXT("AA_MoveActor"), &Z_Registration_Info_UClass_AA_MoveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_MoveActor), 2768651773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_MoveActor_h_2245886254(TEXT("/Script/Task06"),
	Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_MoveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_MoveActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
