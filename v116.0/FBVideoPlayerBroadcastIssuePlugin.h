/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBVideoPluginView.h>
#import <Messenger/FBFacecastViewerIssueViewProtocol.h>

@protocol FBCancelable, FBVideoPlayerBroadcastIssuePluginDelegate;
@class FBMemVideo, FBFacecastViewerIssueView, FBVideoPlaybackController, NSString;

@interface FBVideoPlayerBroadcastIssuePlugin : UIView <FBVideoPluginView, FBFacecastViewerIssueViewProtocol> {

	FBMemVideo* _video;
	FBFacecastViewerIssueView* _issueOverlayView;
	id<FBCancelable> _problemsUIDisplayTimerToken;
	unsigned long long _nextIssueViewState;
	FBVideoPlaybackController* videoController;
	unsigned long long _issueViewLayoutIdiom;
	id<FBVideoPlayerBroadcastIssuePluginDelegate> _delegate;
	CGRect videoFrame;

}

@property (assign,nonatomic,__weak) id<FBVideoPlayerBroadcastIssuePluginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect videoFrame; 
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
@property (assign,nonatomic) unsigned long long issueViewLayoutIdiom;                                    //@synthesize issueViewLayoutIdiom=_issueViewLayoutIdiom - In the implementation block
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidCancelPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidDryOut:(id)arg1 ;
-(void)videoPlaybackControllerDidUnDry:(id)arg1 ;
-(void)setIssueViewLayoutIdiom:(unsigned long long)arg1 ;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(void)_cancelScheduledShowProblemsUI;
-(void)_hideProblemsUI;
-(unsigned long long)issueViewState;
-(void)_showProblemsUI:(unsigned long long)arg1 withDelay:(BOOL)arg2 ;
-(BOOL)_canTransitionTo:(unsigned long long)arg1 ;
-(void)_showProblemsUI:(unsigned long long)arg1 ;
-(unsigned long long)issueViewLayoutIdiom;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBVideoPlayerBroadcastIssuePluginDelegate>)arg1 ;
-(void)dealloc;
-(id<FBVideoPlayerBroadcastIssuePluginDelegate>)delegate;
-(void)invalidate;
-(void)setVideo:(id)arg1 ;
@end

