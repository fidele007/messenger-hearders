/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTBridge.h>

@class NSMutableArray, NSMutableDictionary, NSArray, RCTDisplayLink, NSThread, RCTPerformanceLogger, RCTBridge;

@interface RCTCxxBridge : RCTBridge {

	BOOL _wasBatchActive;
	NSMutableArray* _pendingCalls;
	int _pendingCount;
	NSMutableDictionary* _moduleDataByName;
	NSArray* _moduleDataByID;
	NSArray* _moduleClassesByID;
	unsigned long long _modulesInitializedOnMainQueue;
	RCTDisplayLink* _displayLink;
	NSThread* _jsThread;
	promise<std::__1::shared_ptr<facebook::react::RCTMessageThread> >* _jsMessageThreadPromise;
	shared_ptr<facebook::react::RCTMessageThread>* _jsMessageThread;
	shared_ptr<facebook::react::Instance>* _reactInstance;
	BOOL _loading;
	BOOL _valid;
	BOOL _moduleSetupComplete;
	RCTPerformanceLogger* _performanceLogger;
	RCTBridge* _parentBridge;

}

@property (nonatomic,__weak,readonly) RCTBridge * parentBridge;              //@synthesize parentBridge=_parentBridge - In the implementation block
@property (nonatomic,readonly) BOOL moduleSetupComplete;                     //@synthesize moduleSetupComplete=_moduleSetupComplete - In the implementation block
+(void)initialize;
-(id)performanceLogger;
-(void)batchDidComplete;
-(void)partialBatchDidFlush;
-(OpaqueJSContextRef)jsContextRef;
-(id)initWithDelegate:(id)arg1 bundleURL:(id)arg2 moduleProvider:(/*^block*/id)arg3 launchOptions:(id)arg4 ;
-(void)_tryAndHandleError:(/*^block*/id)arg1 ;
-(void)runJSRunLoop;
-(void)_initModulesWithDispatchGroup:(id)arg1 ;
-(Class)executorClass;
-(void)_initializeBridge:(shared_ptr<facebook::react::JSExecutorFactory>*)arg1 ;
-(void)executeSourceCode:(id)arg1 sync:(BOOL)arg2 ;
-(void)loadSource:(/*^block*/id)arg1 onProgress:(/*^block*/id)arg2 ;
-(shared_ptr<facebook::react::ModuleRegistry>*)_buildModuleRegistry;
-(void)_prepareModulesWithDispatchGroup:(id)arg1 ;
-(void)registerModuleForFrameUpdates:(id)arg1 withModuleData:(id)arg2 ;
-(void)_flushPendingCalls;
-(void)executeBlockOnJavaScriptThread:(/*^block*/id)arg1 ;
-(void)executeApplicationScriptSync:(id)arg1 url:(id)arg2 ;
-(void)enqueueApplicationScript:(id)arg1 url:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)setExecutorClass:(Class)arg1 ;
-(void)dispatchBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_runAfterLoad:(/*^block*/id)arg1 ;
-(id)initWithParentBridge:(id)arg1 ;
-(id)moduleClasses;
-(id)moduleDataForName:(id)arg1 ;
-(id)moduleForName:(id)arg1 ;
-(BOOL)moduleIsInitialized:(Class)arg1 ;
-(id)configForModuleName:(id)arg1 ;
-(void)whitelistedModulesDidChange;
-(id)initWithBundleURL:(id)arg1 moduleProvider:(/*^block*/id)arg2 launchOptions:(id)arg3 ;
-(void)enqueueJSCall:(id)arg1 method:(id)arg2 args:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)enqueueCallback:(id)arg1 args:(id)arg2 ;
-(void)_immediatelyCallTimer:(id)arg1 ;
-(id)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id*)arg4 ;
-(void)startProfiling;
-(void)stopProfiling:(/*^block*/id)arg1 ;
-(BOOL)isBatchActive;
-(RCTBridge *)parentBridge;
-(BOOL)moduleSetupComplete;
-(void)logMessage:(id)arg1 level:(id)arg2 ;
-(void)reload;
-(id)delegate;
-(void)invalidate;
-(BOOL)isValid;
-(id)bundleURL;
-(void)start;
-(BOOL)isLoading;
-(void)handleError:(id)arg1 ;
-(id)jsContext;
-(void)setBundleURL:(id)arg1 ;
-(void)setUp;
@end

