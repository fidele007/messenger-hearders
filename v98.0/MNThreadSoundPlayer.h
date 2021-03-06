/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTypingNotificationManagerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>
#import <Messenger/FBMMessageSendListening.h>
#import <Messenger/MNThreadSummarySubscribing.h>

@protocol MNAuthenticationManager;
@class MNSoundController, FBMDeliveryReceiptGating, FBMMessageSendStatesGating, MNTypingNotificationManager, FBMLocalThreadMessagesQuerier, NSMutableSet, MNThreadViewModel, NSString;

@interface MNThreadSoundPlayer : NSObject <MNTypingNotificationManagerDelegate, FBClassProvidable, MNThreadViewModelConfigurable, FBMMessageSendListening, MNThreadSummarySubscribing> {

	MNSoundController* _soundController;
	id<MNAuthenticationManager> _authManager;
	FBMDeliveryReceiptGating* _deliveryReceiptGating;
	FBMMessageSendStatesGating* _sendStatesGating;
	MNTypingNotificationManager* _typingManager;
	FBMLocalThreadMessagesQuerier* _threadMessagesQuerier;
	BOOL _isObserving;
	NSMutableSet* _sentMessageSet;
	BOOL _enabled;
	MNThreadViewModel* _threadViewModel;

}

@property (nonatomic,retain) MNThreadViewModel * threadViewModel;              //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_stopObservers;
-(void)_startObservers;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(MNThreadViewModel *)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)_updateObservation;
-(void)_inviteBannerDidAppear:(id)arg1 ;
-(void)_inviteBannerDidDismiss:(id)arg1 ;
-(void)_didUpdateReadReceiptForThreadSummary:(id)arg1 ;
-(void)typingBecameActive;
-(void)typingBecameInactive;
-(BOOL)enabled;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
@end

