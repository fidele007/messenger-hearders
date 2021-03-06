/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, UILabel, NSString, FBUserSession, UIControl;

@interface FBVideoPlayerEndScreenCallToActionView : UIView {

	UIImageView* _replayImageView;
	UIView* _callToActionImageView;
	UILabel* _replayLabel;
	UILabel* _callToActionLabel;
	UILabel* _sourceLabel;
	NSString* _endScreenReplayString;
	NSString* _defaultImageName;
	FBUserSession* _session;
	UIControl* _replayControl;
	UIControl* _callToActionControl;
	double _callToActionImageScale;

}

@property (nonatomic,readonly) UIControl * replayControl;                    //@synthesize replayControl=_replayControl - In the implementation block
@property (nonatomic,readonly) UIControl * callToActionControl;              //@synthesize callToActionControl=_callToActionControl - In the implementation block
@property (assign,nonatomic) double callToActionImageScale;                  //@synthesize callToActionImageScale=_callToActionImageScale - In the implementation block
-(void)setCallToActionTitle:(id)arg1 andSource:(id)arg2 andDefaultImageName:(id)arg3 ;
-(void)setCallToActionImageWithURL:(id)arg1 ;
-(void)setCallToActionImageWithName:(id)arg1 ;
-(UIControl *)callToActionControl;
-(void)setCallToActionImageScale:(double)arg1 ;
-(UIControl *)replayControl;
-(id)_makeAttributedCTAText:(id)arg1 isTitle:(BOOL)arg2 ;
-(double)_calculateMaxLabelWidth;
-(CGSize)_calculateCallToActionLabelSize;
-(CGSize)_calculateSourceLabelSize;
-(double)_calculateContainerWidth;
-(CGSize)_calculateReplayLabelSize;
-(double)_calculateTextMaxWidth;
-(void)_createCallToActionImageViewWithImageName:(id)arg1 ;
-(void)_createCallToActionImageViewWithImageURL:(id)arg1 ;
-(void)setReplayLabelTitle:(id)arg1 ;
-(double)callToActionImageScale;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

