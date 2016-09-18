/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBPaymentsFormTextFieldViewDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>

@protocol FBPaymentsContactInfoDataActionProviding, FBPaymentsContactInfoFormViewControllerDelegate, FBPaymentsNavigationDelegate;
@class FBUserSession, FBPaymentsTableViewToastWrapperView, FBPaymentsSimpleFormView, FBPaymentsContactInfoFormViewModel, NSString;

@interface FBPaymentsContactInfoFormViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, FBPaymentsFormTextFieldViewDelegate, FBModalWebFlowDelegate, FBPaymentsNavigationDelegate> {

	FBUserSession* _session;
	FBPaymentsTableViewToastWrapperView* _contactInfoView;
	FBPaymentsSimpleFormView* _contactInfoFormView;
	id<FBPaymentsContactInfoDataActionProviding> _contactDataActionProvider;
	BOOL _makeAsDefaultToggleValue;
	BOOL _isCurrentContactDefault;
	id _currentContactData;
	FBPaymentsContactInfoFormViewModel* _viewModel;
	BOOL _shouldShowMakeAsDefaultButtonSection;
	BOOL _shouldShowMakeAsDefaultToggleSection;
	BOOL _shouldShowDeleteSection;
	id<FBPaymentsContactInfoFormViewControllerDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsContactInfoFormViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                       //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMakeAsDefaultButtonSection;                                        //@synthesize shouldShowMakeAsDefaultButtonSection=_shouldShowMakeAsDefaultButtonSection - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMakeAsDefaultToggleSection;                                        //@synthesize shouldShowMakeAsDefaultToggleSection=_shouldShowMakeAsDefaultToggleSection - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDeleteSection;                                                     //@synthesize shouldShowDeleteSection=_shouldShowDeleteSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)_showLoadingIndicator;
-(id)newNavigationController;
-(void)_onCancel;
-(void)formTextFieldViewDidChange:(id)arg1 isUserInput:(BOOL)arg2 isCompleted:(BOOL)arg3 errorDescription:(id)arg4 shouldAlert:(BOOL)arg5 ;
-(id)initWithSession:(id)arg1 viewModel:(id)arg2 contactDataActionProvider:(id)arg3 contactData:(id)arg4 isCurrentContactDefault:(BOOL)arg5 ;
-(void)setShouldShowMakeAsDefaultButtonSection:(BOOL)arg1 ;
-(void)setShouldShowMakeAsDefaultToggleSection:(BOOL)arg1 ;
-(void)setShouldShowDeleteSection:(BOOL)arg1 ;
-(void)_didTapActionButtonWithURL:(id)arg1 ;
-(void)_setNavigationItem;
-(void)_handleDataActionSuccessOfType:(long long)arg1 withContactID:(id)arg2 ;
-(void)_handleDataActionFailure:(id)arg1 ;
-(id)_contactInfoFormViewFormSectionFooterView;
-(id)_contactInfoFormViewMakeAsDefaultSectionFooterView;
-(double)_heightOfcotnactInfoFormViewFormSectionFooterViewConstrainedToSize:(CGSize)arg1 ;
-(double)_heightOfcontactInfoFormViewMakeAsDefaultSectionFooterViewConstrainedToSize:(CGSize)arg1 ;
-(void)_toggleOnSwitch:(id)arg1 ;
-(void)_FBPaymentsContactInfoFormConfigDeleteButton:(id)arg1 ;
-(void)_updateNavigationItemRightBarButtonItemStatus:(BOOL)arg1 ;
-(void)_onSave;
-(BOOL)shouldShowMakeAsDefaultButtonSection;
-(BOOL)shouldShowMakeAsDefaultToggleSection;
-(BOOL)shouldShowDeleteSection;
-(void)setDelegate:(id<FBPaymentsContactInfoFormViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBPaymentsContactInfoFormViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

