/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@protocol FBNativeAdVideoCTAButtonNodeDelegate;
@class FBNativeAdVideoCTAButtonNodeMetrics, ASDisplayNode;

@interface FBNativeAdVideoCTAButtonNode : ASDisplayNode {

	FBNativeAdVideoCTAButtonNodeMetrics* _metrics;
	ASDisplayNode* _ctaButtonNode;
	id<FBNativeAdVideoCTAButtonNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdVideoCTAButtonNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_didTapActionButtonNode;
-(id)initWithActionButtonText:(id)arg1 metrics:(id)arg2 ;
-(void)setDelegate:(id<FBNativeAdVideoCTAButtonNodeDelegate>)arg1 ;
-(id<FBNativeAdVideoCTAButtonNodeDelegate>)delegate;
-(void)layout;
@end

