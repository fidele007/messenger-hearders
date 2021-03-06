/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBrowserFooterView.h>
#import <Messenger/FBUFIButtonsComponentViewDelegate.h>

@class FBBrowserLayoutConfig, FBMemFeedback, FBUserSession, UIToolbar, UIView;

@interface FBBrowserUFIFooterView : FBBrowserFooterView <FBUFIButtonsComponentViewDelegate> {

	FBBrowserLayoutConfig* _layoutConfig;
	FBMemFeedback* _feedback;
	FBUserSession* _session;
	UIToolbar* _borderView;
	UIView* _UFIView;

}
-(void)ufiButtonsComponentViewDidTapLike:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 chromeState:(double)arg2 ;
-(id)initWithLayoutConfig:(id)arg1 feedback:(id)arg2 session:(id)arg3 toolbox:(id)arg4 ;
-(void)ufiButtonsComponentViewDidTapComment:(id)arg1 popoverOrigin:(CGPoint)arg2 ;
-(void)ufiButtonsComponentViewDidTapShare:(id)arg1 popoverOrigin:(CGPoint)arg2 ;
-(void)layoutSubviews;
@end

