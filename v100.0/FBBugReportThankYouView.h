/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, UIButton;

@interface FBBugReportThankYouView : UIView {

	UILabel* _messageLabel;
	UIImageView* _imageView;
	UIView* _divider;
	double _margin;
	double _imageWidth;
	double _imageHeight;
	double _dividerHeight;
	double _okButtonHeight;
	double _dialogMaxWidth;
	BOOL _isHideThumbStickerOnThankYouView;
	UIButton* _okButton;

}

@property (nonatomic,retain) UIButton * okButton;              //@synthesize okButton=_okButton - In the implementation block
-(double)heightForLabelText:(double)arg1 ;
-(void)highlightButton;
-(void)unhighlightButton;
-(void)setupLayoutParameters;
-(id)initWithFrame:(CGRect)arg1 isHideThumbStickerOnThankYouView:(BOOL)arg2 overrideThankYouText:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end
