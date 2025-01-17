// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Source/VRM4ULoader/Public/LoaderBPFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "VRM4U/Public/VrmUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoaderBPFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
	VRM4ULOADER_API UClass* Z_Construct_UClass_ULoaderBPFunctionLibrary();
	VRM4ULOADER_API UClass* Z_Construct_UClass_ULoaderBPFunctionLibrary_NoRegister();
	VRM4ULOADER_API UEnum* Z_Construct_UEnum_VRM4ULoader_EPathType();
	VRM4ULOADER_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo_VRM4U();
	VRM4ULOADER_API UScriptStruct* Z_Construct_UScriptStruct_FReturnedData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathType;
	static UEnum* EPathType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPathType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPathType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4ULoader_EPathType, (UObject*)Z_Construct_UPackage__Script_VRM4ULoader(), TEXT("EPathType"));
		}
		return Z_Registration_Info_UEnum_EPathType.OuterSingleton;
	}
	template<> VRM4ULOADER_API UEnum* StaticEnum<EPathType>()
	{
		return EPathType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4ULoader_EPathType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4ULoader_EPathType_Statics::Enumerators[] = {
		{ "EPathType::Absolute", (int64)EPathType::Absolute },
		{ "EPathType::Relative", (int64)EPathType::Relative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4ULoader_EPathType_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Name", "EPathType::Absolute" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
		{ "Relative.Name", "EPathType::Relative" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4ULoader_EPathType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4ULoader,
		nullptr,
		"EPathType",
		"EPathType",
		Z_Construct_UEnum_VRM4ULoader_EPathType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4ULoader_EPathType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4ULoader_EPathType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRM4ULoader_EPathType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VRM4ULoader_EPathType()
	{
		if (!Z_Registration_Info_UEnum_EPathType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathType.InnerSingleton, Z_Construct_UEnum_VRM4ULoader_EPathType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPathType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshInfo_VRM4U;
class UScriptStruct* FMeshInfo_VRM4U::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInfo_VRM4U.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshInfo_VRM4U.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfo_VRM4U, (UObject*)Z_Construct_UPackage__Script_VRM4ULoader(), TEXT("MeshInfo_VRM4U"));
	}
	return Z_Registration_Info_UScriptStruct_MeshInfo_VRM4U.OuterSingleton;
}
template<> VRM4ULOADER_API UScriptStruct* StaticStruct<FMeshInfo_VRM4U>()
{
	return FMeshInfo_VRM4U::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInfo_VRM4U>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_MetaData), Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_MetaData), Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_Inner = { "Triangles2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2 = { "Triangles2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, Triangles2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_MetaData), Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_MetaData), Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "ReturnedData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"ReturnedData\")\n//\x09\x09TArray<FProcMeshTangent> MeshTangents;\n" },
#endif
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"ReturnedData\")\n       TArray<FProcMeshTangent> MeshTangents;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_MetaData), Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo_VRM4U, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform_MetaData), Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Triangles2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewProp_RelativeTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
		nullptr,
		&NewStructOps,
		"MeshInfo_VRM4U",
		Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::PropPointers),
		sizeof(FMeshInfo_VRM4U),
		alignof(FMeshInfo_VRM4U),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo_VRM4U()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshInfo_VRM4U.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshInfo_VRM4U.InnerSingleton, Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshInfo_VRM4U.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReturnedData;
