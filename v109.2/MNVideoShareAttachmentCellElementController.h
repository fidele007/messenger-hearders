/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNDefaultAttachmentCellElementController.h>
#import <Messenger/FBModalFullscreenControllerDelegate.h>
#import <Messenger/FBPickUpAttachmentNodeDelegate.h>
#import <Messenger/MNVideoOverlayViewDelegate.h>
#import <Messenger/MNVideoPlaybackEventListener.h>
#import <FBSharedFramework/FBBackgroundingListener.h>
#import <Messenger/MNVideoShareAttachmentViewDelegate.h>

@protocol FBIntentHandler, FBModalPresentationSource, FBOpenableAttachmentNodeObserver;
@class FBVideoNetworker, MNCDNAssetURLResolver, NSURL, MNMessageVideoControllerMap, FBLazyCreator, UIView, MNVideoOverlayView, MNVideoPlaybackWaterfallAnalyticsLogger, NSString;

@interface MNVideoShareAttachmentCellElementController : MNDefaultAttachmentCellElementController <FBModalFullscreenControllerDelegate, FBPickUpAttachmentNodeDelegate, MNVideoOverlayViewDelegate, MNVideoPlaybackEventListener, FBBackgroundingListener, MNVideoShareAttachmentViewDelegate> {

	id<FBIntentHandler> _intentHandler;
	FBVideoNetworker* _videoNetworker;
	MNCDNAssetURLResolver* _urlResolver;
	NSURL* _contentURL;
	MNMessageVideoControllerMap* _videoControllerMap;
	long long _state;
	id<FBModalPresentationSource> _modalPresentationSource;
	id<FBOpenableAttachmentNodeObserver> _attachmentNodeObserver;
	FBLazyCreator* _modalFullscreenControllerCreator;
	UIView* _touchBlockingUnderlayView;
	MNVideoOverlayView* _videoControlsOverlayView;
	MNVideoPlaybackWaterfallAnalyticsLogger* _videoPlaybackLogger;
	unsigned long long _requestedTime;
	double _lastStartTimePosition;
	BOOL _offMainThreadRenderingEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)modalPresentationStackManager;
-(void)playVideoMuted:(BOOL)arg1 loopPlaybackEnabled:(BOOL)arg2 ;
-(void)attachmentNodeMayOpen:(id)arg1 ;
-(void)attachmentNodeWillOpen:(id)arg1 animated:(BOOL)arg2 ;
-(void)attachmentNodeDidOpen:(id)arg1 ;
-(void)attachmentNodeMayClose:(id)arg1 ;
-(void)attachmentNodeWillClose:(id)arg1 animated:(BOOL)arg2 ;
-(void)attachmentNodeDidClose:(id)arg1 ;
-(id)existingModalLayerForAttachmentNode:(id)arg1 ;
-(id)_videoID;
-(void)videoOverlayViewDidTapPlayPauseButton:(id)arg1 ;
-(double)currentPlaybackTimeForVideoOverlayView:(id)arg1 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidLoopPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidCancelPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerIsReadyForDisplay:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 wasStoppedAtPlaybackTime:(double)arg2 ;
-(void)videoPlaybackController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)_startPlaying;
-(void)_playVideoMuted:(BOOL)arg1 loopPlaybackEnabled:(BOOL)arg2 ;
-(id)_associatedVideoController;
-(void)_setUIState:(long long)arg1 ;
-(id)_videoShareAttachmentView;
-(void)_requestURLWithPlayOnComplete:(BOOL)arg1 ;
-(void)_stopAllOtherVideosIncludingVideoStickers:(BOOL)arg1 ;
-(void)_createAndAssociateVideoControllerIfNecessaryMuted:(BOOL)arg1 loopPlaybackEnabled:(BOOL)arg2 ;
-(void)_requestURLIfNeededAndPlay;
-(void)_didFetchURL:(id)arg1 forVideoID:(id)arg2 shouldPlay:(BOOL)arg3 ;
-(void)_didFailFetchingURLForVideoID:(id)arg1 withError:(id)arg2 ;
-(void)videoShareAttachmentViewDidSelectText:(id)arg1 ;
-(void)videoShareAttachmentViewDidTapPlay:(id)arg1 ;
-(void)videoShareAttachmentViewDidTapError:(id)arg1 ;
-(void)videoShareAttachmentViewDidTapSoundButton:(id)arg1 ;
-(id)initWithIntentHandler:(id)arg1 session:(id)arg2 urlResolver:(id)arg3 videoControllerMap:(id)arg4 videoPlaybackLogger:(id)arg5 offMainThreadRenderingEnabled:(BOOL)arg6 ;
-(id)analyticsModule;
-(void)didEnterForeground;
-(id)analyticsExtras;
-(void)handleIntent:(id)arg1 ;
-(void)pauseVideo;
-(void)didEnterBackground;
@end

