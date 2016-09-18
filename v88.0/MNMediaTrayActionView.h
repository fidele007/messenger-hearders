/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMediaTraySendButtonDelegate.h>

@protocol MNMediaTrayActionViewDelegate;
@class UIButton, MNMediaTraySendButton, NSString;

@interface MNMediaTrayActionView : UIView <MNMediaTraySendButtonDelegate> {

	long long _style;
	UIButton* _photoPickerButton;
	MNMediaTraySendButton* _mediaSendButton;
	long long _badgeCount;
	id<MNMediaTrayActionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaTrayActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initPhotoPickerButton;
-(void)_initMediaSendButton;
-(void)_updateSubviewAnimated:(BOOL)arg1 ;
-(void)_photoPickerButtonTapped:(id)arg1 ;
-(void)mediaTraySendButtonDidTapped:(id)arg1 ;
-(void)_mediaSendButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<MNMediaTrayActionViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMediaTrayActionViewDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)setBadgeCount:(long long)arg1 ;
@end

