/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CKComponentProvider.h>
#import <Messenger/FBQuickPromotionInterstitial.h>

@class NSString, UILabel, FBRichTextView, UIButton, FBQuickPromotionInterstitialConfiguration, CKComponentHostingView;

@interface FBQuickPromotionInterstitialNativeTemplateView : UIView <CKComponentProvider, FBQuickPromotionInterstitial> {

	NSString* _promotionID;
	CKComponentHostingView* _componentHostingView;

}

@property (nonatomic,retain) CKComponentHostingView * componentHostingView;                            //@synthesize componentHostingView=_componentHostingView - In the implementation block
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
@property (nonatomic,readonly) UIButton * dismissButton; 
@property (nonatomic,readonly) FBRichTextView * socialContextView; 
@property (nonatomic,readonly) FBQuickPromotionInterstitialConfiguration * configuration; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(CKComponentHostingView *)componentHostingView;
-(void)setComponentHostingView:(CKComponentHostingView *)arg1 ;
-(FBRichTextView *)socialContextView;
-(BOOL)isTakeOverView;
-(NSString *)promotionID;
-(id)initWithFrame:(CGRect)arg1 promotion:(id)arg2 session:(id)arg3 ;
-(void)setPromotionID:(NSString *)arg1 ;
-(FBRichTextView *)subtitleTextView;
-(FBRichTextView *)footerTextView;
-(UIButton *)secondaryButton;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)unsetImage;
-(void)setFacepileWithSocialContext:(id)arg1 fqlCompletionBlock:(/*^block*/id)arg2 ;
-(void)unsetFacepile;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(FBQuickPromotionInterstitialConfiguration *)configuration;
-(UIButton *)dismissButton;
-(UIButton *)primaryButton;
@end

