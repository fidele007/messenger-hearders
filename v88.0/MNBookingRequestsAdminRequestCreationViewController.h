/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNAdminProductItemsListViewControllerDelegate.h>
#import <Messenger/MNBookingRequestsAdminRequestNoteViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MNBookingRequestsAdminRequestCreationViewControllerDelegate;
@class UIScrollView, FBUserSession, FBButton, UILabel, UITextField, UIView, NSDate, NSString, FBNetworkImageView, MNBookingRequestsAdminRequestNoteView, FBProfServicesBookingDataModel, MNAdminProductItemsListViewController;

@interface MNBookingRequestsAdminRequestCreationViewController : UIViewController <MNAdminProductItemsListViewControllerDelegate, MNBookingRequestsAdminRequestNoteViewDelegate, UIAlertViewDelegate, UITextFieldDelegate> {

	UIScrollView* _contentView;
	FBUserSession* _userSession;
	FBButton* _createBookingRequestButton;
	UILabel* _instructionLabel;
	UILabel* _serviceTitleLabel;
	UILabel* _serviceSubTitleLabel;
	UILabel* _servicePriceLabel;
	UILabel* _dateTitleLabel;
	UILabel* _timeTitleLabel;
	UITextField* _dateTextField;
	UITextField* _timeTextField;
	UIView* _topSeparatorView;
	UIView* _middleSeparatorView;
	UIView* _buttomSeparatorView;
	NSDate* _selectedBookingRequestDate;
	NSDate* _selectedBookingRequestTime;
	NSString* _productId;
	BOOL _canSelectService;
	BOOL _isModalPresent;
	NSString* _requestId;
	NSString* _pageId;
	NSString* _selectedProductName;
	NSString* _selectedProductPrice;
	NSString* _selectedProductImageURI;
	FBNetworkImageView* _productImageView;
	NSString* _entryPoint;
	UIView* _footerBackgroundView;
	UIView* _requestCreationFormView;
	MNBookingRequestsAdminRequestNoteView* _requestNoteView;
	FBProfServicesBookingDataModel* _viewModel;
	id<MNBookingRequestsAdminRequestCreationViewControllerDelegate> _delegate;
	MNAdminProductItemsListViewController* _productItemsListViewController;

}

@property (nonatomic,retain) MNAdminProductItemsListViewController * productItemsListViewController;              //@synthesize productItemsListViewController=_productItemsListViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCancel;
-(id)initWithViewModel:(id)arg1 session:(id)arg2 canSelectService:(BOOL)arg3 isModalPresent:(BOOL)arg4 delegate:(id)arg5 ;
-(void)didSelectProductItemWithName:(id)arg1 price:(id)arg2 productId:(id)arg3 ;
-(id)initWithBookingRequestId:(id)arg1 pageId:(id)arg2 selectedProductName:(id)arg3 selectedProductPrice:(id)arg4 selectedProductImageURI:(id)arg5 session:(id)arg6 canSelectService:(BOOL)arg7 isModalPresent:(BOOL)arg8 entryPoint:(id)arg9 delegate:(id)arg10 ;
-(void)_didTapServices;
-(void)_setDatePickerToTextField:(id)arg1 datePickerMode:(long long)arg2 ;
-(void)_didTapCreateBookingRequest;
-(void)_internalLayoutViews;
-(void)_updateTextField;
-(void)_pickerDoneClicked;
-(BOOL)_isBookingRequestFormCompleted;
-(void)_updateTimePicker:(id)arg1 ;
-(id)_mergeDate:(id)arg1 time:(id)arg2 ;
-(void)_didCreateOrReschedulelNativeBookingRequest;
-(MNAdminProductItemsListViewController *)productItemsListViewController;
-(void)_didDeclinelNativeBookingRequest;
-(void)didTapDeclineBookingRequest;
-(id)initWithBookingRequestId:(id)arg1 pageId:(id)arg2 session:(id)arg3 canSelectService:(BOOL)arg4 isModalPresent:(BOOL)arg5 entryPoint:(id)arg6 ;
-(void)setProductItemsListViewController:(MNAdminProductItemsListViewController *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

