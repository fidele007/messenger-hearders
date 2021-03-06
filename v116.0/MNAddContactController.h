/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <Messenger/MNMessengerCodeViewControllerDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBProvider;
@class MNAddContactViewController, FBLazyCreator, MNNavigationCoordinator, MNThreadNavigationCoordinator, FBAnalytics, NSString;

@interface MNAddContactController : NSObject <ABPeoplePickerNavigationControllerDelegate, MNMessengerCodeViewControllerDelegate, FBClassProvidable> {

	id<FBProvider> _addContactViewControllerProvider;
	MNAddContactViewController* _addContactViewController;
	FBLazyCreator* _messengerCodeViewControllerCreator;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAddContactViewControllerProvider:(id)arg1 messengerCodeViewControllerProvider:(id)arg2 navigationCoordinator:(id)arg3 threadNavigationCoordinator:(id)arg4 analytics:(id)arg5 ;
-(void)_presentContactAdditionOptionsActionSheet;
-(void)_presentAddContactViewControllerWithPhoneNumberString:(id)arg1 ;
-(void)_presentAddContactViewController;
-(void)_presentAddressBookPeoplePicker;
-(void)_presentMessengerCodeViewController;
-(void)presentAddContactFlow;
-(id)_initializeMessengerCodeViewControllerWithProvider:(id)arg1 ;
-(void)messengerCodeViewControllerDidTapCancel:(id)arg1 ;
-(void)messengerCodeViewController:(id)arg1 didDecodeUserId:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end

