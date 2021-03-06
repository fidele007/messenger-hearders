/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNContactsForThreadSuggestionsSocialContextViewDelegate.h>
#import <Messenger/MNContactsForThreadSuggestionsViewControllerDelegate.h>

@class MNIGInAppAccountAutoImportedContactsViewControllerInjector, MNContactsForThreadSuggestionsSocialContextView, FBLocalizedIndexedCollation, MNContactsForThreadSuggestionsViewController, NSString;

@interface MNIGInAppAccountAutoImportedContactsViewController : UIViewController <MNContactsForThreadSuggestionsSocialContextViewDelegate, MNContactsForThreadSuggestionsViewControllerDelegate> {

	MNIGInAppAccountAutoImportedContactsViewControllerInjector* _injector;
	MNContactsForThreadSuggestionsSocialContextView* _socialContextView;
	FBLocalizedIndexedCollation* _localizedIndexedCollation;
	MNContactsForThreadSuggestionsViewController* _contactsForThreadSuggestionsViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didLoadSuggestedThreadSuggestionContacts:(id)arg1 socialContextView:(id)arg2 ;
-(id)_allMergedViewSections:(id)arg1 ;
-(void)contactsForThreadSuggestionsSocialContextViewDidTapContinue:(id)arg1 ;
-(void)contactsForThreadSuggestionsViewControllerDidTapDismissButton:(id)arg1 ;
-(void)contactsForThreadSuggestionsViewControllerDidTapOKButton:(id)arg1 selectedUserIds:(id)arg2 ;
-(id)initWithInjector:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end

