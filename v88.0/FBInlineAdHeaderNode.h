/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@protocol FBInlineAdHeaderNodeDelegate;
@class FBInlineAdHeaderNodeMetrics, ASTextNode, ASDisplayNode;

@interface FBInlineAdHeaderNode : ASDisplayNode {

	FBInlineAdHeaderNodeMetrics* _metrics;
	ASTextNode* _sponsoredLabelNode;
	ASDisplayNode* _chevronButtonNode;
	long long _layoutDirection;
	id<FBInlineAdHeaderNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInlineAdHeaderNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithMetrics:(id)arg1 layoutDirection:(long long)arg2 ;
-(void)_didTapChevronButtonNode;
-(void)setDelegate:(id<FBInlineAdHeaderNodeDelegate>)arg1 ;
-(id<FBInlineAdHeaderNodeDelegate>)delegate;
-(void)layout;
@end

