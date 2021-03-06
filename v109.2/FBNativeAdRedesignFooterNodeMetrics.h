/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide, UIColor;

@interface FBNativeAdRedesignFooterNodeMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) double hairlineBoxLineWeight; 
@property (nonatomic,readonly) UIColor * hairlineBoxColor; 
@property (nonatomic,readonly) unsigned long long subtitleMaxLineCount; 
@property (nonatomic,readonly) unsigned long long footerBodyMaxLineCount; 
@property (nonatomic,readonly) CGSize maxActionButtonSize; 
@property (nonatomic,readonly) double subtitleToBodySpacing; 
@property (nonatomic,readonly) FBTextMetrics* subtitleTextRedesignMetrics; 
@property (nonatomic,readonly) FBTextMetrics* bodyTextRedesignMetrics; 
@property (nonatomic,readonly) double horizontalSpacePadding; 
@property (nonatomic,readonly) double bottomSpacePadding; 
@property (nonatomic,readonly) double verticalSpacePadding; 
@property (nonatomic,readonly) double footerHorizontalPadding; 
@property (nonatomic,readonly) double footerNodeBorderCornerRadius; 
@property (nonatomic,readonly) double ctaButtonHorizontalPadding; 
-(id)initWithInterfaceGuide:(id)arg1 ;
-(unsigned long long)footerBodyMaxLineCount;
-(double)ctaButtonHorizontalPadding;
-(double)footerNodeBorderCornerRadius;
-(double)bottomSpacePadding;
-(CGSize)calculateRedesignFooterNodeSizeWithSubtitleTextSize:(CGSize)arg1 hasBodyText:(BOOL)arg2 bodyTextSize:(CGSize)arg3 hasActionButton:(BOOL)arg4 actionButtonPadding:(CGSize)arg5 actionButtonSize:(CGSize)arg6 bottomPaddingSize:(CGSize)arg7 constrainedSize:(CGSize)arg8 ;
-(FBTextMetrics*)subtitleTextRedesignMetrics;
-(FBTextMetrics*)bodyTextRedesignMetrics;
-(CGSize)calculateNodeSizeWithCallToActionText:(id)arg1 subtitleText:(id)arg2 bodyText:(id)arg3 enableFullLengthBorderLineRedesign:(BOOL)arg4 constrainingSize:(CGSize)arg5 ;
-(unsigned long long)subtitleMaxLineCount;
-(FBTextMetrics*)bodyTextMetrics;
-(double)hairlineBoxLineWeight;
-(UIColor *)hairlineBoxColor;
-(double)subtitleToBodySpacing;
-(CGSize)maxActionButtonSize;
-(double)horizontalSpacePadding;
-(double)verticalSpacePadding;
-(double)footerHorizontalPadding;
@end

