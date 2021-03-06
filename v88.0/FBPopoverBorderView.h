/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, UIColor;

@interface FBPopoverBorderView : UIView {

	UIView* _wrapperView;
	UIImageView* _topLeftCornerView;
	UIImageView* _topRightCornerView;
	UIImageView* _bottomLeftCornerView;
	UIImageView* _bottomRightCornerView;
	UIImageView* _leftView;
	UIImageView* _rightView;
	UIImageView* _topView;
	UIImageView* _bottomView;
	UIImageView* _secondarySideView;
	UIView* _backgroundFillView;
	unsigned long long _arrowDirection;
	UIColor* _arrowColor;
	UIImageView* _arrowView;
	UIImageView* _arrowShadowView;
	UIImageView* _arrowShadowFlushView;
	CGRect _arrowFrame;

}

@property (nonatomic,readonly) UIImageView * arrowView;                         //@synthesize arrowView=_arrowView - In the implementation block
@property (nonatomic,readonly) UIImageView * arrowShadowView;                   //@synthesize arrowShadowView=_arrowShadowView - In the implementation block
@property (nonatomic,readonly) UIImageView * arrowShadowFlushView;              //@synthesize arrowShadowFlushView=_arrowShadowFlushView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundFillView; 
@property (assign,nonatomic) unsigned long long arrowDirection;                 //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (assign,nonatomic) CGRect arrowFrame;                                 //@synthesize arrowFrame=_arrowFrame - In the implementation block
@property (nonatomic,retain) UIColor * arrowColor;                              //@synthesize arrowColor=_arrowColor - In the implementation block
+(unsigned long long)supportedArrowDirections;
+(id)imageForArrowInDirection:(unsigned long long)arg1 ;
+(CGSize)arrowSizeForDirection:(unsigned long long)arg1 ;
+(double)overhangForArrowDirection:(unsigned long long)arg1 ;
+(double)arrowTipInset;
+(id)imageForCorner:(unsigned long long)arg1 ;
+(id)imageForSide:(unsigned long long)arg1 ;
+(id)imageForArrowShadowInDirection:(unsigned long long)arg1 ;
+(UIEdgeInsets)insetsForPopoverContainerView;
+(double)cornerRadius;
+(UIEdgeInsets)contentViewInsets;
+(id)defaultBackgroundColor;
-(UIView *)backgroundFillView;
-(UIEdgeInsets)backgroundFillEdgeInsetsToPreventCracks;
-(UIEdgeInsets)backgroundFillEdgeInsets;
-(CGRect)_constrainedArrowRectForProposedRect:(CGRect)arg1 ;
-(CGRect)_wrapperRectForBounds:(CGRect)arg1 arrowDirection:(unsigned long long)arg2 arrowFrame:(CGRect)arg3 ;
-(CGRect)arrowFrame;
-(UIImageView *)arrowView;
-(UIImageView *)arrowShadowView;
-(UIImageView *)arrowShadowFlushView;
-(void)setArrowFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(UIColor *)arrowColor;
-(void)setArrowColor:(UIColor *)arg1 ;
@end

