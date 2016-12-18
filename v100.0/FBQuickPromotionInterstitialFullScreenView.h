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

@class FBQuickPromotionCreativeView, FBQuickPromotionInterstitialHorizontalButtonBarView, FBQuickPromotionInterstitialSubtleButtonBarView, FBUserSession, NSString, UIButton, UILabel, FBRichTextView, FBQuickPromotionInterstitialConfiguration;

@interface FBQuickPromotionInterstitialFullScreenView : UIView <FBQuickPromotionInterstitial> {

	FBQuickPromotionCreativeView* _interstitialView;
	FBQuickPromotionInterstitialHorizontalButtonBarView* _horizontalButtonBarView;
	FBQuickPromotionInterstitialSubtleButtonBarView* _subtleButtonBarView;
	FBUserSession* _session;
	NSString* _promotionID;
	UIButton* _dismissButton;

}

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
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(NSString *)promotionID;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 imageOverlayImage:(id)arg4 ;
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
-(FBQuickPromotionInterstitialConfiguration *)configuration;
-(UIButton *)dismissButton;
@end

