/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoPlaybackEventListener.h>
#import <Messenger/MNMontageMuteControllerListener.h>
#import <Messenger/MNMontageMessageController.h>

@protocol MNMontageMessageControllerDelegate;
@class FBUserSession, MNMontageViewMessageWrapper, MNVideoAttachmentViewModel, MNMontageMuteController, FBLazyCreator, FBVideoViewManager, NSString;

@interface MNMontageVideoController : NSObject <FBVideoPlaybackEventListener, MNMontageMuteControllerListener, MNMontageMessageController> {

	FBUserSession* _session;
	MNMontageViewMessageWrapper* _messageWrapper;
	MNVideoAttachmentViewModel* _videoAttachment;
	MNMontageMuteController* _montageMuteController;
	FBLazyCreator* _maskedVideoViewCreator;
	FBVideoViewManager* _videoManager;
	BOOL _hasRequestedPlaying;
	BOOL _hasStartedPlaying;
	id<MNMontageMessageControllerDelegate> _delegate;
	unsigned long long _requestedPlayingTime;
	unsigned long long _startedPlayingTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMontageMessageControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedPlaying;                                          //@synthesize hasRequestedPlaying=_hasRequestedPlaying - In the implementation block
@property (nonatomic,readonly) BOOL hasStartedPlaying;                                            //@synthesize hasStartedPlaying=_hasStartedPlaying - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedPlayingTime;                           //@synthesize requestedPlayingTime=_requestedPlayingTime - In the implementation block
@property (nonatomic,readonly) unsigned long long startedPlayingTime;                             //@synthesize startedPlayingTime=_startedPlayingTime - In the implementation block
-(id)_videoID;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithMessageWrapper:(id)arg1 videoAttachment:(id)arg2 session:(id)arg3 montageMuteController:(id)arg4 ;
-(id)messageWrapper;
-(id)messageView;
-(BOOL)updatesProgressManually;
-(void)preloadContent;
-(BOOL)downloadContentAndPlay;
-(BOOL)hasRequestedPlaying;
-(BOOL)hasStartedPlaying;
-(unsigned long long)requestedPlayingTime;
-(unsigned long long)startedPlayingTime;
-(id)_unmaskedVideoView;
-(void)_initializeVideoManager;
-(id)videoPlaybackItem;
-(id)_loggingProvider;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)montageMuteControllerDidUpdate:(id)arg1 ;
-(void)setDelegate:(id<MNMontageMessageControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMontageMessageControllerDelegate>)delegate;
-(double)duration;
-(void)reset;
-(void)stop;
-(void)resume;
-(void)pause;
@end

