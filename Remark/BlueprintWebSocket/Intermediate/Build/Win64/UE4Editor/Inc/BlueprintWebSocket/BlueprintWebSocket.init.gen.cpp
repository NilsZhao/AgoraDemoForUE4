// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintWebSocket_init() {}
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlueprintWebSocket()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlueprintWebSocket",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF6FD32EB,
				0xB38030EB,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
