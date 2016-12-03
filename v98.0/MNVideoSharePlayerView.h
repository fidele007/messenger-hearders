/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNFullscreenableVideo.h>

@protocol MNVideoSharePlayerViewDelegate;
@class MNFNFVideoPlayingView, FBNetworkImageView, UIButton, UIImageView, UIActivityIndicatorView, MNVideoErrorView, UITapGestureRecognizer, UILabel, NSURL, NSString;

@interface MNVideoSharePlayerView : UIView <MNFullscreenableVideo> {

	MNFNFVideoPlayingView* _videoPlayingView;
	FBNetworkImageView* _previewImageView;
	UIButton* _playButton;
	UIImageView* _playIconCircleView;
	UIImageView* _playButtonBackgroundView;
	UIActivityIndicatorView* _loadingIndicator;
	MNVideoErrorView* _errorView;
	UITapGestureRecognizer* _errorTapRecognizer;
	UILabel* _durationLabel;
	UIButton* _soundButton;
	BOOL _isFullScreen;
	double _duration;
	long long _state;
	id<MNVideoSharePlayerViewDelegate> _delegate;
	unsigned long long _soundButtonPosition;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) NSURL * previewImageURL; 
@property (assign,nonatomic) double duration;                                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<MNVideoSharePlayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long soundButtonPosition;                          //@synthesize soundButtonPosition=_soundButtonPosition - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageDownloader:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 animated:(BOOL)arg2 ;
-(void)setSoundButtonPosition:(unsigned long long)arg1 ;
-(void)associateWithPlaybackController:(id)arg1 ;
-(void)disassociatePlaybackController;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(unsigned long long)soundButtonPosition;
-(void)_playButtonTapped;
-(void)_errorViewTapped;
-(void)_soundButtonTapped:(id)arg1 ;
-(void)_updateSoundButtonVisibilityUponFullScreenStateChange;
-(void)setDelegate:(id<MNVideoSharePlayerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNVideoSharePlayerViewDelegate>)delegate;
-(long long)state;
-(double)duration;
-(void)setState:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)reset;
-(UIEdgeInsets)contentInsets;
-(NSURL *)previewImageURL;
-(void)setIsFullScreen:(BOOL)arg1 ;
@end
