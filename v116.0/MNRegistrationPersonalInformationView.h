/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MNRegistrationPersonalInformationViewDelegate;
@class UIScrollView, MNHeaderView, MNBadgedProfileImageView, MNButton, MNRegistrationPersonalInformationFooterTextView, MNRegistrationPersonalInformationFormView, NSString;

@interface MNRegistrationPersonalInformationView : UIView <UITextFieldDelegate, UIScrollViewDelegate> {

	UIScrollView* _contentView;
	MNHeaderView* _headerView;
	MNBadgedProfileImageView* _profileImageView;
	MNButton* _continueButton;
	MNRegistrationPersonalInformationFooterTextView* _footerTextView;
	CGRect _keyboardFrame;
	MNRegistrationPersonalInformationFormView* _personalInformationFormView;
	id<MNRegistrationPersonalInformationViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNRegistrationPersonalInformationFormView * personalInformationFormView;              //@synthesize personalInformationFormView=_personalInformationFormView - In the implementation block
@property (assign,nonatomic,__weak) id<MNRegistrationPersonalInformationViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIGAccount:(id)arg1 imageDownloaderFactory:(id)arg2 badgeImageFactory:(id)arg3 placeholderImageFactory:(id)arg4 backgroundImageFactory:(id)arg5 ;
-(void)_continueButtonPressed;
-(void)startLoadingAnimation;
-(void)stopLoadingAnimation;
-(void)displayKeyboard;
-(void)_updateContinueButtonStateWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(MNRegistrationPersonalInformationFormView *)personalInformationFormView;
-(void)updateKeyboardFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNRegistrationPersonalInformationViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRegistrationPersonalInformationViewDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)scrollToBottom;
-(id)firstName;
-(id)lastName;
@end

