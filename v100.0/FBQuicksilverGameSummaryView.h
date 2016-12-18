/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBQuicksilverGameSummaryDelegate;
@class FBUserSession, UILabel, UIImage, UIImageView, UIView, UITapGestureRecognizer, UIButton, UITableView, FBNuxTooltip;

@interface FBQuicksilverGameSummaryView : UIView {

	FBUserSession* _session;
	UILabel* _scoreLabel;
	UILabel* _scoreSubTextLabel;
	UIImage* _croppedScreenshot;
	UIImageView* _scoreScreenshot;
	UILabel* _scoreScreenshotLabel;
	UIView* _scoreScreenshotContainerView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIButton* _replayButton;
	UIView* _topLineSeparator;
	UIView* _bottomLineSeparator;
	UITableView* _contentTableView;
	id<FBQuicksilverGameSummaryDelegate> _delegate;
	FBNuxTooltip* _screenShotViewTooltip;

}

@property (nonatomic,readonly) UITableView * contentTableView;                                  //@synthesize contentTableView=_contentTableView - In the implementation block
@property (assign,nonatomic,__weak) id<FBQuicksilverGameSummaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNuxTooltip * screenShotViewTooltip;                            //@synthesize screenShotViewTooltip=_screenShotViewTooltip - In the implementation block
-(UITableView *)contentTableView;
-(void)_userDidTapScreenshot;
-(void)_userDidTapReplayButton;
-(id)initWithSession:(id)arg1 screenshotImage:(id)arg2 ;
-(void)setScoreText:(id)arg1 ;
-(void)setScoreSubtitleText:(id)arg1 ;
-(void)setContentTableView:(UITableView *)arg1 ;
-(FBNuxTooltip *)screenShotViewTooltip;
-(void)setDelegate:(id<FBQuicksilverGameSummaryDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBQuicksilverGameSummaryDelegate>)delegate;
@end
