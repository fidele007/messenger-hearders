/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBStructuredSurveyUIStyleSheet.h>

@class FBRemoteAsset, UIColor, NSDictionary;

@interface FBRapidFeedbackStyleSheet : FBStructuredSurveyUIStyleSheet {

	BOOL _useToastPopover;
	BOOL _showTopBottomOverlaysShadow;
	BOOL _verticallyCentered;
	FBRemoteAsset* _headerAsset;
	FBRemoteAsset* _thankYouHeaderAsset;
	UIColor* _popupBackgroundColor;
	UIColor* _popupBarBackgroundColor;
	NSDictionary* _popupIntroOutroTextAttributes;
	NSDictionary* _popupIntroOutroActionTextAttributes;
	UIColor* _continueButtonTitleColor;
	UIColor* _fullScreenBackgroundColor;
	double _fullScreenBackgroundAlphaExpanded;
	double _fullScreenBackgroundAlpha;
	double _toastPopoverHeight;
	double _leftRightOuterPopoverIndent;
	double _iPadSurveyWidth;
	UIEdgeInsets _innerPopoverInsets;
	UIEdgeInsets _innerPopoverExpandedInsets;

}

@property (nonatomic,retain) FBRemoteAsset * headerAsset;                                      //@synthesize headerAsset=_headerAsset - In the implementation block
@property (nonatomic,retain) FBRemoteAsset * thankYouHeaderAsset;                              //@synthesize thankYouHeaderAsset=_thankYouHeaderAsset - In the implementation block
@property (nonatomic,retain) UIColor * popupBackgroundColor;                                   //@synthesize popupBackgroundColor=_popupBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * popupBarBackgroundColor;                                //@synthesize popupBarBackgroundColor=_popupBarBackgroundColor - In the implementation block
@property (nonatomic,copy) NSDictionary * popupIntroOutroTextAttributes;                       //@synthesize popupIntroOutroTextAttributes=_popupIntroOutroTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * popupIntroOutroActionTextAttributes;                 //@synthesize popupIntroOutroActionTextAttributes=_popupIntroOutroActionTextAttributes - In the implementation block
@property (nonatomic,retain) UIColor * continueButtonTitleColor;                               //@synthesize continueButtonTitleColor=_continueButtonTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * fullScreenBackgroundColor;                              //@synthesize fullScreenBackgroundColor=_fullScreenBackgroundColor - In the implementation block
@property (assign,nonatomic) double fullScreenBackgroundAlphaExpanded;                         //@synthesize fullScreenBackgroundAlphaExpanded=_fullScreenBackgroundAlphaExpanded - In the implementation block
@property (assign,nonatomic) double fullScreenBackgroundAlpha;                                 //@synthesize fullScreenBackgroundAlpha=_fullScreenBackgroundAlpha - In the implementation block
@property (assign,nonatomic) BOOL useToastPopover;                                             //@synthesize useToastPopover=_useToastPopover - In the implementation block
@property (assign,nonatomic) double toastPopoverHeight;                                        //@synthesize toastPopoverHeight=_toastPopoverHeight - In the implementation block
@property (assign,nonatomic) double leftRightOuterPopoverIndent;                               //@synthesize leftRightOuterPopoverIndent=_leftRightOuterPopoverIndent - In the implementation block
@property (assign,nonatomic) BOOL showTopBottomOverlaysShadow;                                 //@synthesize showTopBottomOverlaysShadow=_showTopBottomOverlaysShadow - In the implementation block
@property (assign,getter=isVerticallyCentered,nonatomic) BOOL verticallyCentered;              //@synthesize verticallyCentered=_verticallyCentered - In the implementation block
@property (assign,nonatomic) double iPadSurveyWidth;                                           //@synthesize iPadSurveyWidth=_iPadSurveyWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets innerPopoverInsets;                                  //@synthesize innerPopoverInsets=_innerPopoverInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets innerPopoverExpandedInsets;                          //@synthesize innerPopoverExpandedInsets=_innerPopoverExpandedInsets - In the implementation block
+(id)defaultStyleSheet;
-(void)setPopupBackgroundColor:(UIColor *)arg1 ;
-(void)setPopupBarBackgroundColor:(UIColor *)arg1 ;
-(void)setFullScreenBackgroundAlpha:(double)arg1 ;
-(void)setFullScreenBackgroundAlphaExpanded:(double)arg1 ;
-(NSDictionary *)popupIntroOutroTextAttributes;
-(void)setPopupIntroOutroTextAttributes:(NSDictionary *)arg1 ;
-(void)setContinueButtonTitleColor:(UIColor *)arg1 ;
-(BOOL)isVerticallyCentered;
-(BOOL)useToastPopover;
-(NSDictionary *)popupIntroOutroActionTextAttributes;
-(void)setFullScreenBackgroundColor:(UIColor *)arg1 ;
-(void)setPopupIntroOutroActionTextAttributes:(NSDictionary *)arg1 ;
-(void)setLeftRightOuterPopoverIndent:(double)arg1 ;
-(void)setShowTopBottomOverlaysShadow:(BOOL)arg1 ;
-(void)setVerticallyCentered:(BOOL)arg1 ;
-(void)setIPadSurveyWidth:(double)arg1 ;
-(void)setInnerPopoverInsets:(UIEdgeInsets)arg1 ;
-(void)setInnerPopoverExpandedInsets:(UIEdgeInsets)arg1 ;
-(void)setHeaderAsset:(FBRemoteAsset *)arg1 ;
-(void)setThankYouHeaderAsset:(FBRemoteAsset *)arg1 ;
-(void)setUseToastPopover:(BOOL)arg1 ;
-(void)setToastPopoverHeight:(double)arg1 ;
-(UIColor *)popupBackgroundColor;
-(UIColor *)fullScreenBackgroundColor;
-(double)fullScreenBackgroundAlpha;
-(FBRemoteAsset *)headerAsset;
-(double)fullScreenBackgroundAlphaExpanded;
-(UIEdgeInsets)innerPopoverInsets;
-(UIEdgeInsets)innerPopoverExpandedInsets;
-(UIColor *)popupBarBackgroundColor;
-(BOOL)showTopBottomOverlaysShadow;
-(UIColor *)continueButtonTitleColor;
-(double)leftRightOuterPopoverIndent;
-(double)iPadSurveyWidth;
-(FBRemoteAsset *)thankYouHeaderAsset;
-(double)toastPopoverHeight;
-(id)init;
@end

