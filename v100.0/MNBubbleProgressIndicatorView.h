/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNProgressView.h>

@class MNProgressIndicatorView, MNMessageBubbleView, NSString;

@interface MNBubbleProgressIndicatorView : UIView <MNProgressView> {

	MNProgressIndicatorView* _progressIndicatorView;
	MNMessageBubbleView* _bubbleView;

}

@property (nonatomic,readonly) MNMessageBubbleView * bubbleView;              //@synthesize bubbleView=_bubbleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBubbleDisplayConfigurer:(id)arg1 ;
-(void)setProgressColor:(id)arg1 trackColor:(id)arg2 ;
-(void)updateProgressViewWithProgress:(float)arg1 direction:(long long)arg2 ;
-(void)_setupProgressIndicatorView;
-(void)_setUpBubbleOverlayWithbubbleDisplayConfigurer:(id)arg1 ;
-(void)layoutSubviews;
-(MNMessageBubbleView *)bubbleView;
@end

