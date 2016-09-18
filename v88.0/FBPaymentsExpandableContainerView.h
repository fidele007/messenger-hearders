/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBPaymentsExpandableContainerView : UIView {

	UIView* _backgroundView;
	BOOL _isDisplayed;
	BOOL _isContentViewAppeared;
	UIView* _contentView;
	double _contentViewHeight;
	/*^block*/id _tapBackgroundBlock;

}

@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double contentViewHeight;                //@synthesize contentViewHeight=_contentViewHeight - In the implementation block
@property (nonatomic,copy) id tapBackgroundBlock;                     //@synthesize tapBackgroundBlock=_tapBackgroundBlock - In the implementation block
@property (assign,nonatomic) BOOL isContentViewAppeared;              //@synthesize isContentViewAppeared=_isContentViewAppeared - In the implementation block
-(void)_layoutContentView;
-(void)_layoutBackgroundView;
-(double)contentViewHeight;
-(void)setTapBackgroundBlock:(id)arg1 ;
-(void)setContentViewHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)setIsDisplayed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isContentViewAppeared;
-(void)_handleTapBackgroundView;
-(void)_updateBackgroundViewAlpha;
-(void)_setIsContentViewAppeared:(BOOL)arg1 ;
-(void)setContentViewHeight:(double)arg1 ;
-(id)tapBackgroundBlock;
-(void)setIsContentViewAppeared:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end
