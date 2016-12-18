/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView;

@interface FBQuickPromotionCardWithBlurredBackgroundView : UIView {

	UIView* _headerView;
	UIView* _cardView;
	UIImageView* _backgroundImageView;
	UIEdgeInsets _cardEdgeInsets;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cardEdgeInsets;                    //@synthesize cardEdgeInsets=_cardEdgeInsets - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,readonly) UIView * cardView;                            //@synthesize cardView=_cardView - In the implementation block
-(UIEdgeInsets)cardEdgeInsets;
-(void)_blurImageInBackground:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCardEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImage:(id)arg1 ;
-(UIView *)cardView;
-(void)setHeaderColor:(id)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

