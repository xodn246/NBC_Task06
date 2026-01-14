// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task06/Public/A_Spawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_Spawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
TASK06_API UClass* Z_Construct_UClass_AA_Spawner();
TASK06_API UClass* Z_Construct_UClass_AA_Spawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task06();
// End Cross Module References

// Begin Class AA_Spawner
void AA_Spawner::StaticRegisterNativesAA_Spawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_Spawner);
UClass* Z_Construct_UClass_AA_Spawner_NoRegister()
{
	return AA_Spawner::StaticClass();
}
struct Z_Construct_UClass_AA_Spawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "A_Spawner.h" },
		{ "ModuleRelativePath", "Public/A_Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "Spawner|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "Spawner|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnActorClass_MetaData[] = {
		{ "Category", "Spawner|Property" },
		{ "ModuleRelativePath", "Public/A_Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Spawner|Property" },
		{ "ModuleRelativePath", "Public/A_Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnActorClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_Spawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_Spawner_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_Spawner, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_Spawner_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_Spawner, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AA_Spawner_Statics::NewProp_SpawnActorClass_Inner = { "SpawnActorClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AA_Spawner_Statics::NewProp_SpawnActorClass = { "SpawnActorClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_Spawner, SpawnActorClass), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnActorClass_MetaData), NewProp_SpawnActorClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AA_Spawner_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_Spawner, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_Spawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_Spawner_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_Spawner_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_Spawner_Statics::NewProp_SpawnActorClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_Spawner_Statics::NewProp_SpawnActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_Spawner_Statics::NewProp_SpawnCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_Spawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AA_Spawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Task06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_Spawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_Spawner_Statics::ClassParams = {
	&AA_Spawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AA_Spawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AA_Spawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_Spawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AA_Spawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AA_Spawner()
{
	if (!Z_Registration_Info_UClass_AA_Spawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_Spawner.OuterSingleton, Z_Construct_UClass_AA_Spawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AA_Spawner.OuterSingleton;
}
template<> TASK06_API UClass* StaticClass<AA_Spawner>()
{
	return AA_Spawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AA_Spawner);
AA_Spawner::~AA_Spawner() {}
// End Class AA_Spawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_Spawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AA_Spawner, AA_Spawner::StaticClass, TEXT("AA_Spawner"), &Z_Registration_Info_UClass_AA_Spawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_Spawner), 3155957321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_Spawner_h_1516747672(TEXT("/Script/Task06"),
	Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Task06_Source_Task06_Public_A_Spawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
