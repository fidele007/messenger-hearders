/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBPaymentsSimpleFormViewControllerDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPhoneCountryCodesPickerViewControllerDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsActorFetching, FBPaymentsAddressFormViewControllerDelegate, FBPaymentsNavigationDelegate, FBPaymentsConnectionStatusProviding, FBPaymentsLoadingIndicatorFactory;
@class NSString, FBPaymentsSimpleFormViewController, FBUserSession, FBSimpleNetworkerRequest, FBMemMailingAddress, NSArray, FBPaymentsLabelWithImageView, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsAddressFormViewController : FBContainerViewController <FBPaymentsSimpleFormViewControllerDelegate, FBPaymentsEventListener, FBPaymentsUpdateListener, FBPhoneCountryCodesPickerViewControllerDelegate, FBPaymentsNavigationDelegate, FBPaymentsEventAnnouncing> {

	NSString* _viewContextID;
	FBPaymentsSimpleFormViewController* _simpleFormViewController;
	FBUserSession* _session;
	id<FBPaymentsActorFetching> _actorFetcher;
	NSString* _countryCode;
	FBSimpleNetworkerRequest* _networkRequest;
	FBMemMailingAddress* _address;
	NSArray* _suggestedLabels;
	long long _currentLabelIndex;
	BOOL _hasFormUpdates;
	NSString* _fullName;
	FBPaymentsLabelWithImageView* _addressFormHeaderView;
	BOOL _canFocusForm;
	BOOL _hasSetAddressToDefault;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsAddressFormViewControllerDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	id<FBPaymentsLoadingIndicatorFactory> _loadingIndicatorFactory;

}

@property (assign,nonatomic,__weak) id<FBPaymentsAddressFormViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                    //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,retain) id<FBPaymentsConnectionStatusProviding> connectionStatusProvider;              //@synthesize connectionStatusProvider=_connectionStatusProvider - In the implementation block
@property (nonatomic,retain) id<FBPaymentsLoadingIndicatorFactory> loadingIndicatorFactory;                 //@synthesize loadingIndicatorFactory=_loadingIndicatorFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id<FBPaymentsConnectionStatusProviding>)connectionStatusProvider;
-(id)newNavigationController;
-(void)_onCancel;
-(void)_updateFullNameWithLoadedName:(id)arg1 ;
-(void)setConnectionStatusProvider:(id<FBPaymentsConnectionStatusProviding>)arg1 ;
-(id)initWithSession:(id)arg1 address:(id)arg2 actorFetcher:(id)arg3 ;
-(void)setLoadingIndicatorFactory:(id<FBPaymentsLoadingIndicatorFactory>)arg1 ;
-(id<FBPaymentsLoadingIndicatorFactory>)loadingIndicatorFactory;
-(void)simpleFormViewControllerDidUpdateForm:(id)arg1 ;
-(void)simpleFormViewControllerDidSelectLabelButton:(id)arg1 ;
-(id)headerViewForSimpleFormViewController:(id)arg1 ;
-(void)countryPicker:(id)arg1 didSelectCountryWithCountryCode:(id)arg2 ;
-(void)dismissCountryPicker:(id)arg1 ;
-(void)_setUpFormViewController;
-(void)_updateNavigationBarStatusAnimated:(BOOL)arg1 ;
-(void)_focusForm;
-(void)_showSelectLabelActionSheetWithLabels:(id)arg1 ;
-(void)_updateFormCountryCode;
-(void)_performNetworkRequestWithType:(long long)arg1 addressFormRequest:(id)arg2 ;
-(void)_performDeleteAction;
-(long long)_navigationRightBarButtonStatusWithHasInitialAddress:(BOOL)arg1 hasFormUpdates:(BOOL)arg2 ;
-(void)_updateNavigationBarWithStatus:(long long)arg1 ;
-(BOOL)_formInformationSufficientToProceed;
-(id)_rightbarButton;
-(id)_currentLabelForAddress:(id)arg1 ;
-(void)_didTapDelete;
-(void)_setDefaultAddress;
-(void)_setupCountryPicker;
-(void)_loadFullNameIfNeeded;
-(void)_showCountryPicker;
-(void)_onSave:(id)arg1 ;
-(void)_handleAddressRequestSuccessOfType:(long long)arg1 ;
-(void)_handleAddressRequestFailureWithError:(id)arg1 ;
-(void)_updateAddressFormName;
-(void)_updateSelectedLabel:(long long)arg1 ;
-(void)setDelegate:(id<FBPaymentsAddressFormViewControllerDelegate>)arg1 ;
-(id<FBPaymentsAddressFormViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

