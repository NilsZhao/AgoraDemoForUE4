// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintWebSocket/Public/BlueprintWebSocketWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintWebSocketWrapper() {}
// Cross Module References
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlueprintWebSocket();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UEnum* Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UBlueprintWebSocket_NoRegister();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UBlueprintWebSocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::NewProp_MessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms, MessageString), METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::NewProp_MessageString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::NewProp_MessageString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::NewProp_MessageString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketMessageSentEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms
		{
			TArray<uint8> Data;
			int32 BytesRemaining;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_BytesRemaining = { "BytesRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms, BytesRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_BytesRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketRawMessageEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::NewProp_MessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms, MessageString), METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::NewProp_MessageString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::NewProp_MessageString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::NewProp_MessageString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketMessageEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms
		{
			int64 StatusCode;
			FString Reason;
			bool bWasClean;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_StatusCode;
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms, Reason), METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_Reason_MetaData)) };
	void Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_bWasClean_SetBit(void* Obj)
	{
		((_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms*)Obj)->bWasClean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms), &Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_StatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_bWasClean,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketClosedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms
		{
			FString ConnectionError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionError_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::NewProp_ConnectionError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::NewProp_ConnectionError = { "ConnectionError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms, ConnectionError), METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::NewProp_ConnectionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::NewProp_ConnectionError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::NewProp_ConnectionError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketConnectionErrorEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketConnectedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EBlueprintWebSocketIsConnectedExecution_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution, Z_Construct_UPackage__Script_BlueprintWebSocket(), TEXT("EBlueprintWebSocketIsConnectedExecution"));
		}
		return Singleton;
	}
	template<> BLUEPRINTWEBSOCKET_API UEnum* StaticEnum<EBlueprintWebSocketIsConnectedExecution>()
	{
		return EBlueprintWebSocketIsConnectedExecution_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintWebSocketIsConnectedExecution(EBlueprintWebSocketIsConnectedExecution_StaticEnum, TEXT("/Script/BlueprintWebSocket"), TEXT("EBlueprintWebSocketIsConnectedExecution"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Hash() { return 2956507156U; }
	UEnum* Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintWebSocket();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintWebSocketIsConnectedExecution"), 0, Get_Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintWebSocketIsConnectedExecution::Connected", (int64)EBlueprintWebSocketIsConnectedExecution::Connected },
				{ "EBlueprintWebSocketIsConnectedExecution::NotConnected", (int64)EBlueprintWebSocketIsConnectedExecution::NotConnected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n *\x09""A socket's state. Used to create multi-pins nodes.\n **/" },
				{ "Connected.Name", "EBlueprintWebSocketIsConnectedExecution::Connected" },
				{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
				{ "NotConnected.Name", "EBlueprintWebSocketIsConnectedExecution::NotConnected" },
				{ "ToolTip", "A socket's state. Used to create multi-pins nodes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
				nullptr,
				"EBlueprintWebSocketIsConnectedExecution",
				"EBlueprintWebSocketIsConnectedExecution",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execOnMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execOnClosed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Status);
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_GET_UBOOL(Z_Param_bWasClean);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClosed(Z_Param_Status,Z_Param_Reason,Z_Param_bWasClean);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execOnConnectionError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConnectionError(Z_Param_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execOnConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execClose)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Code);
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close(Z_Param_Code,Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execSendRawMessage)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
		P_GET_UBOOL(Z_Param_bIsBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendRawMessage(Z_Param_Out_Message,Z_Param_bIsBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execBranchIsConnected)
	{
		P_GET_ENUM_REF(EBlueprintWebSocketIsConnectedExecution,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BranchIsConnected((EBlueprintWebSocketIsConnectedExecution&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execRemoveHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveHeader(Z_Param_HeaderToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execAddHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Header);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHeader(Z_Param_Header,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execSetHeaders)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_InHeaders);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeaders(Z_Param_Out_InHeaders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_Url,Z_Param_Protocol);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintWebSocket::execCreateWebSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprintWebSocket**)Z_Param__Result=UBlueprintWebSocket::CreateWebSocket();
		P_NATIVE_END;
	}
	void UBlueprintWebSocket::StaticRegisterNativesUBlueprintWebSocket()
	{
		UClass* Class = UBlueprintWebSocket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHeader", &UBlueprintWebSocket::execAddHeader },
			{ "BranchIsConnected", &UBlueprintWebSocket::execBranchIsConnected },
			{ "Close", &UBlueprintWebSocket::execClose },
			{ "Connect", &UBlueprintWebSocket::execConnect },
			{ "CreateWebSocket", &UBlueprintWebSocket::execCreateWebSocket },
			{ "IsConnected", &UBlueprintWebSocket::execIsConnected },
			{ "OnClosed", &UBlueprintWebSocket::execOnClosed },
			{ "OnConnected", &UBlueprintWebSocket::execOnConnected },
			{ "OnConnectionError", &UBlueprintWebSocket::execOnConnectionError },
			{ "OnMessage", &UBlueprintWebSocket::execOnMessage },
			{ "RemoveHeader", &UBlueprintWebSocket::execRemoveHeader },
			{ "SendMessage", &UBlueprintWebSocket::execSendMessage },
			{ "SendRawMessage", &UBlueprintWebSocket::execSendRawMessage },
			{ "SetHeaders", &UBlueprintWebSocket::execSetHeaders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics
	{
		struct BlueprintWebSocket_eventAddHeader_Parms
		{
			FString Header;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventAddHeader_Parms, Header), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventAddHeader_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Add the specifed key / value to the headers.\n\x09 * @param Header The name of the header to add.\n\x09 * @param Value  The value of the header.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Add the specifed key / value to the headers.\n@param Header The name of the header to add.\n@param Value  The value of the header." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "AddHeader", nullptr, nullptr, sizeof(BlueprintWebSocket_eventAddHeader_Parms), Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_AddHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics
	{
		struct BlueprintWebSocket_eventBranchIsConnected_Parms
		{
			EBlueprintWebSocketIsConnectedExecution Branches;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventBranchIsConnected_Parms, Branches), Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "BranchIsConnected", nullptr, nullptr, sizeof(BlueprintWebSocket_eventBranchIsConnected_Parms), Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics
	{
		struct BlueprintWebSocket_eventClose_Parms
		{
			int32 Code;
			FString Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventClose_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventClose_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Close the connection with the WebSocket server.\n\x09 * @param Code\x09 The code to send to the server.\n\x09 * @param Reason The reason to send to the server.\n\x09*/" },
		{ "CPP_Default_Code", "1000" },
		{ "CPP_Default_Reason", "" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Close the connection with the WebSocket server.\n@param Code   The code to send to the server.\n@param Reason The reason to send to the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "Close", nullptr, nullptr, sizeof(BlueprintWebSocket_eventClose_Parms), Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics
	{
		struct BlueprintWebSocket_eventConnect_Parms
		{
			FString Url;
			FString Protocol;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventConnect_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventConnect_Parms, Protocol), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Protocol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Protocol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Connect to the WebSocket server with the specified protocol.\n\x09 * @param Url\x09   The server's URL.\n\x09 * @param Protocol The protocol to use for connection. \"ws\" or \"wss\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Connect to the WebSocket server with the specified protocol.\n@param Url      The server's URL.\n@param Protocol The protocol to use for connection. \"ws\" or \"wss\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "Connect", nullptr, nullptr, sizeof(BlueprintWebSocket_eventConnect_Parms), Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics
	{
		struct BlueprintWebSocket_eventCreateWebSocket_Parms
		{
			UBlueprintWebSocket* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "New WebSocket" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventCreateWebSocket_Parms, ReturnValue), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Create a WebSocket object to connect to a WebSocket server.\n\x09 * @return A new WebSocket.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Create a WebSocket object to connect to a WebSocket server.\n@return A new WebSocket." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "CreateWebSocket", nullptr, nullptr, sizeof(BlueprintWebSocket_eventCreateWebSocket_Parms), Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics
	{
		struct BlueprintWebSocket_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Connected" },
	};
#endif
	void Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintWebSocket_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintWebSocket_eventIsConnected_Parms), &Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Returns whether this socket is currently connected to a server.\n\x09 * @return If we're connected to a server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Returns whether this socket is currently connected to a server.\n@return If we're connected to a server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "IsConnected", nullptr, nullptr, sizeof(BlueprintWebSocket_eventIsConnected_Parms), Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics
	{
		struct BlueprintWebSocket_eventOnClosed_Parms
		{
			int32 Status;
			FString Reason;
			bool bWasClean;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventOnClosed_Parms, Status), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventOnClosed_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Reason_MetaData)) };
	void Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_bWasClean_SetBit(void* Obj)
	{
		((BlueprintWebSocket_eventOnClosed_Parms*)Obj)->bWasClean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintWebSocket_eventOnClosed_Parms), &Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_bWasClean,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "OnClosed", nullptr, nullptr, sizeof(BlueprintWebSocket_eventOnClosed_Parms), Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_OnClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "OnConnected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_OnConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics
	{
		struct BlueprintWebSocket_eventOnConnectionError_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventOnConnectionError_Parms, Error), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "OnConnectionError", nullptr, nullptr, sizeof(BlueprintWebSocket_eventOnConnectionError_Parms), Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics
	{
		struct BlueprintWebSocket_eventOnMessage_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventOnMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "OnMessage", nullptr, nullptr, sizeof(BlueprintWebSocket_eventOnMessage_Parms), Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_OnMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics
	{
		struct BlueprintWebSocket_eventRemoveHeader_Parms
		{
			FString HeaderToRemove;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::NewProp_HeaderToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::NewProp_HeaderToRemove = { "HeaderToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventRemoveHeader_Parms, HeaderToRemove), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::NewProp_HeaderToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::NewProp_HeaderToRemove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::NewProp_HeaderToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Remove the specified header from the list of headers.\n\x09 * @param HeaderToRemove The name of the header we want to remove\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Remove the specified header from the list of headers.\n@param HeaderToRemove The name of the header we want to remove" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "RemoveHeader", nullptr, nullptr, sizeof(BlueprintWebSocket_eventRemoveHeader_Parms), Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics
	{
		struct BlueprintWebSocket_eventSendMessage_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventSendMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Sends the specified message to the WebSocket server.\n\x09 * @param Message The data to send.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Sends the specified message to the WebSocket server.\n@param Message The data to send." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "SendMessage", nullptr, nullptr, sizeof(BlueprintWebSocket_eventSendMessage_Parms), Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics
	{
		struct BlueprintWebSocket_eventSendRawMessage_Parms
		{
			TArray<uint8> Message;
			bool bIsBinary;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBinary_MetaData[];
#endif
		static void NewProp_bIsBinary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBinary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventSendRawMessage_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary_SetBit(void* Obj)
	{
		((BlueprintWebSocket_eventSendRawMessage_Parms*)Obj)->bIsBinary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary = { "bIsBinary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintWebSocket_eventSendRawMessage_Parms), &Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Sends the specified binary message to the WebSocket server.\n\x09 * @param Message   The data to send.\n\x09 * @param bIsBinary If this is a binary message or not.\n\x09*/" },
		{ "CPP_Default_bIsBinary", "false" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Sends the specified binary message to the WebSocket server.\n@param Message   The data to send.\n@param bIsBinary If this is a binary message or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "SendRawMessage", nullptr, nullptr, sizeof(BlueprintWebSocket_eventSendRawMessage_Parms), Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics
	{
		struct BlueprintWebSocket_eventSetHeaders_Parms
		{
			TMap<FString,FString> InHeaders;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InHeaders_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InHeaders_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHeaders_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InHeaders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_ValueProp = { "InHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_Key_KeyProp = { "InHeaders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders = { "InHeaders", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintWebSocket_eventSetHeaders_Parms, InHeaders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Set the specified headers for the connection.\n\x09 * If the socket already have headers, it will keep the old headers\n\x09 * and override the duplicated headers with the new values.\n\x09 * @param InHeaders The header used during connection upgrade.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Set the specified headers for the connection.\nIf the socket already have headers, it will keep the old headers\nand override the duplicated headers with the new values.\n@param InHeaders The header used during connection upgrade." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "SetHeaders", nullptr, nullptr, sizeof(BlueprintWebSocket_eventSetHeaders_Parms), Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintWebSocket_NoRegister()
	{
		return UBlueprintWebSocket::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintWebSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectionErrorEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionErrorEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCloseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCloseEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRawMessageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawMessageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessageSentEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageSentEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintWebSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintWebSocket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintWebSocket_AddHeader, "AddHeader" }, // 1104889585
		{ &Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected, "BranchIsConnected" }, // 493000639
		{ &Z_Construct_UFunction_UBlueprintWebSocket_Close, "Close" }, // 1118682512
		{ &Z_Construct_UFunction_UBlueprintWebSocket_Connect, "Connect" }, // 2179059800
		{ &Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket, "CreateWebSocket" }, // 644769908
		{ &Z_Construct_UFunction_UBlueprintWebSocket_IsConnected, "IsConnected" }, // 1548978678
		{ &Z_Construct_UFunction_UBlueprintWebSocket_OnClosed, "OnClosed" }, // 3566790900
		{ &Z_Construct_UFunction_UBlueprintWebSocket_OnConnected, "OnConnected" }, // 1721745555
		{ &Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError, "OnConnectionError" }, // 3374917492
		{ &Z_Construct_UFunction_UBlueprintWebSocket_OnMessage, "OnMessage" }, // 2205364189
		{ &Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader, "RemoveHeader" }, // 1883155155
		{ &Z_Construct_UFunction_UBlueprintWebSocket_SendMessage, "SendMessage" }, // 454883882
		{ &Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage, "SendRawMessage" }, // 216664660
		{ &Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders, "SetHeaders" }, // 1154940682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintWebSocket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n *    A wrapper around the engine's native WebSocket.\n **/" },
		{ "IncludePath", "BlueprintWebSocketWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "A wrapper around the engine's native WebSocket." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectedEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the WebSocket successfully connect to the server. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the WebSocket successfully connect to the server." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectedEvent = { "OnConnectedEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnConnectedEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectionErrorEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the WebSocket fail to connect to the server. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the WebSocket fail to connect to the server." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectionErrorEvent = { "OnConnectionErrorEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnConnectionErrorEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectionErrorEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectionErrorEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnCloseEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the connection is closed. The connection can be closed by the client or the server. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the connection is closed. The connection can be closed by the client or the server." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnCloseEvent = { "OnCloseEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnCloseEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnCloseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnCloseEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the server sent a string message. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the server sent a string message." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageEvent = { "OnMessageEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnMessageEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnRawMessageEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the server sent a binary message. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the server sent a binary message." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnRawMessageEvent = { "OnRawMessageEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnRawMessageEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnRawMessageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnRawMessageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageSentEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called just after a message has been sent to the server. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called just after a message has been sent to the server." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageSentEvent = { "OnMessageSentEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnMessageSentEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageSentEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageSentEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintWebSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectionErrorEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnCloseEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnRawMessageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageSentEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintWebSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintWebSocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintWebSocket_Statics::ClassParams = {
		&UBlueprintWebSocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlueprintWebSocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintWebSocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintWebSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintWebSocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintWebSocket, 3839034706);
	template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UBlueprintWebSocket>()
	{
		return UBlueprintWebSocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintWebSocket(Z_Construct_UClass_UBlueprintWebSocket, &UBlueprintWebSocket::StaticClass, TEXT("/Script/BlueprintWebSocket"), TEXT("UBlueprintWebSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintWebSocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
