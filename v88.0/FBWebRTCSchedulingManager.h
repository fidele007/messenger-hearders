/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNInAppNotificationManaging;
@class FBUserSession, MNUserStore, MNThreadImageManager, MNProfileImageViewController, FBWebRTCCallInitiator, MNSimpleSingleThreadFetcher, NSString;

@interface FBWebRTCSchedulingManager : NSObject <FBClassProvidable> {

	FBUserSession* _userSession;
	MNUserStore* _userStore;
	id<FBProvider> _callInitiatorProvider;
	id<FBProvider> _threadFetcherProvider;
	id<MNInAppNotificationManaging> _inAppNotificationManager;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	FBWebRTCCallInitiator* _callInitiator;
	MNSimpleSingleThreadFetcher* _threadFetcher;

}

@property (nonatomic,retain) FBWebRTCCallInitiator * callInitiator;                    //@synthesize callInitiator=_callInitiator - In the implementation block
@property (nonatomic,retain) MNSimpleSingleThreadFetcher * threadFetcher;              //@synthesize threadFetcher=_threadFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBWebRTCCallInitiator *)callInitiator;
-(void)setCallInitiator:(FBWebRTCCallInitiator *)arg1 ;
-(void)setThreadFetcher:(MNSimpleSingleThreadFetcher *)arg1 ;
-(MNSimpleSingleThreadFetcher *)threadFetcher;
-(void)_startCallFromReminder:(id)arg1 ;
-(void)_joinGroupCallFromReminder:(id)arg1 ;
-(void)_callReminderMessageReceived:(id)arg1 ;
-(void)_startCallFromReminderWithUserId:(id)arg1 inAppNotification:(BOOL)arg2 ;
-(void)_joinGroupCallFromReminderWithThreadId:(id)arg1 inAppNotification:(BOOL)arg2 ;
-(void)_showInAppNotificationWithEventReminder:(id)arg1 ;
-(void)_joinGroupCallFromReminderWithThreadSummary:(id)arg1 inAppNotification:(BOOL)arg2 ;
-(void)_showInAppNotificationWithEventReminder:(id)arg1 profileImageModel:(id)arg2 ;
-(void)dealloc;
-(void)_start;
@end

