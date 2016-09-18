/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCRecentCallLogListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNMessagesAppearanceEventListener.h>

@protocol FBProvider, MNBadgeUpdater;
@class FBUserSession, FBWebRTCRecentCallLog, MNNavigationCoordinator, NSString;

@interface MNWebRTCCallTabBadgeUpdateService : NSObject <FBWebRTCRecentCallLogListener, FBViewerContextClassProvidable, MNServiceControllable, MNMessagesAppearanceEventListener> {

	FBUserSession* _session;
	id<FBProvider> _callLogProvider;
	FBWebRTCRecentCallLog* _callLog;
	id<FBProvider> _navigationCoordinatorProvider;
	MNNavigationCoordinator* _navigationCoordinator;
	id<MNBadgeUpdater> _badgeUpdater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
-(id)initWithRecentCallLogProvider:(id)arg1 navigationCoordinatorProvider:(id)arg2 session:(id)arg3 ;
-(void)recentCallLogLoaded;
-(void)recentCallLogCallsChanged;
-(void)recentCallLogUnseenMissedCallCountChanged;
-(void)_updateTabBarBadge;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

