/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeDelegate.h>
#import <Messenger/RCTExceptionsManagerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class FBLazyCreator, FBUserSession, RCTBridge, NSString;

@interface MNOmniMReactModule : NSObject <RCTBridgeDelegate, RCTExceptionsManagerDelegate, FBViewerContextClassProvidable> {

	FBLazyCreator* _bridgeCreator;
	FBUserSession* _session;
	id<FBProvider> _miniAppCoordinatorProvider;
	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _directMHandlerProvider;

}

@property (nonatomic,readonly) RCTBridge * reactBridge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)sourceURLForBridge:(id)arg1 ;
-(id)extraModulesForBridge:(id)arg1 ;
-(RCTBridge *)reactBridge;
-(void)handleFatalError:(id)arg1 ;
-(void)_invalidateBridge;
-(void)handleSoftJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(void)handleFatalJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
@end

