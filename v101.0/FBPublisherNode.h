/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@protocol FBPublisherNodeDelegate;
@class FBPublisherNodeMetrics, ASNetworkImageNode, ASDisplayNode;

@interface FBPublisherNode : ASDisplayNode {

	FBPublisherNodeMetrics* _metrics;
	long long _layoutDirection;
	ASNetworkImageNode* _logoImageNode;
	ASDisplayNode* _borderLineNode;
	ASDisplayNode* _likeButtonNode;
	double _logoHeight;
	double _logoWidth;
	id<FBPublisherNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPublisherNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_logoImageTapped;
-(id)initWithLogoURLString:(id)arg1 logoSize:(CGSize)arg2 metrics:(id)arg3 imageCache:(id)arg4 imageDownload:(id)arg5 likeButtonNode:(id)arg6 layoutDirection:(long long)arg7 ;
-(void)updateLikeButtonLayout;
-(void)setDelegate:(id<FBPublisherNodeDelegate>)arg1 ;
-(id<FBPublisherNodeDelegate>)delegate;
-(void)layout;
@end
