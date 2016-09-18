/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQuicksilverThreadMatchViewDelegate;
@class FBUserSession, UIView, UITableView, UILabel, UIImageView, UIButton, FBCustomActivityIndicatorView, FBNuxTooltip;

@interface FBQuicksilverThreadMatchView : UIView {

	FBUserSession* _session;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	UITableView* _contentView;
	UILabel* _legalTextLabel;
	UILabel* _titleView;
	UIImageView* _roundedGameIcon;
	UIButton* _playButton;
	FBCustomActivityIndicatorView* _playButtonLoadingIndicatorView;
	FBCustomActivityIndicatorView* _graphQLLoadingIndicatorView;
	BOOL _isGraphQLFinished;
	BOOL _isGameLoaded;
	BOOL _isPlayButtonEnabled;
	id<FBQuicksilverThreadMatchViewDelegate> _delegate;
	FBNuxTooltip* _playNowButtonTooltip;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverThreadMatchViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNuxTooltip * playNowButtonTooltip;                                 //@synthesize playNowButtonTooltip=_playNowButtonTooltip - In the implementation block
@property (assign,setter=setPlayButtonEnabled:,nonatomic) BOOL isPlayButtonEnabled;                 //@synthesize isPlayButtonEnabled=_isPlayButtonEnabled - In the implementation block
-(void)_userDidTapPlayButton;
-(void)setPlayButtonEnabled:(BOOL)arg1 ;
-(void)_animateInPlayButton;
-(BOOL)isPlayButtonEnabled;
-(void)_fetchGameIcon:(id)arg1 ;
-(void)_createPlayNowButtonTooltips;
-(void)_layoutPlayButton;
-(void)_layoutViewCentered:(id)arg1 aboveView:(id)arg2 withMargin:(double)arg3 size:(CGSize)arg4 ;
-(void)_corssFadeGraphQLLoadingUI;
-(void)_removeGraphQLLoadingIndicatorView;
-(void)_enablePlayButtonIfNeeded;
-(void)hideGraphQLLoadingUI;
-(id)initWithSession:(id)arg1 title:(id)arg2 gameIconURL:(id)arg3 ;
-(FBNuxTooltip *)playNowButtonTooltip;
-(void)setDelegate:(id<FBQuicksilverThreadMatchViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBQuicksilverThreadMatchViewDelegate>)delegate;
-(void)setContentView:(id)arg1 ;
-(void)hideContentView;
@end

