/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeModule.h>

@protocol RCTExceptionsManagerDelegate;
@class RCTBridge, NSString;

@interface RCTExceptionsManager : NSObject <RCTBridgeModule> {

	id<RCTExceptionsManagerDelegate> _delegate;
	unsigned long long _reloadRetries;
	RCTBridge* _bridge;
	unsigned long long _maxReloadAttempts;

}

@property (assign,nonatomic) unsigned long long maxReloadAttempts;                    //@synthesize maxReloadAttempts=_maxReloadAttempts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__380;
+(id)__rct_export__491;
+(id)__rct_export__702;
+(id)__rct_export__813;
+(void)load;
-(void)reportFatalException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(void)reportSoftException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(void)updateExceptionMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(void)reportUnhandledException:(id)arg1 stack:(id)arg2 ;
-(unsigned long long)maxReloadAttempts;
-(void)setMaxReloadAttempts:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(RCTBridge *)bridge;
@end
