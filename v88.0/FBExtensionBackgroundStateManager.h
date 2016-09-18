/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBackgroundStateManaging.h>
#import <Messenger/FBExtensionBackgroundStateListener.h>

@class NSString;

@interface FBExtensionBackgroundStateManager : NSObject <FBBackgroundStateManaging, FBExtensionBackgroundStateListener> {

	unsigned long long _extensionState;
	BOOL _applicationBecomingActive;

}

@property (assign,getter=isApplicationBecomingActive,nonatomic) BOOL applicationBecomingActive;              //@synthesize applicationBecomingActive=_applicationBecomingActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isApplicationBackgrounded;
-(BOOL)isApplicationActive;
-(void)setApplicationBecomingActive:(BOOL)arg1 ;
-(BOOL)supportsBackgroundRefreshStatus;
-(BOOL)isApplicationInactive;
-(BOOL)isApplicationBecomingActive;
-(void)extensionDidReturnToHostApp;
-(void)_extensionWillEnterForeground;
-(void)_extensionDidEnterBackground;
-(void)_extensionWillResignActive;
-(void)_extensionDidBecomeActive;
-(void)dealloc;
-(id)init;
-(long long)applicationState;
-(unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)endBackgroundTask:(unsigned long long)arg1 ;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(long long)backgroundRefreshStatus;
-(void)extensionDidBecomeActive;
@end

