/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNUniqueIDInterstitialUsernameViewDelegate.h>

@protocol MNUniqueIDInterstitialViewDelegate;
@class UIButton, MNLoadingIndicator, UILabel, UIImageView, UIView, MNUniqueIDInterstitialUsernameView, MNButton, MNStackedContainerView, UIImage, NSString;

@interface MNUniqueIDInterstitialView : UIView <MNUniqueIDInterstitialUsernameViewDelegate> {

	UIButton* _closeButton;
	MNLoadingIndicator* _loadingIndicator;
	UILabel* _titleLabel;
	UIImageView* _codeImageView;
	UIView* _codeView;
	MNUniqueIDInterstitialUsernameView* _usernameView;
	UILabel* _contentLabel;
	MNButton* _seeSettingsButton;
	MNStackedContainerView* _stackedContainerView;
	BOOL _showLoadingIndicator;
	id<MNUniqueIDInterstitialViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNUniqueIDInterstitialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showLoadingIndicator;                                           //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
@property (nonatomic,retain) UIImage * messengerCodeImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)uniqueIDInterstitialUsernameViewDidTapEditButton:(id)arg1 ;
-(id)initWithUsername:(id)arg1 ;
-(void)_didTapSeeSettingsButton;
-(UIImage *)messengerCodeImage;
-(void)setMessengerCodeImage:(UIImage *)arg1 ;
-(void)setShowLoadingIndicator:(BOOL)arg1 ;
-(void)_didTapCloseButton;
-(void)setDelegate:(id<MNUniqueIDInterstitialViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNUniqueIDInterstitialViewDelegate>)delegate;
-(BOOL)showLoadingIndicator;
@end
