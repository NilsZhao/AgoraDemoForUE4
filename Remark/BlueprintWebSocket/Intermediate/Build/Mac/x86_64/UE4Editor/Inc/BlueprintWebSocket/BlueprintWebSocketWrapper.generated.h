// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBlueprintWebSocketIsConnectedExecution : uint8;
 
class UBlueprintWebSocket;
#ifdef BLUEPRINTWEBSOCKET_BlueprintWebSocketWrapper_generated_h
#error "BlueprintWebSocketWrapper.generated.h already included, missing '#pragma once' in BlueprintWebSocketWrapper.h"
#endif
#define BLUEPRINTWEBSOCKET_BlueprintWebSocketWrapper_generated_h

#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_15_DELEGATE \
struct _Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms \
{ \
	FString MessageString; \
}; \
static inline void FWebSocketMessageSentEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketMessageSentEvent, const FString& MessageString) \
{ \
	_Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms Parms; \
	Parms.MessageString=MessageString; \
	WebSocketMessageSentEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_14_DELEGATE \
struct _Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms \
{ \
	TArray<uint8> Data; \
	int32 BytesRemaining; \
}; \
static inline void FWebSocketRawMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketRawMessageEvent, TArray<uint8> const& Data, int32 BytesRemaining) \
{ \
	_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms Parms; \
	Parms.Data=Data; \
	Parms.BytesRemaining=BytesRemaining; \
	WebSocketRawMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_13_DELEGATE \
struct _Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms \
{ \
	FString MessageString; \
}; \
static inline void FWebSocketMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketMessageEvent, const FString& MessageString) \
{ \
	_Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms Parms; \
	Parms.MessageString=MessageString; \
	WebSocketMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_12_DELEGATE \
struct _Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms \
{ \
	int64 StatusCode; \
	FString Reason; \
	bool bWasClean; \
}; \
static inline void FWebSocketClosedEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketClosedEvent, int64 StatusCode, const FString& Reason, bool bWasClean) \
{ \
	_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.Reason=Reason; \
	Parms.bWasClean=bWasClean ? true : false; \
	WebSocketClosedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_11_DELEGATE \
struct _Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms \
{ \
	FString ConnectionError; \
}; \
static inline void FWebSocketConnectionErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectionErrorEvent, const FString& ConnectionError) \
{ \
	_Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms Parms; \
	Parms.ConnectionError=ConnectionError; \
	WebSocketConnectionErrorEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_10_DELEGATE \
static inline void FWebSocketConnectedEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectedEvent) \
{ \
	WebSocketConnectedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_SPARSE_DATA
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMessage); \
	DECLARE_FUNCTION(execOnClosed); \
	DECLARE_FUNCTION(execOnConnectionError); \
	DECLARE_FUNCTION(execOnConnected); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSendRawMessage); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execBranchIsConnected); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execRemoveHeader); \
	DECLARE_FUNCTION(execAddHeader); \
	DECLARE_FUNCTION(execSetHeaders); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execCreateWebSocket);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMessage); \
	DECLARE_FUNCTION(execOnClosed); \
	DECLARE_FUNCTION(execOnConnectionError); \
	DECLARE_FUNCTION(execOnConnected); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSendRawMessage); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execBranchIsConnected); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execRemoveHeader); \
	DECLARE_FUNCTION(execAddHeader); \
	DECLARE_FUNCTION(execSetHeaders); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execCreateWebSocket);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintWebSocket(); \
	friend struct Z_Construct_UClass_UBlueprintWebSocket_Statics; \
public: \
	DECLARE_CLASS(UBlueprintWebSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintWebSocket)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintWebSocket(); \
	friend struct Z_Construct_UClass_UBlueprintWebSocket_Statics; \
public: \
	DECLARE_CLASS(UBlueprintWebSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintWebSocket)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintWebSocket(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintWebSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintWebSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintWebSocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintWebSocket(UBlueprintWebSocket&&); \
	NO_API UBlueprintWebSocket(const UBlueprintWebSocket&); \
public:


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintWebSocket(UBlueprintWebSocket&&); \
	NO_API UBlueprintWebSocket(const UBlueprintWebSocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintWebSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintWebSocket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlueprintWebSocket)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_31_PROLOG
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_INCLASS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<class UBlueprintWebSocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h


#define FOREACH_ENUM_EBLUEPRINTWEBSOCKETISCONNECTEDEXECUTION(op) \
	op(EBlueprintWebSocketIsConnectedExecution::Connected) \
	op(EBlueprintWebSocketIsConnectedExecution::NotConnected) 

enum class EBlueprintWebSocketIsConnectedExecution : uint8;
template<> BLUEPRINTWEBSOCKET_API UEnum* StaticEnum<EBlueprintWebSocketIsConnectedExecution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
