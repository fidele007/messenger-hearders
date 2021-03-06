/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBQuickPromotionInterstitial.h>

@class FBQuickPromotionInterstitialAutoStackingButtonBarView, UIImageView, FBUserSession, NSString, UIButton, FBQuickPromotionCreativeView, FBQuickPromotionCardWithBlurredBackgroundView, UILabel, FBRichTextView, FBQuickPromotionInterstitialConfiguration;

@interface FBQuickPromotionInterstitialFIGDialogView : UIView <FBQuickPromotionInterstitial> {

	FBQuickPromotionInterstitialAutoStackingButtonBarView* _buttonBarView;
	UIImageView* _backgroundImageView;
	FBUserSession* _session;
	NSString* _promotionID;
	UIButton* _dismissButton;
	FBQuickPromotionCreativeView* _interstitialView;
	FBQuickPromotionCardWithBlurredBackgroundView* _cardView;

}

@property (nonatomic,retain) FBQuickPromotionCardWithBlurredBackgroundView * cardView;                 //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) FBQuickPromotionCreativeView * interstitialView;                          //@synthesize interstitialView=_interstitialView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * promotionID;                                                     //@synthesize promotionID=_promotionID - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) FBRichTextView * subtitleTextView; 
@property (nonatomic,readonly) FBRichTextView * footerTextView; 
@property (nonatomic,readonly) UIButton * primaryButton; 
@property (nonatomic,readonly) UIButton * secondaryButton; 
@property (nonatomic,readonly) UIButton * dismissButton;                                               //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) FBRichTextView * socialContextView; 
@property (nonatomic,readonly) FBQuickPromotionInterstitialConfiguration * configuration; 
-(NSString *)promotionID;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 buttonLayout:(unsigned long long)arg3 ;
-(void)setPromotionID:(NSString *)arg1 ;
-(FBRichTextView *)subtitleTextView;
-(FBRichTextView *)footerTextView;
-(UIButton *)secondaryButton;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)unsetImage;
-(void)setFacepileWithSocialContext:(id)arg1 fqlCompletionBlock:(/*^block*/id)arg2 ;
-(void)unsetFacepile;
-(BOOL)isTakeOverView;
-(FBRichTextView *)socialContextView;
-(CGSize)buttonBarSizeForCardBounds:(CGRect)arg1 ;
-(void)layoutButtonItemsForInterstitialSize:(CGSize)arg1 cardBounds:(CGRect)arg2 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setBackgroundImage:(id)arg1 ;
-(FBQuickPromotionInterstitialConfiguration *)configuration;
-(UIButton *)dismissButton;
-(FBQuickPromotionCardWithBlurredBackgroundView *)cardView;
-(void)setCardView:(FBQuickPromotionCardWithBlurredBackgroundView *)arg1 ;
-(UIButton *)primaryButton;
-(FBQuickPromotionCreativeView *)interstitialView;
-(void)setInterstitialView:(FBQuickPromotionCreativeView *)arg1 ;
@end

