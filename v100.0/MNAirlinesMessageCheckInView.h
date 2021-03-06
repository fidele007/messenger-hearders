/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@class MNAirlinesHeaderView, MNBusinessStackedContainerView, UIButton, FBImageDownloader, MNBusinessNavigationHandler, MNAirlinesMessageCheckInViewModel, NSString;

@interface MNAirlinesMessageCheckInView : UIControl <MNAttachmentView> {

	MNAirlinesHeaderView* _headerView;
	MNBusinessStackedContainerView* _flightInfoSectionViews;
	UIButton* _checkInButton;
	FBImageDownloader* _imageDownloader;
	MNBusinessNavigationHandler* _navigationHandler;
	MNAirlinesMessageCheckInViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) MNBusinessNavigationHandler * navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (nonatomic,copy) MNAirlinesMessageCheckInViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)setNavigationHandler:(MNBusinessNavigationHandler *)arg1 ;
-(MNBusinessNavigationHandler *)navigationHandler;
-(void)_didSelectMessage;
-(void)_didTapCheckInButton;
-(void)_showCheckInURLView;
-(void)layoutSubviews;
-(MNAirlinesMessageCheckInViewModel *)viewModel;
-(void)_updateLayout;
-(void)setViewModel:(MNAirlinesMessageCheckInViewModel *)arg1 ;
@end

