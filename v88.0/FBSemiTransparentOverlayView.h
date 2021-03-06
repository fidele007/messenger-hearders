/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView;

@interface FBSemiTransparentOverlayView : UIView {

	UIImageView* _backgroundView;
	UIView* _contentView;
	double _cornerRadius;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double cornerRadius;                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;              //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(double)cornerRadius;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
@end

