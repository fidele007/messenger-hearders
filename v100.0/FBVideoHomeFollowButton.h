/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBMorphableButton, FBMorphableButtonContent, FBMemModelObject, NSString, FBUserSession, NSOperationQueue;

@interface FBVideoHomeFollowButton : UIView {

	FBMorphableButton* _button;
	FBMorphableButtonContent* _followButtonContent;
	FBMorphableButtonContent* _followingButtonContent;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	NSString* _videoID;
	FBUserSession* _session;
	BOOL _darkBackground;
	unsigned long long _sizeStyle;
	long long _buttonAlignment;
	BOOL _showVideoHomeTabItemBling;
	BOOL _hideIfAlreadyFollowing;
	BOOL _stateWasAlreadyFollowingOrSubscribed;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _stateToggledToBlock;
	NSOperationQueue* _queueForNextFollowedCLCUpdate;

}
-(id)initWithVideoChannel:(id)arg1 videoID:(id)arg2 session:(id)arg3 darkBackground:(BOOL)arg4 sizeStyle:(unsigned long long)arg5 buttonAlignment:(long long)arg6 showVideoHomeTabItemBling:(BOOL)arg7 hideIfAlreadyFollowing:(BOOL)arg8 videoHomeSessionIDProvider:(/*^block*/id)arg9 stateToggledToBlock:(/*^block*/id)arg10 ;
-(void)_layoutSubviewsInternal:(BOOL)arg1 ;
-(void)_didTapFollowButton;
-(void)_didTapFollowingButton;
-(void)_followingValueDidChange:(id)arg1 ;
-(void)_animateVideoTabItemBling;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

