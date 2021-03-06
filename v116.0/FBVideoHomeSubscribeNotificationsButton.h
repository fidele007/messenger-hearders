/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBMorphableButton, FBMorphableButtonContent, FBMemModelObject, FBUserSession, NSOperationQueue;

@interface FBVideoHomeSubscribeNotificationsButton : UIView {

	FBMorphableButton* _button;
	FBMorphableButtonContent* _subscribeButtonContent;
	FBMorphableButtonContent* _unsubscribeButtonContent;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	FBUserSession* _session;
	BOOL _darkBackground;
	long long _buttonAlignment;
	BOOL _showVideoHomeTabItemBling;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _stateToggledToBlock;
	NSOperationQueue* _queueForNextFollowedCLCUpdate;

}
-(void)_layoutSubviewsInternal:(BOOL)arg1 ;
-(void)_didTapSubscribeButton;
-(void)_didTapUnsubscribeButton;
-(void)_animateVideoTabItemBling;
-(void)_subscribedValueDidChange:(id)arg1 ;
-(id)initWithVideoChannel:(id)arg1 session:(id)arg2 darkBackground:(BOOL)arg3 buttonAlignment:(long long)arg4 showVideoHomeTabItemBling:(BOOL)arg5 videoHomeSessionIDProvider:(/*^block*/id)arg6 stateToggledToBlock:(/*^block*/id)arg7 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

