/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNLoginProcessDeciding.h>

@protocol FBProvider;
@class FBAnalytics, FBAPISessionStore, MNProtectedDataAvailableDelayer, FBMPushKitViOSPreLoginHandlerRegistrar, NSString;

@interface MNMessengerLoginProcessDecider : NSObject <MNLoginProcessDeciding> {

	id<FBProvider> _loggedInUserInfoManagerProvider;
	FBAnalytics* _analytics;
	FBAPISessionStore* _apiSessionStore;
	MNProtectedDataAvailableDelayer* _protectedDataAvailableDelayer;
	FBMPushKitViOSPreLoginHandlerRegistrar* _preLoginPushHandlerRegistrar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_decideAndExecuteLoginProcessWithAppSession:(id)arg1 launchOptions:(id)arg2 shouldRetry:(BOOL)arg3 ;
-(void)_handleProtectedDataDidBecomeAvailableWithAppSession:(id)arg1 launchOptions:(id)arg2 startTime:(id)arg3 ;
-(void)decideAndExecuteLoginProcessWithAppSession:(id)arg1 launchOptions:(id)arg2 ;
-(id)initWithLoggedInUserInfoManagerProvider:(id)arg1 apiSessionStore:(id)arg2 protectedDataAvailableDelayer:(id)arg3 preLoginPushHandlerRegistrar:(id)arg4 analytics:(id)arg5 ;
@end