class UScriptStruct* FReturnedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReturnedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReturnedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReturnedData, (UObject*)Z_Construct_UPackage__Script_VRM4ULoader(), TEXT("ReturnedData"));
	}
	return Z_Registration_Info_UScriptStruct_ReturnedData.OuterSingleton;
}
template<> VRM4ULOADER_API UScriptStruct* StaticStruct<FReturnedData>()
{
	return FReturnedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReturnedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReturnedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReturnedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FReturnedData*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FReturnedData), &Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData), Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes = { "NumMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReturnedData, NumMeshes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData), Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_Inner = { "meshInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshInfo_VRM4U, METADATA_PARAMS(0, nullptr) }; // 3357264304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData[] = {
		{ "Category", "ReturnedData" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo = { "meshInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReturnedData, meshInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData), Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_MetaData) }; // 3357264304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_NumMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReturnedData_Statics::NewProp_meshInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReturnedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
		nullptr,
		&NewStructOps,
		"ReturnedData",
		Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers),
		sizeof(FReturnedData),
		alignof(FReturnedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReturnedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReturnedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FReturnedData()
	{
		if (!Z_Registration_Info_UScriptStruct_ReturnedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReturnedData.InnerSingleton, Z_Construct_UScriptStruct_FReturnedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReturnedData.InnerSingleton;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execVRMGenerateIKRetargeterPose)
	{
		P_GET_OBJECT(UObject,Z_Param_IKRetargeter);
		P_GET_OBJECT(UObject,Z_Param_targetRigIK);
		P_GET_OBJECT(UPoseAsset,Z_Param_targetPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoaderBPFunctionLibrary::VRMGenerateIKRetargeterPose(Z_Param_IKRetargeter,Z_Param_targetRigIK,Z_Param_targetPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execVRMGenerateEpicSkeletonToHumanoidIKRig)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_srcSkeletalMesh);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_outRigIK);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_outIKRetargeter);
		P_GET_OBJECT(UObject,Z_Param_targetRigIK);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoaderBPFunctionLibrary::VRMGenerateEpicSkeletonToHumanoidIKRig(Z_Param_srcSkeletalMesh,Z_Param_Out_outRigIK,Z_Param_Out_outIKRetargeter,Z_Param_targetRigIK);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execCreateTailBone)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_TARRAY_REF(FString,Z_Param_Out_boneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::CreateTailBone(Z_Param_skeletalMesh,Z_Param_Out_boneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execCopyVirtualBone)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_dstMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_srcMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::CopyVirtualBone(Z_Param_dstMesh,Z_Param_srcMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execCopyPhysicsAsset)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_dstMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_srcMesh);
		P_GET_UBOOL(Z_Param_bResetCollisionTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::CopyPhysicsAsset(Z_Param_dstMesh,Z_Param_srcMesh,Z_Param_bResetCollisionTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execVRMReTransformHumanoidBone)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_targetHumanoidSkeleton);
		P_GET_OBJECT(UVrmMetaObject,Z_Param_meta);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_displaySkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::VRMReTransformHumanoidBone(Z_Param_targetHumanoidSkeleton,Z_Param_meta,Z_Param_displaySkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execLoadVRMFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_InVrmAsset);
		P_GET_OBJECT_REF(UVrmAssetListObject,Z_Param_Out_OutVrmAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_filepath);
		P_GET_STRUCT_REF(FImportOptionData,Z_Param_Out_OptionForRuntimeLoad);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoaderBPFunctionLibrary::LoadVRMFileAsync(Z_Param_WorldContextObject,Z_Param_InVrmAsset,Z_Param_Out_OutVrmAsset,Z_Param_filepath,Z_Param_Out_OptionForRuntimeLoad,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execLoadVRMFile)
	{
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_InVrmAsset);
		P_GET_OBJECT_REF(UVrmAssetListObject,Z_Param_Out_OutVrmAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_filepath);
		P_GET_STRUCT_REF(FImportOptionData,Z_Param_Out_OptionForRuntimeLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::LoadVRMFile(Z_Param_InVrmAsset,Z_Param_Out_OutVrmAsset,Z_Param_filepath,Z_Param_Out_OptionForRuntimeLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoaderBPFunctionLibrary::execVRMSetLoadMaterialType)
	{
		P_GET_ENUM(EVRMImportMaterialType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoaderBPFunctionLibrary::VRMSetLoadMaterialType(EVRMImportMaterialType(Z_Param_type));
		P_NATIVE_END;
	}
	void ULoaderBPFunctionLibrary::StaticRegisterNativesULoaderBPFunctionLibrary()
	{
		UClass* Class = ULoaderBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPhysicsAsset", &ULoaderBPFunctionLibrary::execCopyPhysicsAsset },
			{ "CopyVirtualBone", &ULoaderBPFunctionLibrary::execCopyVirtualBone },
			{ "CreateTailBone", &ULoaderBPFunctionLibrary::execCreateTailBone },
			{ "LoadVRMFile", &ULoaderBPFunctionLibrary::execLoadVRMFile },
			{ "LoadVRMFileAsync", &ULoaderBPFunctionLibrary::execLoadVRMFileAsync },
			{ "VRMGenerateEpicSkeletonToHumanoidIKRig", &ULoaderBPFunctionLibrary::execVRMGenerateEpicSkeletonToHumanoidIKRig },
			{ "VRMGenerateIKRetargeterPose", &ULoaderBPFunctionLibrary::execVRMGenerateIKRetargeterPose },
			{ "VRMReTransformHumanoidBone", &ULoaderBPFunctionLibrary::execVRMReTransformHumanoidBone },
			{ "VRMSetLoadMaterialType", &ULoaderBPFunctionLibrary::execVRMSetLoadMaterialType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics
	{
		struct LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms
		{
			USkeletalMesh* dstMesh;
			const USkeletalMesh* srcMesh;
			bool bResetCollisionTransform;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dstMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_srcMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_srcMesh;
		static void NewProp_bResetCollisionTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetCollisionTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_dstMesh = { "dstMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms, dstMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh = { "srcMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms, srcMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh_MetaData) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_bResetCollisionTransform_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms*)Obj)->bResetCollisionTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_bResetCollisionTransform = { "bResetCollisionTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_bResetCollisionTransform_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_dstMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_srcMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_bResetCollisionTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n" },
#endif
		{ "CPP_Default_bResetCollisionTransform", "true" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "CopyPhysicsAsset", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::LoaderBPFunctionLibrary_eventCopyPhysicsAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics
	{
		struct LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms
		{
			USkeletalMesh* dstMesh;
			const USkeletalMesh* srcMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dstMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_srcMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_srcMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_dstMesh = { "dstMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms, dstMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh = { "srcMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms, srcMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh_MetaData) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_dstMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_srcMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "CopyVirtualBone", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::LoaderBPFunctionLibrary_eventCopyVirtualBone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics
	{
		struct LoaderBPFunctionLibrary_eventCreateTailBone_Parms
		{
			USkeletalMesh* skeletalMesh;
			TArray<FString> boneName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FStrPropertyParams NewProp_boneName_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_boneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCreateTailBone_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_Inner = { "boneName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventCreateTailBone_Parms, boneName), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_MetaData) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventCreateTailBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventCreateTailBone_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "CreateTailBone", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::LoaderBPFunctionLibrary_eventCreateTailBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::LoaderBPFunctionLibrary_eventCreateTailBone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics
	{
		struct LoaderBPFunctionLibrary_eventLoadVRMFile_Parms
		{
			const UVrmAssetListObject* InVrmAsset;
			UVrmAssetListObject* OutVrmAsset;
			FString filepath;
			FImportOptionData OptionForRuntimeLoad;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVrmAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVrmAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutVrmAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filepath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_filepath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionForRuntimeLoad_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionForRuntimeLoad;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset = { "InVrmAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms, InVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OutVrmAsset = { "OutVrmAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms, OutVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms, filepath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad = { "OptionForRuntimeLoad", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms, OptionForRuntimeLoad), Z_Construct_UScriptStruct_FImportOptionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad_MetaData) }; // 697727878
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventLoadVRMFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventLoadVRMFile_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_InVrmAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OutVrmAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_filepath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_OptionForRuntimeLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "LoadVRMFile", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::LoaderBPFunctionLibrary_eventLoadVRMFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::LoaderBPFunctionLibrary_eventLoadVRMFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics
	{
		struct LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms
		{
			const UObject* WorldContextObject;
			const UVrmAssetListObject* InVrmAsset;
			UVrmAssetListObject* OutVrmAsset;
			FString filepath;
			FImportOptionData OptionForRuntimeLoad;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVrmAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVrmAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutVrmAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filepath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_filepath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionForRuntimeLoad_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionForRuntimeLoad;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset = { "InVrmAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, InVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OutVrmAsset = { "OutVrmAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, OutVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, filepath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad = { "OptionForRuntimeLoad", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, OptionForRuntimeLoad), Z_Construct_UScriptStruct_FImportOptionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad_MetaData) }; // 697727878
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_InVrmAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OutVrmAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_filepath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_OptionForRuntimeLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "LoadVRMFileAsync", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::LoaderBPFunctionLibrary_eventLoadVRMFileAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics
	{
		struct LoaderBPFunctionLibrary_eventVRMGenerateEpicSkeletonToHumanoidIKRig_Parms
		{
			USkeletalMesh* srcSkeletalMesh;
			UObject* outRigIK;
			UObject* outIKRetargeter;
			UObject* targetRigIK;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_srcSkeletalMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outRigIK;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outIKRetargeter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetRigIK;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::NewProp_srcSkeletalMesh = { "srcSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMGenerateEpicSkeletonToHumanoidIKRig_Parms, srcSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::NewProp_outRigIK = { "outRigIK", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMGenerateEpicSkeletonToHumanoidIKRig_Parms, outRigIK), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::NewProp_outIKRetargeter = { "outIKRetargeter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMGenerateEpicSkeletonToHumanoidIKRig_Parms, outIKRetargeter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::NewProp_targetRigIK = { "targetRigIK", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMGenerateEpicSkeletonToHumanoidIKRig_Parms, targetRigIK), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::NewProp_srcSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::NewProp_outRigIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::NewProp_outIKRetargeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::NewProp_targetRigIK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "RigIK" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "VRMGenerateEpicSkeletonToHumanoidIKRig", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::LoaderBPFunctionLibrary_eventVRMGenerateEpicSkeletonToHumanoidIKRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::LoaderBPFunctionLibrary_eventVRMGenerateEpicSkeletonToHumanoidIKRig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics
	{
		struct LoaderBPFunctionLibrary_eventVRMGenerateIKRetargeterPose_Parms
		{
			UObject* IKRetargeter;
			UObject* targetRigIK;
			UPoseAsset* targetPose;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IKRetargeter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetRigIK;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::NewProp_IKRetargeter = { "IKRetargeter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMGenerateIKRetargeterPose_Parms, IKRetargeter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::NewProp_targetRigIK = { "targetRigIK", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMGenerateIKRetargeterPose_Parms, targetRigIK), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::NewProp_targetPose = { "targetPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMGenerateIKRetargeterPose_Parms, targetPose), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::NewProp_IKRetargeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::NewProp_targetRigIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::NewProp_targetPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "RigIK" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "VRMGenerateIKRetargeterPose", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::LoaderBPFunctionLibrary_eventVRMGenerateIKRetargeterPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::LoaderBPFunctionLibrary_eventVRMGenerateIKRetargeterPose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics
	{
		struct LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms
		{
			USkeletalMeshComponent* targetHumanoidSkeleton;
			const UVrmMetaObject* meta;
			const USkeletalMeshComponent* displaySkeleton;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetHumanoidSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetHumanoidSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_displaySkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_displaySkeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton = { "targetHumanoidSkeleton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms, targetHumanoidSkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms, meta), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton = { "displaySkeleton", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms, displaySkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton_MetaData), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton_MetaData) };
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_targetHumanoidSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_meta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_displaySkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n" },
#endif
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "VRMReTransformHumanoidBone", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::LoaderBPFunctionLibrary_eventVRMReTransformHumanoidBone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics
	{
		struct LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms
		{
			EVRMImportMaterialType type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms, type), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(0, nullptr) }; // 668561232
	void Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms), &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoaderBPFunctionLibrary, nullptr, "VRMSetLoadMaterialType", nullptr, nullptr, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::LoaderBPFunctionLibrary_eventVRMSetLoadMaterialType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoaderBPFunctionLibrary);
	UClass* Z_Construct_UClass_ULoaderBPFunctionLibrary_NoRegister()
	{
		return ULoaderBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyPhysicsAsset, "CopyPhysicsAsset" }, // 2372323296
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CopyVirtualBone, "CopyVirtualBone" }, // 321125512
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_CreateTailBone, "CreateTailBone" }, // 1973894196
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFile, "LoadVRMFile" }, // 379656048
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_LoadVRMFileAsync, "LoadVRMFileAsync" }, // 139169825
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateEpicSkeletonToHumanoidIKRig, "VRMGenerateEpicSkeletonToHumanoidIKRig" }, // 3963415147
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMGenerateIKRetargeterPose, "VRMGenerateIKRetargeterPose" }, // 2398087354
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMReTransformHumanoidBone, "VRMReTransformHumanoidBone" }, // 3281897837
		{ &Z_Construct_UFunction_ULoaderBPFunctionLibrary_VRMSetLoadMaterialType, "VRMSetLoadMaterialType" }, // 3310515060
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LoaderBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LoaderBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoaderBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::ClassParams = {
		&ULoaderBPFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULoaderBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULoaderBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoaderBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULoaderBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoaderBPFunctionLibrary.OuterSingleton;
	}
	template<> VRM4ULOADER_API UClass* StaticClass<ULoaderBPFunctionLibrary>()
	{
		return ULoaderBPFunctionLibrary::StaticClass();
	}
	ULoaderBPFunctionLibrary::ULoaderBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoaderBPFunctionLibrary);
	ULoaderBPFunctionLibrary::~ULoaderBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EPathType_StaticEnum, TEXT("EPathType"), &Z_Registration_Info_UEnum_EPathType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 755500348U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMeshInfo_VRM4U::StaticStruct, Z_Construct_UScriptStruct_FMeshInfo_VRM4U_Statics::NewStructOps, TEXT("MeshInfo_VRM4U"), &Z_Registration_Info_UScriptStruct_MeshInfo_VRM4U, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshInfo_VRM4U), 3357264304U) },
		{ FReturnedData::StaticStruct, Z_Construct_UScriptStruct_FReturnedData_Statics::NewStructOps, TEXT("ReturnedData"), &Z_Registration_Info_UScriptStruct_ReturnedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReturnedData), 3019489347U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoaderBPFunctionLibrary, ULoaderBPFunctionLibrary::StaticClass, TEXT("ULoaderBPFunctionLibrary"), &Z_Registration_Info_UClass_ULoaderBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoaderBPFunctionLibrary), 1215567702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_1017674598(TEXT("/Script/VRM4ULoader"),
		Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LOU_Documents_Unreal_Projects_Dialogue_Plugins_VRM4U_Source_VRM4ULoader_Public_LoaderBPFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
