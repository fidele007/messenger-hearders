/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MNMessageActionButtonViewModel;

@interface MNMessageActionButtonView : UIView {

	UIImageView* _actionButtonImageView;
	MNMessageActionButtonViewModel* _actionButtonViewModel;

}

@property (nonatomic,copy) MNMessageActionButtonViewModel * actionButtonViewModel;              //@synthesize actionButtonViewModel=_actionButtonViewModel - In the implementation block
+(CGSize)intrinsicSizeForActionButtonViewModel:(id)arg1 ;
-(MNMessageActionButtonViewModel *)actionButtonViewModel;
-(void)setActionButtonViewModel:(MNMessageActionButtonViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
@end

