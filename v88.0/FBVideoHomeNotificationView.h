/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class UILabel, UIButton, FBUserSession, FBMemModelObject, FBTimer, FBVideoHomeNotificationViewTouchDownGestureRecognizer;

@interface FBVideoHomeNotificationView : UIView {

	UILabel* _detailTextLabel;
	UILabel* _titleTextLabel;
	UIButton* _notifyButton;
	FBUserSession* _session;
	BOOL _isNotificationTurnOn;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	/*^block*/id _videoHomeSessionIDProvider;
	FBTimer* _dismissVideoHomeNotificationViewTimer;
	FBVideoHomeNotificationViewTouchDownGestureRecognizer* _windowTouchDownRecognizer;
	double _notificationsUpsellTimeOutInSec;
	BOOL _isNotificationViewAnimating;

}

@property (assign,nonatomic) BOOL isNotificationViewAnimating;              //@synthesize isNotificationViewAnimating=_isNotificationViewAnimating - In the implementation block
-(id)_getDetailLabelContent;
-(void)_notifyAction;
-(void)_setNotifyButtonTitle;
-(void)_dismissWithAnimation;
-(void)_subscribeMutation;
-(void)_unsubscribeMutation;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 videoChannel:(id)arg3 videoHomeSessionIDProvider:(/*^block*/id)arg4 ;
-(void)showWithAnimation;
-(BOOL)isNotificationViewAnimating;
-(void)setIsNotificationViewAnimating:(BOOL)arg1 ;
-(void)_subscribedValueDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
@end

