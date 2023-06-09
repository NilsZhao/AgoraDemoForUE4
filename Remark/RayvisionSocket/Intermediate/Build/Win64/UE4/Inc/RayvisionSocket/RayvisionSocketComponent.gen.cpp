// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayvisionSocket/Public/RayvisionSocketComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayvisionSocketComponent() {}
// Cross Module References
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RayvisionSocket();
	RAYVISIONSOCKET_API UScriptStruct* Z_Construct_UScriptStruct_FJoyMoveMessage();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature();
	RAYVISIONSOCKET_API UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature();
	RAYVISIONSOCKET_API UClass* Z_Construct_UClass_URayvisionSocketComponent_NoRegister();
	RAYVISIONSOCKET_API UClass* Z_Construct_UClass_URayvisionSocketComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms
		{
			FJoyMoveMessage ReceivedMove;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReceivedMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove = { "ReceivedMove", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms, ReceivedMove), Z_Construct_UScriptStruct_FJoyMoveMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::NewProp_ReceivedMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "ReceivedJoystickMoveSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_RayvisionSocket_eventReceivedJoystickMoveSignature_Parms), Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnMessageSentSignature_Parms
		{
			FString MessageString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnMessageSentSignature_Parms, MessageString), METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnMessageSentSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_RayvisionSocket_eventOnMessageSentSignature_Parms), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnRawMessageSignature_Parms
		{
			FString Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnRawMessageSignature_Parms, Data), METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnRawMessageSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_RayvisionSocket_eventOnRawMessageSignature_Parms), Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnMessageSignature_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnMessageSignature_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnMessageSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_RayvisionSocket_eventOnMessageSignature_Parms), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnClosedSignature_Parms
		{
			int32 StatusCode;
			FString Reason;
			bool bWasClean;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static void NewProp_bWasClean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnClosedSignature_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnClosedSignature_Parms, Reason), METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData)) };
	void Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean_SetBit(void* Obj)
	{
		((_Script_RayvisionSocket_eventOnClosedSignature_Parms*)Obj)->bWasClean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_RayvisionSocket_eventOnClosedSignature_Parms), &Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_StatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnClosedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_RayvisionSocket_eventOnClosedSignature_Parms), Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics
	{
		struct _Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms
		{
			FString Error;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms, Error), METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnConnectionErrorSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_RayvisionSocket_eventOnConnectionErrorSignature_Parms), Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayvisionSocket, nullptr, "OnConnectedSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execBase64Encode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URayvisionSocketComponent::Base64Encode(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execBase64Decode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Source);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URayvisionSocketComponent::Base64Decode(Z_Param_Source,Z_Param_Out_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execSendData)
	{
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_GET_UBOOL(Z_Param_bIsBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendData(Z_Param_Data,Z_Param_bIsBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execConnectToUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToUrl(Z_Param_NewUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execConnectTo3dcat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectTo3dcat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execAutoConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoConnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execUnbindEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayvisionSocketComponent::execBindEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindEvents();
		P_NATIVE_END;
	}
	void URayvisionSocketComponent::StaticRegisterNativesURayvisionSocketComponent()
	{
		UClass* Class = URayvisionSocketComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoConnect", &URayvisionSocketComponent::execAutoConnect },
			{ "Base64Decode", &URayvisionSocketComponent::execBase64Decode },
			{ "Base64Encode", &URayvisionSocketComponent::execBase64Encode },
			{ "BindEvents", &URayvisionSocketComponent::execBindEvents },
			{ "ConnectTo3dcat", &URayvisionSocketComponent::execConnectTo3dcat },
			{ "ConnectToUrl", &URayvisionSocketComponent::execConnectToUrl },
			{ "Disconnect", &URayvisionSocketComponent::execDisconnect },
			{ "SendData", &URayvisionSocketComponent::execSendData },
			{ "SendMessage", &URayvisionSocketComponent::execSendMessage },
			{ "UnbindEvents", &URayvisionSocketComponent::execUnbindEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\xe8\xbf\x9b\xe8\xa1\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5, \xe8\x8b\xa5\xe5\xa4\x84\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81, \xe5\x88\x99\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3TestUrl, \xe8\x8b\xa5\xe5\xa4\x84\xe4\xba\x8e\xe9\x9d\x9e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81, \xe5\x88\x99\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3""3dcat.live\n\x09 */" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe8\xbf\x9b\xe8\xa1\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5, \xe8\x8b\xa5\xe5\xa4\x84\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81, \xe5\x88\x99\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3TestUrl, \xe8\x8b\xa5\xe5\xa4\x84\xe4\xba\x8e\xe9\x9d\x9e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81, \xe5\x88\x99\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3""3dcat.live" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "AutoConnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics
	{
		struct RayvisionSocketComponent_eventBase64Decode_Parms
		{
			FString Source;
			FString Dest;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventBase64Decode_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventBase64Decode_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayvisionSocketComponent_eventBase64Decode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RayvisionSocketComponent_eventBase64Decode_Parms), &Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "Base64Decode", nullptr, nullptr, sizeof(RayvisionSocketComponent_eventBase64Decode_Parms), Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics
	{
		struct RayvisionSocketComponent_eventBase64Encode_Parms
		{
			FString Source;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventBase64Encode_Parms, Source), METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "Base64Encode", nullptr, nullptr, sizeof(RayvisionSocketComponent_eventBase64Encode_Parms), Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/**\n\x09 *\xe7\xbb\x91\xe5\xae\x9a\xe8\xbf\x9e\xe6\x8e\xa5\xe4\xba\x8b\xe4\xbb\xb6.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe7\xbb\x91\xe5\xae\x9a\xe8\xbf\x9e\xe6\x8e\xa5\xe4\xba\x8b\xe4\xbb\xb6." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "BindEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_BindEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_BindEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/**\n\x09 *\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0""3dcat, \xe7\xab\xaf\xe5\x8f\xa3\xe4\xbc\x9a\xe9\x80\x9a\xe8\xbf\x87\xe5\x91\xbd\xe4\xbb\xa4\xe8\xa1\x8c\xe8\x8e\xb7\xe5\x8f\x96.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0""3dcat, \xe7\xab\xaf\xe5\x8f\xa3\xe4\xbc\x9a\xe9\x80\x9a\xe8\xbf\x87\xe5\x91\xbd\xe4\xbb\xa4\xe8\xa1\x8c\xe8\x8e\xb7\xe5\x8f\x96." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "ConnectTo3dcat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics
	{
		struct RayvisionSocketComponent_eventConnectToUrl_Parms
		{
			FString NewUrl;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::NewProp_NewUrl = { "NewUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventConnectToUrl_Parms, NewUrl), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::NewProp_NewUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/**\n\x09 * \xe6\xa0\xb9\xe6\x8d\xae\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84URL\xe5\xbb\xba\xe7\xab\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe7\x9a\x84WebSocket\xe8\xbf\x9e\xe6\x8e\xa5, \xe5\x8e\x9f\xe6\x9c\x89\xe7\x9a\x84\xe9\x93\xbe\xe6\x8e\xa5\xe5\xb0\x86\xe4\xbc\x9a\xe8\xa2\xab\xe8\x87\xaa\xe5\x8a\xa8\xe5\x85\xb3\xe9\x97\xad.\n\x09 * @param NewUrl \xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84url\n\x09 */" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe6\xa0\xb9\xe6\x8d\xae\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84URL\xe5\xbb\xba\xe7\xab\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe7\x9a\x84WebSocket\xe8\xbf\x9e\xe6\x8e\xa5, \xe5\x8e\x9f\xe6\x9c\x89\xe7\x9a\x84\xe9\x93\xbe\xe6\x8e\xa5\xe5\xb0\x86\xe4\xbc\x9a\xe8\xa2\xab\xe8\x87\xaa\xe5\x8a\xa8\xe5\x85\xb3\xe9\x97\xad.\n@param NewUrl \xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84url" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "ConnectToUrl", nullptr, nullptr, sizeof(RayvisionSocketComponent_eventConnectToUrl_Parms), Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/**\n\x09 *\xe5\x85\xb3\xe9\x97\xad\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe9\x97\xad\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics
	{
		struct RayvisionSocketComponent_eventSendData_Parms
		{
			TArray<uint8> Data;
			bool bIsBinary;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_bIsBinary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBinary;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventSendData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_bIsBinary_SetBit(void* Obj)
	{
		((RayvisionSocketComponent_eventSendData_Parms*)Obj)->bIsBinary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_bIsBinary = { "bIsBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RayvisionSocketComponent_eventSendData_Parms), &Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_bIsBinary_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayvisionSocketComponent_eventSendData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RayvisionSocketComponent_eventSendData_Parms), &Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_bIsBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/**\n\x09 *\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb0\xe7\xbb\x84\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf.\n\x09 */" },
		{ "CPP_Default_bIsBinary", "false" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb0\xe7\xbb\x84\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "SendData", nullptr, nullptr, sizeof(RayvisionSocketComponent_eventSendData_Parms), Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_SendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_SendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics
	{
		struct RayvisionSocketComponent_eventSendMessage_Parms
		{
			FString Message;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayvisionSocketComponent_eventSendMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayvisionSocketComponent_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RayvisionSocketComponent_eventSendMessage_Parms), &Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/**\n\x09 *\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe7\xab\xaf." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "SendMessage", nullptr, nullptr, sizeof(RayvisionSocketComponent_eventSendMessage_Parms), Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayvisionSocketComponent, nullptr, "UnbindEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URayvisionSocketComponent_NoRegister()
	{
		return URayvisionSocketComponent::StaticClass();
	}
	struct Z_Construct_UClass_URayvisionSocketComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRawMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessageSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReceivedJoystickMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceivedJoystickMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[];
#endif
		static void NewProp_bAutoConnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReconnectOnFailed_MetaData[];
#endif
		static void NewProp_bAutoReconnectOnFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReconnectOnFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReconnectInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReconnectInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayvisionSocketComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RayvisionSocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URayvisionSocketComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URayvisionSocketComponent_AutoConnect, "AutoConnect" }, // 1492443141
		{ &Z_Construct_UFunction_URayvisionSocketComponent_Base64Decode, "Base64Decode" }, // 3214297049
		{ &Z_Construct_UFunction_URayvisionSocketComponent_Base64Encode, "Base64Encode" }, // 1504626202
		{ &Z_Construct_UFunction_URayvisionSocketComponent_BindEvents, "BindEvents" }, // 2392279469
		{ &Z_Construct_UFunction_URayvisionSocketComponent_ConnectTo3dcat, "ConnectTo3dcat" }, // 1858847289
		{ &Z_Construct_UFunction_URayvisionSocketComponent_ConnectToUrl, "ConnectToUrl" }, // 4112681925
		{ &Z_Construct_UFunction_URayvisionSocketComponent_Disconnect, "Disconnect" }, // 2797239563
		{ &Z_Construct_UFunction_URayvisionSocketComponent_SendData, "SendData" }, // 1716688512
		{ &Z_Construct_UFunction_URayvisionSocketComponent_SendMessage, "SendMessage" }, // 306845204
		{ &Z_Construct_UFunction_URayvisionSocketComponent_UnbindEvents, "UnbindEvents" }, // 361320841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RayvisionSocketComponent.h" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnConnected), Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnConnectionError), Z_Construct_UDelegateFunction_RayvisionSocket_OnConnectionErrorSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnClosed), Z_Construct_UDelegateFunction_RayvisionSocket_OnClosedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnMessage), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage = { "OnRawMessage", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnRawMessage), Z_Construct_UDelegateFunction_RayvisionSocket_OnRawMessageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent = { "OnMessageSent", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnMessageSent), Z_Construct_UDelegateFunction_RayvisionSocket_OnMessageSentSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove_MetaData[] = {
		{ "Category", "Sockets" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove = { "OnReceivedJoystickMove", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, OnReceivedJoystickMove), Z_Construct_UDelegateFunction_RayvisionSocket_ReceivedJoystickMoveSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "//\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe6\xb5\x8b\xe8\xaf\x95WebSocket\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84Url. \xe4\xbb\x85\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe7\x9a\x84\xe5\xbc\x80\xe5\x8f\x91\xe4\xb8\x8e\xe6\xb5\x8b\xe8\xaf\x95, \xe9\x9d\x9e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\xb0\x9d\xe8\xaf\x95\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3""3dcat\xe6\x8c\x87\xe5\xae\x9a\xe7\xab\xaf\xe5\x8f\xa3.\n" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe6\xb5\x8b\xe8\xaf\x95WebSocket\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84Url. \xe4\xbb\x85\xe7\x94\xa8\xe4\xba\x8e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe7\x9a\x84\xe5\xbc\x80\xe5\x8f\x91\xe4\xb8\x8e\xe6\xb5\x8b\xe8\xaf\x95, \xe9\x9d\x9e\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\xb0\x9d\xe8\xaf\x95\xe8\xbf\x9e\xe6\x8e\xa5\xe8\x87\xb3""3dcat\xe6\x8c\x87\xe5\xae\x9a\xe7\xab\xaf\xe5\x8f\xa3." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl = { "TestUrl", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, TestUrl), METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x9b\xe8\xa1\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5.\n" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x9b\xe8\xa1\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5." },
	};
#endif
	void Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
	{
		((URayvisionSocketComponent*)Obj)->bAutoConnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URayvisionSocketComponent), &Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "//\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e, \xe5\xbd\x93\xe8\xbf\x9e\xe6\x8e\xa5\xe5\xa4\xb1\xe8\xb4\xa5\xe5\x90\x8e, \xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\xb0\x9d\xe8\xaf\x95\xe9\x87\x8d\xe6\x96\xb0\xe5\xbb\xba\xe7\xab\x8b\xe8\xbf\x9e\xe6\x8e\xa5. \xe5\xaf\xb9\xe4\xba\x8e\xe5\x90\xaf\xe7\x94\xa8\xe4\xba\x86\xe9\xa2\x84\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x8a\x9f\xe8\x83\xbd\xe7\x9a\x84\xe5\xba\x94\xe7\x94\xa8,\xe7\x94\xb1\xe4\xba\x8e\xe6\x9c\xac\xe5\x9c\xb0\xe7\xab\xaf\xe5\x8f\xa3\xe5\x8f\xaa\xe4\xbc\x9a\xe5\x9c\xa8\xe7\x94\xa8\xe6\x88\xb7\xe6\x8e\xa5\xe5\x85\xa5\xe5\x90\x8e\xe5\xbc\x80\xe5\x90\xaf, \xe5\x9b\xa0\xe6\xad\xa4\xe5\xbb\xba\xe8\xae\xae\xe5\x8b\xbe\xe9\x80\x89\xe6\xad\xa4\xe9\xa1\xb9. \n" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e, \xe5\xbd\x93\xe8\xbf\x9e\xe6\x8e\xa5\xe5\xa4\xb1\xe8\xb4\xa5\xe5\x90\x8e, \xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\xb0\x9d\xe8\xaf\x95\xe9\x87\x8d\xe6\x96\xb0\xe5\xbb\xba\xe7\xab\x8b\xe8\xbf\x9e\xe6\x8e\xa5. \xe5\xaf\xb9\xe4\xba\x8e\xe5\x90\xaf\xe7\x94\xa8\xe4\xba\x86\xe9\xa2\x84\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x8a\x9f\xe8\x83\xbd\xe7\x9a\x84\xe5\xba\x94\xe7\x94\xa8,\xe7\x94\xb1\xe4\xba\x8e\xe6\x9c\xac\xe5\x9c\xb0\xe7\xab\xaf\xe5\x8f\xa3\xe5\x8f\xaa\xe4\xbc\x9a\xe5\x9c\xa8\xe7\x94\xa8\xe6\x88\xb7\xe6\x8e\xa5\xe5\x85\xa5\xe5\x90\x8e\xe5\xbc\x80\xe5\x90\xaf, \xe5\x9b\xa0\xe6\xad\xa4\xe5\xbb\xba\xe8\xae\xae\xe5\x8b\xbe\xe9\x80\x89\xe6\xad\xa4\xe9\xa1\xb9." },
	};
#endif
	void Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_SetBit(void* Obj)
	{
		((URayvisionSocketComponent*)Obj)->bAutoReconnectOnFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed = { "bAutoReconnectOnFailed", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URayvisionSocketComponent), &Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "//\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e\xe9\xa2\x91\xe7\x8e\x87\n" },
		{ "EditCondition", "bAutoReconnect" },
		{ "ModuleRelativePath", "Public/RayvisionSocketComponent.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e\xe9\xa2\x91\xe7\x8e\x87" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval = { "ReconnectInterval", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayvisionSocketComponent, ReconnectInterval), METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URayvisionSocketComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnConnectionError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnRawMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnMessageSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_OnReceivedJoystickMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_TestUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_bAutoReconnectOnFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayvisionSocketComponent_Statics::NewProp_ReconnectInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayvisionSocketComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayvisionSocketComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URayvisionSocketComponent_Statics::ClassParams = {
		&URayvisionSocketComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URayvisionSocketComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URayvisionSocketComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URayvisionSocketComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URayvisionSocketComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URayvisionSocketComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URayvisionSocketComponent, 3406755574);
	template<> RAYVISIONSOCKET_API UClass* StaticClass<URayvisionSocketComponent>()
	{
		return URayvisionSocketComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URayvisionSocketComponent(Z_Construct_UClass_URayvisionSocketComponent, &URayvisionSocketComponent::StaticClass, TEXT("/Script/RayvisionSocket"), TEXT("URayvisionSocketComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayvisionSocketComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
