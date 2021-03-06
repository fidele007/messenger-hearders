/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBWebRTCAudioClipControllerDelegate.h>
#import <Messenger/FBWebRTCInCallEventListener.h>

@protocol FBWebRTCActivityViewControllerDelegate;
@class FBWebRTCSession, FBMobileConfigContextManager, FBWebRTCCallViewModel, FBWebRTCActivityView, FBWebRTCAudioClipController, NSString;

@interface FBWebRTCActivityViewController : UIViewController <FBWebRTCAudioClipControllerDelegate, FBWebRTCInCallEventListener> {

	FBWebRTCSession* _session;
	FBMobileConfigContextManager* _configManager;
	FBWebRTCCallViewModel* _currentCall;
	FBWebRTCActivityView* _activityView;
	FBWebRTCAudioClipController* _audioClipController;
	unsigned long long _viewState;
	unsigned long long _activityViewType;
	id<FBWebRTCActivityViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long activityViewType;                                   //@synthesize activityViewType=_activityViewType - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendAndShowEmojiForAudioClip:(id)arg1 ;
-(void)_logAudioClip:(id)arg1 ;
-(void)audioClipController:(id)arg1 didSelectAudioClip:(id)arg2 ;
-(void)audioClipController:(id)arg1 didPlayAudioClip:(id)arg2 ;
-(void)audioClipController:(id)arg1 didActivateAudioEffect:(id)arg2 ;
-(void)audioClipControllerDidCancelSelection:(id)arg1 ;
-(void)callUpdatedInputAudioLevel:(unsigned long long)arg1 outputAudioLevel:(unsigned long long)arg2 forCall:(id)arg3 ;
-(void)callUpdatedActiveAudioLevels:(id)arg1 forCall:(id)arg2 ;
-(void)callReceivedData:(id)arg1 topic:(id)arg2 forCall:(id)arg3 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 configManager:(id)arg3 ;
-(void)switchLayoutToState:(unsigned long long)arg1 ;
-(void)configureWithSession:(id)arg1 call:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(unsigned long long)activityViewType;
-(void)setDelegate:(id<FBWebRTCActivityViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCActivityViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)showView:(unsigned long long)arg1 ;
@end

