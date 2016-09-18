/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsToastProviderBase.h>
#import <Messenger/FBPaymentsMessageWithLinkViewDelegate.h>
#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/FBPaymentsToastProviding.h>

@class FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPeerToPeerFetchController, NSMutableDictionary, NSMutableSet, NSString;

@interface MNPaymentsAccountStatusToastProvider : FBPaymentsToastProviderBase <FBPaymentsMessageWithLinkViewDelegate, FBPaymentsPeerToPeerFetchControllerListener, FBPaymentsToastProviding> {

	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	BOOL _accountEnabled;
	id _fetchToken;
	NSMutableDictionary* _toastByIdentifier;
	NSMutableSet* _toastRequesterSurfaceIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paymentsToastProviderIdentifier;
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(id)initWithNavigationCoordinator:(id)arg1 fetchController:(id)arg2 ;
-(BOOL)_hasToastForSurface:(id)arg1 ;
-(void)_performFetch;
-(void)_processAccountEnableUpdate:(BOOL)arg1 ;
-(void)_updateToastAndAnnounce;
-(BOOL)_createToastsForRegisteredIdentifiers;
-(BOOL)_removeToastsForRegisteredIdentifiers;
-(BOOL)_createToastIfNeededForSurfaceIdentifier:(id)arg1 ;
-(BOOL)_removeToastIfNeededForSurfaceIdentifier:(id)arg1 ;
-(void)paymentsMessageWithLinkView:(id)arg1 didTapURL:(id)arg2 ;
-(BOOL)isEligibleForToastingContext:(id)arg1 ;
-(id)toastForToastingContext:(id)arg1 ;
-(void)didDismissToastingContext:(id)arg1 ;
@end

