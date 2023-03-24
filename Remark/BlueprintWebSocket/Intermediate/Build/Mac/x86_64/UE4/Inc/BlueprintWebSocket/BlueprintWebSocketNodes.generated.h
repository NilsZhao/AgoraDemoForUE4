// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprintWebSocket;
class UWebSocketConnectAsyncProxy;
 
class UWebSocketCreateConnectAsyncProxy;
class UWebSocketReconnectProxy;
#ifdef BLUEPRINTWEBSOCKET_BlueprintWebSocketNodes_generated_h
#error "BlueprintWebSocketNodes.generated.h already included, missing '#pragma once' in BlueprintWebSocketNodes.h"
#endif
#define BLUEPRINTWEBSOCKET_BlueprintWebSocketNodes_generated_h

#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_87_DELEGATE \
struct _Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms \
{ \
	UBlueprintWebSocket* WebSocket; \
	int32 RemainingAttempts; \
}; \
static inline void FOnReconnectionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnReconnectionEvent, UBlueprintWebSocket* WebSocket, int32 RemainingAttempts) \
{ \
	_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms Parms; \
	Parms.WebSocket=WebSocket; \
	Parms.RemainingAttempts=RemainingAttempts; \
	OnReconnectionEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_11_DELEGATE \
struct _Script_BlueprintWebSocket_eventWebSocketEvent_Parms \
{ \
	const UBlueprintWebSocket* Socket; \
	int32 StatusCode; \
	FString Message; \
}; \
static inline void FWebSocketEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketEvent, const UBlueprintWebSocket* Socket, const int32 StatusCode, const FString& Message) \
{ \
	_Script_BlueprintWebSocket_eventWebSocketEvent_Parms Parms; \
	Parms.Socket=Socket; \
	Parms.StatusCode=StatusCode; \
	Parms.Message=Message; \
	WebSocketEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_SPARSE_DATA
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMessageInternal); \
	DECLARE_FUNCTION(execOnCloseInternal); \
	DECLARE_FUNCTION(execOnConnectionErrorInternal); \
	DECLARE_FUNCTION(execOnConnectedInternal);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMessageInternal); \
	DECLARE_FUNCTION(execOnCloseInternal); \
	DECLARE_FUNCTION(execOnConnectionErrorInternal); \
	DECLARE_FUNCTION(execOnConnectedInternal);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketConnectAsyncProxyBase(); \
	friend struct Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics; \
public: \
	DECLARE_CLASS(UWebSocketConnectAsyncProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketConnectAsyncProxyBase)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketConnectAsyncProxyBase(); \
	friend struct Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics; \
public: \
	DECLARE_CLASS(UWebSocketConnectAsyncProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketConnectAsyncProxyBase)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketConnectAsyncProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketConnectAsyncProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketConnectAsyncProxyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketConnectAsyncProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketConnectAsyncProxyBase(UWebSocketConnectAsyncProxyBase&&); \
	NO_API UWebSocketConnectAsyncProxyBase(const UWebSocketConnectAsyncProxyBase&); \
public:


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketConnectAsyncProxyBase(UWebSocketConnectAsyncProxyBase&&); \
	NO_API UWebSocketConnectAsyncProxyBase(const UWebSocketConnectAsyncProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketConnectAsyncProxyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketConnectAsyncProxyBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketConnectAsyncProxyBase)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Socket() { return STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, Socket); }


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_16_PROLOG
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_INCLASS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<class UWebSocketConnectAsyncProxyBase>();

#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_SPARSE_DATA
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnect);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnect);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketConnectAsyncProxy(); \
	friend struct Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UWebSocketConnectAsyncProxy, UWebSocketConnectAsyncProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketConnectAsyncProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketConnectAsyncProxy(); \
	friend struct Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UWebSocketConnectAsyncProxy, UWebSocketConnectAsyncProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketConnectAsyncProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketConnectAsyncProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketConnectAsyncProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketConnectAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketConnectAsyncProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketConnectAsyncProxy(UWebSocketConnectAsyncProxy&&); \
	NO_API UWebSocketConnectAsyncProxy(const UWebSocketConnectAsyncProxy&); \
public:


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketConnectAsyncProxy(UWebSocketConnectAsyncProxy&&); \
	NO_API UWebSocketConnectAsyncProxy(const UWebSocketConnectAsyncProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketConnectAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketConnectAsyncProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketConnectAsyncProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_68_PROLOG
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_INCLASS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<class UWebSocketConnectAsyncProxy>();

#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_SPARSE_DATA
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnect);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnect);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketCreateConnectAsyncProxy(); \
	friend struct Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UWebSocketCreateConnectAsyncProxy, UWebSocketConnectAsyncProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketCreateConnectAsyncProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketCreateConnectAsyncProxy(); \
	friend struct Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UWebSocketCreateConnectAsyncProxy, UWebSocketConnectAsyncProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketCreateConnectAsyncProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketCreateConnectAsyncProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketCreateConnectAsyncProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketCreateConnectAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketCreateConnectAsyncProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketCreateConnectAsyncProxy(UWebSocketCreateConnectAsyncProxy&&); \
	NO_API UWebSocketCreateConnectAsyncProxy(const UWebSocketCreateConnectAsyncProxy&); \
public:


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketCreateConnectAsyncProxy(UWebSocketCreateConnectAsyncProxy&&); \
	NO_API UWebSocketCreateConnectAsyncProxy(const UWebSocketCreateConnectAsyncProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketCreateConnectAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketCreateConnectAsyncProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketCreateConnectAsyncProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_92_PROLOG
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_INCLASS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<class UWebSocketCreateConnectAsyncProxy>();

#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_SPARSE_DATA
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnConnected); \
	DECLARE_FUNCTION(execOnError); \
	DECLARE_FUNCTION(execReconnect);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnConnected); \
	DECLARE_FUNCTION(execOnError); \
	DECLARE_FUNCTION(execReconnect);


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketReconnectProxy(); \
	friend struct Z_Construct_UClass_UWebSocketReconnectProxy_Statics; \
public: \
	DECLARE_CLASS(UWebSocketReconnectProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketReconnectProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketReconnectProxy(); \
	friend struct Z_Construct_UClass_UWebSocketReconnectProxy_Statics; \
public: \
	DECLARE_CLASS(UWebSocketReconnectProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketReconnectProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketReconnectProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketReconnectProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketReconnectProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketReconnectProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketReconnectProxy(UWebSocketReconnectProxy&&); \
	NO_API UWebSocketReconnectProxy(const UWebSocketReconnectProxy&); \
public:


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketReconnectProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketReconnectProxy(UWebSocketReconnectProxy&&); \
	NO_API UWebSocketReconnectProxy(const UWebSocketReconnectProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketReconnectProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketReconnectProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketReconnectProxy)


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WebSocket() { return STRUCT_OFFSET(UWebSocketReconnectProxy, WebSocket); }


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_110_PROLOG
#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_INCLASS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_SPARSE_DATA \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<class UWebSocketReconnectProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
