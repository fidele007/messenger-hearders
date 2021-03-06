/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
-(void)setContentView:(UIView *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(UIView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
@end

