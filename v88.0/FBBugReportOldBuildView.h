/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, FBBugReportCoordinator, UIButton;

@interface FBBugReportOldBuildView : UIView {

	UILabel* _messageLabel;
	UIImageView* _imageView;
	UIView* _horizontalDivider;
	UIView* _verticalDivider;
	FBBugReportCoordinator* _coordinator;
	UIButton* _updateBuildButton;
	UIButton* _reportAnywayButton;

}

@property (nonatomic,retain) UIButton * updateBuildButton;               //@synthesize updateBuildButton=_updateBuildButton - In the implementation block
@property (nonatomic,retain) UIButton * reportAnywayButton;              //@synthesize reportAnywayButton=_reportAnywayButton - In the implementation block
-(double)heightForLabelText:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 coordinator:(id)arg2 ;
-(UIButton *)updateBuildButton;
-(void)setUpdateBuildButton:(UIButton *)arg1 ;
-(UIButton *)reportAnywayButton;
-(void)setReportAnywayButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

