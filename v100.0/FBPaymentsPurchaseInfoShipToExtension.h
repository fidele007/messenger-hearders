/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsAddressDataFetcherDelegate.h>
#import <Messenger/FBPaymentsAddressFormViewControllerDelegate.h>
#import <Messenger/FBPaymentsAddressListViewControllerPickerDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsPurchaseInfoExtension.h>

@protocol FBPaymentsPurchaseInfoExtensionDelegate, FBPaymentsNavigationDelegate, FBPaymentsLoadingIndicatorFactory;
@class FBUserSession, FBPaymentsAddressDataFetcher, FBMemMailingAddress, FBPaymentsEventListenerAnnouncer, NSString;

@interface FBPaymentsPurchaseInfoShipToExtension : NSObject <FBPaymentsAddressDataFetcherDelegate, FBPaymentsAddressFormViewControllerDelegate, FBPaymentsAddressListViewControllerPickerDelegate, FBPaymentsEventListener, FBPaymentsPurchaseInfoExtension> {

	FBUserSession* _session;
	FBPaymentsAddressDataFetcher* _addressDataFetcher;
	FBMemMailingAddress* _selectedAddress;
	BOOL _isUpdatingAddress;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsPurchaseInfoExtensionDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	long long _presentationStrategy;
	id<FBPaymentsLoadingIndicatorFactory> _loadingIndicatorFactory;

}

@property (nonatomic,retain) id<FBPaymentsLoadingIndicatorFactory> loadingIndicatorFactory;              //@synthesize loadingIndicatorFactory=_loadingIndicatorFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) long long presentationStrategy;                                             //@synthesize presentationStrategy=_presentationStrategy - In the implementation block
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(long long)presentationStrategy;
-(void)setPresentationStrategy:(long long)arg1 ;
-(void)setLoadingIndicatorFactory:(id<FBPaymentsLoadingIndicatorFactory>)arg1 ;
-(void)resetForCancelingOngoingPayment;
-(id)detailedText;
-(void)handleTapAction;
-(BOOL)hasMadeCriticalChanges;
-(id<FBPaymentsLoadingIndicatorFactory>)loadingIndicatorFactory;
-(void)addressFormViewControllerDidCancel:(id)arg1 ;
-(void)addressFormViewControllerDidAddOrUpdateAddress:(id)arg1 ;
-(void)addressFormViewControllerHasUpdates:(id)arg1 ;
-(void)addressFormViewControllerDidDeleteAddress:(id)arg1 ;
-(id)fieldCollectedData;
-(id)fieldTitle;
-(BOOL)needFollowUp;
-(void)handleFollowUpAction;
-(void)_reloadAddress;
-(void)_setSelectedAddress:(id)arg1 ;
-(void)addressDataFetcher:(id)arg1 didFetchAddresses:(id)arg2 ;
-(void)addressDataFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)addressDataFetcherWillFetchAddress:(id)arg1 ;
-(void)addressListViewControllerDidCancel:(id)arg1 ;
-(void)addressListViewController:(id)arg1 didSelectAddress:(id)arg2 ;
-(id)extensionIdentifier;
-(void)setDelegate:(id<FBPaymentsPurchaseInfoExtensionDelegate>)arg1 ;
-(id<FBPaymentsPurchaseInfoExtensionDelegate>)delegate;
-(id)text;
-(id)image;
-(long long)status;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(BOOL)isHiddenExtension;
-(void)setUp;
@end

