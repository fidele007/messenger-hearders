/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNLoginAutoSSOModalViewDelegate.h>

@protocol MNLoginAutoSSOModalContainerViewDelegate;
@class MNLoginAutoSSOModalView, NSString;

@interface MNLoginAutoSSOModalContainerView : UIView <MNLoginAutoSSOModalViewDelegate> {

	MNLoginAutoSSOModalView* _contentView;
	id<MNLoginAutoSSOModalContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLoginAutoSSOModalContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 avatarImageDecoration:(id)arg2 profileImageViewController:(id)arg3 userID:(id)arg4 userDisplayName:(id)arg5 ;
-(void)loginAutoSSOModalViewDidTapContinue:(id)arg1 ;
-(void)loginAutoSSOModalViewDidTapSwitchAccount:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNLoginAutoSSOModalContainerViewDelegate>)arg1 ;
-(id<MNLoginAutoSSOModalContainerViewDelegate>)delegate;
@end

