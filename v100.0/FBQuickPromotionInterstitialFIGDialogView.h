/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(NSString *)promotionID;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 buttonLayout:(unsigned long long)arg3 ;
-(CGSize)buttonBarSizeForCardBounds:(CGRect)arg1 ;
-(void)layoutButtonItemsForInterstitialSize:(CGSize)arg1 cardBounds:(CGRect)arg2 ;
-(void)unsetImage;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setFacepileWithText:(id)arg1 imageURLs:(id)arg2 ;
-(void)unsetFacepile;
-(FBRichTextView *)subtitleTextView;
-(FBRichTextView *)socialContextView;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setPromotionID:(NSString *)arg1 ;
-(FBRichTextView *)footerTextView;
-(BOOL)isTakeOverView;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setBackgroundImage:(id)arg1 ;
-(FBQuickPromotionInterstitialConfiguration *)configuration;
-(FBQuickPromotionCardWithBlurredBackgroundView *)cardView;
-(void)setCardView:(FBQuickPromotionCardWithBlurredBackgroundView *)arg1 ;
-(FBQuickPromotionCreativeView *)interstitialView;
-(void)setInterstitialView:(FBQuickPromotionCreativeView *)arg1 ;
-(UIButton *)dismissButton;
@end

