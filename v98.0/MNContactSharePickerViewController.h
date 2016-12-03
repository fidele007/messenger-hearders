/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDelegate.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDataSource.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNSuggestedContactsRetriever, MNContactSharePickerViewControllerDelegate;
@class MNMultiPeoplePickerConfiguration, MNMultiPeoplePickerViewController, NSString;

@interface MNContactSharePickerViewController : UIViewController <MNMultiPeoplePickerViewControllerDelegate, MNMultiPeoplePickerViewControllerDataSource, FBClassProvidable> {

	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;
	MNMultiPeoplePickerConfiguration* _multiPeoplePickerConfiguration;
	id<MNContactSharePickerViewControllerDelegate> _delegate;
	MNMultiPeoplePickerViewController* _multiPeoplePickerViewController;

}

@property (nonatomic,retain) MNMultiPeoplePickerViewController * multiPeoplePickerViewController;              //@synthesize multiPeoplePickerViewController=_multiPeoplePickerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<MNContactSharePickerViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCancel;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1 ;
-(id)multiPeoplePickerViewControllerAccessoryViewAboveSearchBar:(id)arg1 ;
-(MNMultiPeoplePickerViewController *)multiPeoplePickerViewController;
-(void)setMultiPeoplePickerViewController:(MNMultiPeoplePickerViewController *)arg1 ;
-(void)_setupNavigationBarLeftButton;
-(id)initWithSuggestedContactsRetriever:(id)arg1 multiPeoplePickerViewController:(id)arg2 ;
-(void)_dismissContactSharePickerView;
-(void)setDelegate:(id<MNContactSharePickerViewControllerDelegate>)arg1 ;
-(id<MNContactSharePickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end
