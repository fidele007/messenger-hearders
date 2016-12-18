/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MNInstructionsViewControllerDelegate;
@class MNInstructionsView, MNInstructionsViewModel;

@interface MNInstructionsViewController : UIViewController {

	MNInstructionsView* _instructionsView;
	MNInstructionsViewModel* _instructionsViewModel;
	id<MNInstructionsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<MNInstructionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didPressOpenSettingsButton;
-(void)_didPressDismissButton;
-(id)initWithInstructionsViewModel:(id)arg1 ;
-(void)setDelegate:(id<MNInstructionsViewControllerDelegate>)arg1 ;
-(id<MNInstructionsViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_configureNavigationBar;
@end

