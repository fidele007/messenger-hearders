/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@protocol FBNativeAdRedesignFooterNodeDelegate;
@class FBNativeAdCTAButtonNodeMetrics, FBNativeAdShareContentRedesignNodeMetrics, ASTextNode, ASImageNode, NSMutableAttributedString;

@interface FBNativeAdRedesignTwoStepFooterNode : ASControlNode {

	FBNativeAdCTAButtonNodeMetrics* _ctaButtonMetrics;
	FBNativeAdShareContentRedesignNodeMetrics* _shareContentNodeMetrics;
	ASTextNode* _shareSubtitleNode;
	ASTextNode* _shareBodyNode;
	ASTextNode* _ctaButtonTitleNode;
	ASImageNode* _rightChevronNode;
	NSMutableAttributedString* _shareSubtitleAttributedText;
	NSMutableAttributedString* _shareBodyAttributedText;
	NSMutableAttributedString* _ctaActionAttributedText;
	id<FBNativeAdRedesignFooterNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdRedesignFooterNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_didTapCTAButton;
-(id)initWithActionButtonText:(id)arg1 subtitleText:(id)arg2 bodyText:(id)arg3 ctaButtonMetrics:(id)arg4 shareContentNodeMetrics:(id)arg5 ;
-(void)setBackgroundAndTextColorAfterTap:(id)arg1 ;
-(void)resetBackgroundAndTextColorAfterTapping:(id)arg1 ;
-(void)setDelegate:(id<FBNativeAdRedesignFooterNodeDelegate>)arg1 ;
-(id<FBNativeAdRedesignFooterNodeDelegate>)delegate;
-(void)layout;
@end

