// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintWebSocket/Private/BlueprintWebSocketNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintWebSocketNodes() {}
// Cross Module References
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlueprintWebSocket();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UBlueprintWebSocket_NoRegister();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_NoRegister();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxyBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxy_NoRegister();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxy();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_NoRegister();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketReconnectProxy_NoRegister();
	BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketReconnectProxy();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms
		{
			UBlueprintWebSocket* WebSocket;
			int32 RemainingAttempts;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingAttempts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms, WebSocket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::NewProp_RemainingAttempts = { "RemainingAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms, RemainingAttempts), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::NewProp_WebSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::NewProp_RemainingAttempts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "OnReconnectionEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms), Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintWebSocket_eventWebSocketEvent_Parms
		{
			const UBlueprintWebSocket* Socket;
			int32 StatusCode;
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketEvent_Parms, Socket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Socket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_StatusCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketEvent_Parms, StatusCode), METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_StatusCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_StatusCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketEvent_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Socket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_StatusCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlueprintWebSocket_eventWebSocketEvent_Parms), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWebSocketConnectAsyncProxyBase::execOnMessageInternal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMessageInternal(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketConnectAsyncProxyBase::execOnCloseInternal)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Status);
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_GET_UBOOL(Z_Param_bWasClean);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCloseInternal(Z_Param_Status,Z_Param_Reason,Z_Param_bWasClean);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketConnectAsyncProxyBase::execOnConnectionErrorInternal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConnectionErrorInternal(Z_Param_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketConnectAsyncProxyBase::execOnConnectedInternal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConnectedInternal();
		P_NATIVE_END;
	}
	void UWebSocketConnectAsyncProxyBase::StaticRegisterNativesUWebSocketConnectAsyncProxyBase()
	{
		UClass* Class = UWebSocketConnectAsyncProxyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCloseInternal", &UWebSocketConnectAsyncProxyBase::execOnCloseInternal },
			{ "OnConnectedInternal", &UWebSocketConnectAsyncProxyBase::execOnConnectedInternal },
			{ "OnConnectionErrorInternal", &UWebSocketConnectAsyncProxyBase::execOnConnectionErrorInternal },
			{ "OnMessageInternal", &UWebSocketConnectAsyncProxyBase::execOnMessageInternal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics
	{
		struct WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms
		{
			int64 Status;
			FString Reason;
			bool bWasClean;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasClean_MetaData[];
#endif
		static void NewProp_bWasClean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms, Status), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Reason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean_SetBit(void* Obj)
	{
		((WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms*)Obj)->bWasClean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms), &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, nullptr, "OnCloseInternal", nullptr, nullptr, sizeof(WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms), Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, nullptr, "OnConnectedInternal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics
	{
		struct WebSocketConnectAsyncProxyBase_eventOnConnectionErrorInternal_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxyBase_eventOnConnectionErrorInternal_Parms, Error), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, nullptr, "OnConnectionErrorInternal", nullptr, nullptr, sizeof(WebSocketConnectAsyncProxyBase_eventOnConnectionErrorInternal_Parms), Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics
	{
		struct WebSocketConnectAsyncProxyBase_eventOnMessageInternal_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxyBase_eventOnMessageInternal_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, nullptr, "OnMessageInternal", nullptr, nullptr, sizeof(WebSocketConnectAsyncProxyBase_eventOnMessageInternal_Parms), Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_NoRegister()
	{
		return UWebSocketConnectAsyncProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClose_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Socket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal, "OnCloseInternal" }, // 2404082789
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal, "OnConnectedInternal" }, // 1674100661
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal, "OnConnectionErrorInternal" }, // 3642856708
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal, "OnMessageInternal" }, // 2613411915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for asynchronous helper nodes\n **/" },
		{ "IncludePath", "BlueprintWebSocketNodes.h" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for asynchronous helper nodes" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Comment", "/* Called once the WebSocket is connected to the server. */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Called once the WebSocket is connected to the server." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, OnConnected), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnectionError_MetaData[] = {
		{ "Comment", "/* Called when the socket fail to connect to the server. */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Called when the socket fail to connect to the server." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, OnConnectionError), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnectionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnectionError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnClose_MetaData[] = {
		{ "Comment", "/* Called when the connection to the server has been closed. */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Called when the connection to the server has been closed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnClose = { "OnClose", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, OnClose), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnMessage_MetaData[] = {
		{ "Comment", "/* Called when the server has sent a message. */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Called when the server has sent a message." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, OnMessage), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_Socket_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, Socket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_Socket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnectionError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_Socket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketConnectAsyncProxyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::ClassParams = {
		&UWebSocketConnectAsyncProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketConnectAsyncProxyBase, 3011842591);
	template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UWebSocketConnectAsyncProxyBase>()
	{
		return UWebSocketConnectAsyncProxyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketConnectAsyncProxyBase(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, &UWebSocketConnectAsyncProxyBase::StaticClass, TEXT("/Script/BlueprintWebSocket"), TEXT("UWebSocketConnectAsyncProxyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketConnectAsyncProxyBase);
	DEFINE_FUNCTION(UWebSocketConnectAsyncProxy::execConnect)
	{
		P_GET_OBJECT(UBlueprintWebSocket,Z_Param_WebSocket);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebSocketConnectAsyncProxy**)Z_Param__Result=UWebSocketConnectAsyncProxy::Connect(Z_Param_WebSocket,Z_Param_Url,Z_Param_Protocol);
		P_NATIVE_END;
	}
	void UWebSocketConnectAsyncProxy::StaticRegisterNativesUWebSocketConnectAsyncProxy()
	{
		UClass* Class = UWebSocketConnectAsyncProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UWebSocketConnectAsyncProxy::execConnect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics
	{
		struct WebSocketConnectAsyncProxy_eventConnect_Parms
		{
			const UBlueprintWebSocket* WebSocket;
			FString Url;
			FString Protocol;
			UWebSocketConnectAsyncProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_WebSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxy_eventConnect_Parms, WebSocket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_WebSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_WebSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxy_eventConnect_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxy_eventConnect_Parms, Protocol), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Protocol_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxy_eventConnect_Parms, ReturnValue), Z_Construct_UClass_UWebSocketConnectAsyncProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_WebSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Protocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n     * Helper node to easily connect to server and handle connection events.\n     * @param WebSocket The WebSocket used to connect.\n     * @param Url       The URL of the server we want to connect to.\n     * @param Protocol  The protocol to use. Should be \"ws\" or \"wss\".\n     * @param Headers   The header used during the upgrade.\n    */" },
		{ "DisplayName", "Connect WebSocket to WebSocket server" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Helper node to easily connect to server and handle connection events.\n@param WebSocket The WebSocket used to connect.\n@param Url       The URL of the server we want to connect to.\n@param Protocol  The protocol to use. Should be \"ws\" or \"wss\".\n@param Headers   The header used during the upgrade." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxy, nullptr, "Connect", nullptr, nullptr, sizeof(WebSocketConnectAsyncProxy_eventConnect_Parms), Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxy_NoRegister()
	{
		return UWebSocketConnectAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect, "Connect" }, // 4231842018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Asynchronous node to easily handle connection and events.\n **/" },
		{ "IncludePath", "BlueprintWebSocketNodes.h" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Asynchronous node to easily handle connection and events." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketConnectAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::ClassParams = {
		&UWebSocketConnectAsyncProxy::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketConnectAsyncProxy, 3016229327);
	template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UWebSocketConnectAsyncProxy>()
	{
		return UWebSocketConnectAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketConnectAsyncProxy(Z_Construct_UClass_UWebSocketConnectAsyncProxy, &UWebSocketConnectAsyncProxy::StaticClass, TEXT("/Script/BlueprintWebSocket"), TEXT("UWebSocketConnectAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketConnectAsyncProxy);
	DEFINE_FUNCTION(UWebSocketCreateConnectAsyncProxy::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebSocketCreateConnectAsyncProxy**)Z_Param__Result=UWebSocketCreateConnectAsyncProxy::Connect(Z_Param_Url,Z_Param_Protocol,Z_Param_Out_Headers);
		P_NATIVE_END;
	}
	void UWebSocketCreateConnectAsyncProxy::StaticRegisterNativesUWebSocketCreateConnectAsyncProxy()
	{
		UClass* Class = UWebSocketCreateConnectAsyncProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UWebSocketCreateConnectAsyncProxy::execConnect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics
	{
		struct WebSocketCreateConnectAsyncProxy_eventConnect_Parms
		{
			FString Url;
			FString Protocol;
			TMap<FString,FString> Headers;
			UWebSocketCreateConnectAsyncProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Headers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketCreateConnectAsyncProxy_eventConnect_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketCreateConnectAsyncProxy_eventConnect_Parms, Protocol), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Protocol_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketCreateConnectAsyncProxy_eventConnect_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketCreateConnectAsyncProxy_eventConnect_Parms, ReturnValue), Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Protocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Headers" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n     * Helper node to easily connect to server and handle connection events.\n     * @param Url       The URL of the server we want to connect to.\n     * @param Protocol  The protocol to use. Should be \"ws\" or \"wss\".\n     * @param Headers   The header used during the upgrade.\n    */" },
		{ "DisplayName", "Connect to WebSocket server" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Helper node to easily connect to server and handle connection events.\n@param Url       The URL of the server we want to connect to.\n@param Protocol  The protocol to use. Should be \"ws\" or \"wss\".\n@param Headers   The header used during the upgrade." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy, nullptr, "Connect", nullptr, nullptr, sizeof(WebSocketCreateConnectAsyncProxy_eventConnect_Parms), Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_NoRegister()
	{
		return UWebSocketCreateConnectAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect, "Connect" }, // 104541212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Asynchronous node to easily handle connection and events.\n **/" },
		{ "IncludePath", "BlueprintWebSocketNodes.h" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Asynchronous node to easily handle connection and events." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketCreateConnectAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::ClassParams = {
		&UWebSocketCreateConnectAsyncProxy::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketCreateConnectAsyncProxy, 1361002940);
	template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UWebSocketCreateConnectAsyncProxy>()
	{
		return UWebSocketCreateConnectAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketCreateConnectAsyncProxy(Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy, &UWebSocketCreateConnectAsyncProxy::StaticClass, TEXT("/Script/BlueprintWebSocket"), TEXT("UWebSocketCreateConnectAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketCreateConnectAsyncProxy);
	DEFINE_FUNCTION(UWebSocketReconnectProxy::execOnConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketReconnectProxy::execOnError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnError(Z_Param_ConnectionError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketReconnectProxy::execReconnect)
	{
		P_GET_OBJECT(UBlueprintWebSocket,Z_Param_WebSocket);
		P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttemptCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebSocketReconnectProxy**)Z_Param__Result=UWebSocketReconnectProxy::Reconnect(Z_Param_WebSocket,Z_Param_Protocol,Z_Param_URL,Z_Param_MaxAttemptCount);
		P_NATIVE_END;
	}
	void UWebSocketReconnectProxy::StaticRegisterNativesUWebSocketReconnectProxy()
	{
		UClass* Class = UWebSocketReconnectProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConnected", &UWebSocketReconnectProxy::execOnConnected },
			{ "OnError", &UWebSocketReconnectProxy::execOnError },
			{ "Reconnect", &UWebSocketReconnectProxy::execReconnect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketReconnectProxy, nullptr, "OnConnected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics
	{
		struct WebSocketReconnectProxy_eventOnError_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::NewProp_ConnectionError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::NewProp_ConnectionError = { "ConnectionError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventOnError_Parms, ConnectionError), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::NewProp_ConnectionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::NewProp_ConnectionError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::NewProp_ConnectionError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketReconnectProxy, nullptr, "OnError", nullptr, nullptr, sizeof(WebSocketReconnectProxy_eventOnError_Parms), Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketReconnectProxy_OnError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics
	{
		struct WebSocketReconnectProxy_eventReconnect_Parms
		{
			const UBlueprintWebSocket* WebSocket;
			FString Protocol;
			FString URL;
			int32 MaxAttemptCount;
			UWebSocketReconnectProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAttemptCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_WebSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, WebSocket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_WebSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_WebSocket_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, Protocol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_MaxAttemptCount = { "MaxAttemptCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, MaxAttemptCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, ReturnValue), Z_Construct_UClass_UWebSocketReconnectProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_WebSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_Protocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_MaxAttemptCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n     * Tries to reconnect to the specified server.\n     * @param WebSocket The WebSocket we want to connect.\n     * @param Protocol The protocol to use.\n     * @param URL The URL of the server.\n     * @param MaxAttemptCount The maximum attempt before we fail the reconnection. Pass < 1 for unlimited.\n    */" },
		{ "CPP_Default_MaxAttemptCount", "1" },
		{ "DisplayName", "Reconnect to WebSocket server" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Tries to reconnect to the specified server.\n@param WebSocket The WebSocket we want to connect.\n@param Protocol The protocol to use.\n@param URL The URL of the server.\n@param MaxAttemptCount The maximum attempt before we fail the reconnection. Pass < 1 for unlimited." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketReconnectProxy, nullptr, "Reconnect", nullptr, nullptr, sizeof(WebSocketReconnectProxy_eventReconnect_Parms), Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketReconnectProxy_NoRegister()
	{
		return UWebSocketReconnectProxy::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketReconnectProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Connected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttemptFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttemptFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketReconnectProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketReconnectProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected, "OnConnected" }, // 1499576249
		{ &Z_Construct_UFunction_UWebSocketReconnectProxy_OnError, "OnError" }, // 3258360152
		{ &Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect, "Reconnect" }, // 1489011170
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketReconnectProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintWebSocketNodes.h" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Connected_MetaData[] = {
		{ "Comment", "/**\n     * The socket is connected to the server.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "The socket is connected to the server." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketReconnectProxy, Connected), Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Connected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Connected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_AttemptFailed_MetaData[] = {
		{ "Comment", "/**\n     * An attempt to reconnect failed.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "An attempt to reconnect failed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_AttemptFailed = { "AttemptFailed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketReconnectProxy, AttemptFailed), Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_AttemptFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_AttemptFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Failed_MetaData[] = {
		{ "Comment", "/**\n     * We failed all attempts.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "We failed all attempts." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketReconnectProxy, Failed), Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Failed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_WebSocket_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketReconnectProxy, WebSocket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_WebSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_WebSocket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketReconnectProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Connected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_AttemptFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Failed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_WebSocket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketReconnectProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketReconnectProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::ClassParams = {
		&UWebSocketReconnectProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWebSocketReconnectProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketReconnectProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketReconnectProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketReconnectProxy, 2478990216);
	template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UWebSocketReconnectProxy>()
	{
		return UWebSocketReconnectProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketReconnectProxy(Z_Construct_UClass_UWebSocketReconnectProxy, &UWebSocketReconnectProxy::StaticClass, TEXT("/Script/BlueprintWebSocket"), TEXT("UWebSocketReconnectProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketReconnectProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
