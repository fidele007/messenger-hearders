/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsContactInfoFormViewControllerDelegate.h>
#import <Messenger/FBPaymentsContactInfoListViewControllerDelegate.h>
#import <Messenger/FBPaymentsPurchaseInfoExtension.h>

@protocol FBPaymentsPurchaseInfoExtensionDelegate, FBPaymentsNavigationDelegate;
@class FBUserSession, FBPaymentsContactInfoEmailAddressDataRetriever, FBPaymentsContactInfoPhoneNumberDataRetriever, FBMemPaymentAccountEmail, FBMemPaymentAccountPhone, NSString;

@interface FBPaymentsPurchaseInfoContactExtension : NSObject <FBPaymentsContactInfoFormViewControllerDelegate, FBPaymentsContactInfoListViewControllerDelegate, FBPaymentsPurchaseInfoExtension> {

	FBUserSession* _session;
	long long _contactOption;
	FBPaymentsContactInfoEmailAddressDataRetriever* _emailDataRetriever;
	FBPaymentsContactInfoPhoneNumberDataRetriever* _phoneDataRetriever;
	FBMemPaymentAccountEmail* _selectedEmail;
	FBMemPaymentAccountPhone* _selectedPhone;
	unsigned long long _loadingCondition;
	id<FBPaymentsPurchaseInfoExtensionDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	long long _presentationStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;               //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) long long presentationStrategy;                                           //@synthesize presentationStrategy=_presentationStrategy - In the implementation block
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(long long)presentationStrategy;
-(void)setPresentationStrategy:(long long)arg1 ;
-(void)resetForCancelingOngoingPayment;
-(id)detailedText;
-(void)handleTapAction;
-(BOOL)hasMadeCriticalChanges;
-(void)handleFollowUpAction;
-(void)_reloadEmails;
-(void)_reloadPhones;
-(id)_extensionTextIfStatusEmpty;
-(id)_extensionTextIfStatusFilled;
-(id)_extensionDetailedTextIfStatusFilled;
-(void)_addContactPhoneAction;
-(void)_addContactEmailAction;
-(void)_viewContactInfoAction;
-(void)_viewContactEmailsAction;
-(void)_viewContactPhonesAction;
-(void)_updateSelectedContactEmail:(id)arg1 isUserAction:(BOOL)arg2 ;
-(void)_updateSelectedContactPhone:(id)arg1 isUserAction:(BOOL)arg2 ;
-(void)_presentContactInfoFormViewControllerWithViewModel:(id)arg1 actionprovider:(id)arg2 ;
-(id)_contactInfoListViewController;
-(void)_handleLoadedEmail:(id)arg1 ;
-(void)_handleLoadedPhone:(id)arg1 ;
-(void)contactInfoFormViewControllerDidCancel:(id)arg1 ;
-(void)contactInfoFormViewControllerDidUpdateData:(id)arg1 ;
-(void)contactInfoFormViewController:(id)arg1 didAddContactDatawithNewContactID:(id)arg2 ;
-(void)contactInfoFormViewControllerDidDeleteData:(id)arg1 ;
-(void)contactInfoFormViewControllerDidSetDefault:(id)arg1 ;
-(void)contactInfoListViewController:(id)arg1 didSelectContactEmail:(id)arg2 ;
-(void)contactInfoListViewController:(id)arg1 didSelectContactPhone:(id)arg2 ;
-(id)initWithSession:(id)arg1 contactOption:(long long)arg2 ;
-(id)fieldTitle;
-(id)fieldCollectedData;
-(BOOL)needFollowUp;
-(id)extensionIdentifier;
-(void)setDelegate:(id<FBPaymentsPurchaseInfoExtensionDelegate>)arg1 ;
-(id<FBPaymentsPurchaseInfoExtensionDelegate>)delegate;
-(id)text;
-(id)image;
-(void)_dismissViewController;
-(long long)status;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(void)_pushViewController:(id)arg1 ;
-(BOOL)isHiddenExtension;
-(void)setUp;
@end
