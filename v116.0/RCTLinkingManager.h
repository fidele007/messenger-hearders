/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTEventEmitter.h>

@interface RCTLinkingManager : RCTEventEmitter
+(id)__rct_export__770;
+(id)__rct_export__891;
+(id)__rct_export__1082;
+(id)moduleName;
+(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
+(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(void)handleOpenURLNotification:(id)arg1 ;
-(void)openURL:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(void)canOpenURL:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(void)getInitialURL:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
@end

