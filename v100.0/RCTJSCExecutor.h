/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTJavaScriptExecutor.h>

@class NSThread, RCTPerformanceLogger, RCTJavaScriptContext, RCTBridge, NSString;

@interface RCTJSCExecutor : NSObject <RCTJavaScriptExecutor> {

	BOOL _useCustomJSCLibrary;
	BOOL _tryBytecode;
	NSThread* _javaScriptThread;
	RCTPerformanceLogger* _performanceLogger;
	RCTJavaScriptContext* _context;
	RandomAccessBundleData* _randomAccessBundle;
	OpaqueJSValueRef _batchedBridgeRef;
	BOOL _valid;
	RCTBridge* _bridge;

}

@property (nonatomic,readonly) BOOL useCustomJSCLibrary;                              //@synthesize useCustomJSCLibrary=_useCustomJSCLibrary - In the implementation block
@property (nonatomic,readonly) int bytecodeFileFormatVersion; 
@property (nonatomic,copy) NSString * contextName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                             //@synthesize valid=_valid - In the implementation block
+(id)moduleName;
+(void)runRunLoopThread;
+(id)initializedExecutorWithContextProvider:(id)arg1 JSContext:(id*)arg2 ;
+(id)__rct_export__5560;
+(void)load;
-(id)initWithUseCustomJSCLibrary:(BOOL)arg1 ;
-(id)initWithUseCustomJSCLibrary:(BOOL)arg1 tryBytecode:(BOOL)arg2 ;
-(id)initWithJSContextData:(const RCTJSContextData*)arg1 ;
-(void)executeBlockOnJavaScriptQueue:(/*^block*/id)arg1 ;
-(void)_executeJSCall:(id)arg1 arguments:(id)arg2 unwrapResult:(BOOL)arg3 callback:(/*^block*/id)arg4 ;
-(void)_callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 returnValue:(BOOL)arg4 unwrapResult:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(void)flushedQueue:(/*^block*/id)arg1 ;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)invokeCallbackID:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)injectJSONText:(id)arg1 asGlobalObjectNamed:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)executeAsyncBlockOnJavaScriptQueue:(/*^block*/id)arg1 ;
-(id)synchronouslyExecuteApplicationScript:(id)arg1 sourceURL:(id)arg2 ;
-(void)toggleProfilingFlag:(id)arg1 ;
-(int)bytecodeFileFormatVersion;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 jsValueCallback:(/*^block*/id)arg4 ;
-(void)_nativeRequire:(id)arg1 ;
-(BOOL)useCustomJSCLibrary;
-(NSString *)contextName;
-(void)setContextName:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(id)context;
-(id)jsContext;
-(void)setUp;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end
