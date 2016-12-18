/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ASDisplayNode.h>

@protocol _FBNativeArticleScrollNodeDelegate;
@class FBNativeArticleScrollView;

@interface _FBNativeArticleScrollNode : ASDisplayNode {

	id<_FBNativeArticleScrollNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_FBNativeArticleScrollNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNativeArticleScrollView * scrollView; 
-(void)_staticInitialize;
-(void)subnodeDisplayDidFinish:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 delegate:(id)arg2 scrollViewDelegate:(id)arg3 scrollViewGestureHandler:(id)arg4 ;
-(void)setDelegate:(id<_FBNativeArticleScrollNodeDelegate>)arg1 ;
-(id<_FBNativeArticleScrollNodeDelegate>)delegate;
-(FBNativeArticleScrollView *)scrollView;
-(void)didLoad;
@end
