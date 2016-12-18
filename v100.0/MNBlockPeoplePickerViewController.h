/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNPeoplePickerSearchBarViewControllerDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/MNBlockUserFullScreenViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNSuggestedContactsRetriever, MNBlockPeoplePickerViewControllerDelegate;
@class MNNavigationCoordinator, MNPeoplePickerSearchBarViewController, FBKeyboardObserver, FBUserSession, NSString;

@interface MNBlockPeoplePickerViewController : FBContainerViewController <MNPeoplePickerSearchBarViewControllerDelegate, FBKeyboardObserverDelegate, MNBlockUserFullScreenViewControllerDelegate, FBClassProvidable> {

	id<FBProvider> _peoplePickerSearchBarViewControllerProvider;
	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;
	MNNavigationCoordinator* _navigationCoordinator;
	id<FBProvider> _blockUserViewControllerProvider;
	MNPeoplePickerSearchBarViewController* _peoplePickerSearchBarViewController;
	FBKeyboardObserver* _keyboardObserver;
	FBUserSession* _session;
	id<MNBlockPeoplePickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBlockPeoplePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_closeButtonTapped;
-(void)peoplePickerSearchBarController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(void)peoplePickerSearchBarController:(id)arg1 didTapSecondaryActionButtonForContact:(id)arg2 ;
-(BOOL)peoplePickerSearchBarController:(id)arg1 shouldShowPersonFromSearch:(id)arg2 ;
-(void)peoplePickerSearchBarControllerWillBeginSearch:(id)arg1 ;
-(void)peoplePickerSearchBarControllerWillEndSearch:(id)arg1 ;
-(void)peoplePickerSearchBarControllerDidChangePickedContacts:(id)arg1 ;
-(id)peoplePickerSearchBarControllerStringForSearchBarPlaceholderText:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)blockUserFullScreenViewControllerDidClose:(id)arg1 ;
-(void)setDelegate:(id<MNBlockPeoplePickerViewControllerDelegate>)arg1 ;
-(id<MNBlockPeoplePickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

