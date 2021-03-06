/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNContactShareCardActionButtonsContainerViewDelegate;
@class UIButton, MNThreadContextAddContactButton;

@interface MNContactShareCardActionButtonsContainerView : UIView {

	UIButton* _messageButton;
	UIButton* _audioButton;
	UIButton* _videoButton;
	MNThreadContextAddContactButton* _addContactButton;
	id<MNContactShareCardActionButtonsContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNContactShareCardActionButtonsContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithUseConnectionsContent:(BOOL)arg1 ;
-(void)_didTapAddContact;
-(void)_didTapMessage;
-(void)_didTapAudio;
-(void)_didTapVideo;
-(void)_layoutButtonSubviews;
-(CGRect)_frameForMessageButton;
-(CGRect)_frameForAudioButton;
-(CGRect)_frameForVideoButton;
-(void)configureWithShowAddContactButton:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNContactShareCardActionButtonsContainerViewDelegate>)arg1 ;
-(id<MNContactShareCardActionButtonsContainerViewDelegate>)delegate;
@end

