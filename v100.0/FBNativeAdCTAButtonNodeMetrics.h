/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide, UIColor;

@interface FBNativeAdCTAButtonNodeMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) FBTextMetrics* titleTextMetrics; 
@property (nonatomic,readonly) FBTextMetrics* redesignTitleTextMetrics; 
@property (nonatomic,readonly) FBTextMetrics* titleTextTwoStepActionResetMetrics; 
@property (nonatomic,readonly) UIColor * redesignNodeColor; 
@property (nonatomic,readonly) UIColor * chevronNodeColorAfterTap; 
@property (nonatomic,readonly) unsigned long long maxLineCount; 
@property (nonatomic,readonly) double buttonBorderWidth; 
@property (nonatomic,readonly) CGColorRef buttonBorderColor; 
@property (nonatomic,readonly) double buttonVerticalPadding; 
@property (nonatomic,readonly) double buttonHorizontalPadding; 
@property (nonatomic,readonly) double titleTextVerticalCenterOffset; 
@property (nonatomic,readonly) CGSize maxChevronButtonSize; 
@property (nonatomic,readonly) double horizontalSpacePadding; 
-(id)initWithInterfaceGuide:(id)arg1 ;
-(FBTextMetrics*)titleTextMetrics;
-(FBTextMetrics*)redesignTitleTextMetrics;
-(CGColorRef)buttonBorderColor;
-(double)buttonBorderWidth;
-(double)titleTextVerticalCenterOffset;
-(double)buttonHorizontalPadding;
-(CGSize)calculateNodeSizeWithActionButtonSize:(CGSize)arg1 rightChevronNodeSize:(CGSize)arg2 constrainedSize:(CGSize)arg3 ;
-(UIColor *)chevronNodeColorAfterTap;
-(FBTextMetrics*)titleTextTwoStepActionResetMetrics;
-(double)buttonVerticalPadding;
-(CGSize)calculateTwoStepFooterNodeSizeWithSubtitleTextSize:(CGSize)arg1 hasBodyText:(BOOL)arg2 bodyTextSize:(CGSize)arg3 hasActionButton:(BOOL)arg4 actionButtonSize:(CGSize)arg5 shareContentNodeMetrics:(id)arg6 constrainedSize:(CGSize)arg7 ;
-(double)horizontalSpacePadding;
-(CGSize)maxChevronButtonSize;
-(UIColor *)redesignNodeColor;
-(unsigned long long)maxLineCount;
@end

