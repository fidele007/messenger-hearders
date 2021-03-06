/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>
#import <Messenger/ZRURLCheckerDelegate.h>
#import <Messenger/FBApplicationSendEventHookable.h>
#import <Messenger/FBZeroRatedApplicationProtocol.h>

@class NSMutableSet, ZRURLChecker, NSMutableDictionary, NSSet, FBBackgroundTaskListenerAnnouncer, UIWindow, NSString;

@interface MNApplication : UIApplication <ZRURLCheckerDelegate, FBApplicationSendEventHookable, FBZeroRatedApplicationProtocol> {

	NSMutableSet* _eventListeners;
	ZRURLChecker* _urlChecker;
	NSMutableDictionary* _activeBackgroundTasks;
	NSSet* _supportedURLSchemes;
	FBBackgroundTaskListenerAnnouncer* _backgroundTaskAnnouncer;
	UIWindow* _mn_applicationWindow;

}

@property (nonatomic,readonly) UIWindow * mn_applicationWindow;                                          //@synthesize mn_applicationWindow=_mn_applicationWindow - In the implementation block
@property (nonatomic,readonly) FBBackgroundTaskListenerAnnouncer * backgroundTaskAnnouncer;              //@synthesize backgroundTaskAnnouncer=_backgroundTaskAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isTimelineUrl:(id)arg1 ;
+(id)fencePrefKeyForURL:(id)arg1 ;
+(id)sharedApplication;
-(BOOL)openURL:(id)arg1 withZRTariffedUxSentry:(id)arg2 ;
-(BOOL)_shouldStartBackgroundTaskWithName:(id)arg1 ;
-(void)_startTrackingTask:(unsigned long long)arg1 withName:(id)arg2 ;
-(void)_stopTrackingTask:(unsigned long long)arg1 ;
-(id)_supportedURLSchemes;
-(BOOL)urlChecker:(id)arg1 didVerifyCanOpenURL:(id)arg2 ;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)openURL:(id)arg1 withZRTariffedUxSentry:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)configureWithApplicationWindow:(id)arg1 ;
-(UIWindow *)mn_applicationWindow;
-(FBBackgroundTaskListenerAnnouncer *)backgroundTaskAnnouncer;
-(void)dealloc;
-(id)init;
-(BOOL)openURL:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(unsigned long long)beginBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 ;
-(unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)endBackgroundTask:(unsigned long long)arg1 ;
@end

