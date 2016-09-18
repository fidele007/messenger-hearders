/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewDelegate.h>
#import <Messenger/MNThreadCustomizationPickerViewControllerDelegate.h>
#import <Messenger/FBPickerViewDelegate.h>
#import <Messenger/MNEditGroupPicturePickerDelegate.h>
#import <Messenger/MNNewGroupThreadSummaryUpdateListener.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNNewGroupThreadSummaryUpdating.h>

@protocol MNModalPresentation, MNNewGroupThreadSummaryUpdateRunning;
@class MNGroupsRoomContainerView, MNGroupsAddRoomDescriptionViewController, MNThreadDetailsTableViewCellIconsConfiguration, MNThreadCustomizationPickerViewController, FBPickerView, FBUserSession, MNEditGroupPicturePicker, MNNewGroupThreadSummary, NSString;

@interface MNGroupsRoomCreateViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNGroupsRoomCreateViewDelegate, MNThreadCustomizationPickerViewControllerDelegate, FBPickerViewDelegate, MNEditGroupPicturePickerDelegate, MNNewGroupThreadSummaryUpdateListener, FBClassProvidable, MNNewGroupThreadSummaryUpdating> {

	MNGroupsRoomContainerView* _roomContainerView;
	MNGroupsAddRoomDescriptionViewController* _addGroupDescriptionViewController;
	MNThreadDetailsTableViewCellIconsConfiguration* _cellIconsConfiguration;
	id<MNModalPresentation> _navigationCoordinator;
	MNThreadCustomizationPickerViewController* _pickerViewController;
	FBPickerView* _pickerView;
	FBUserSession* _session;
	MNEditGroupPicturePicker* _groupPicturePicker;
	id<MNNewGroupThreadSummaryUpdateRunning> _newGroupThreadSummaryUpdateRunner;
	MNNewGroupThreadSummary* _groupThreadSummary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)editGroupPicturePicker:(id)arg1 didPickImage:(id)arg2 ;
-(void)editGroupPicturePickerDidChooseToRemoveImage:(id)arg1 ;
-(void)editGroupPicturePickerDidCancel:(id)arg1 ;
-(void)roomCreateViewDidSelectRoomProfilePhoto:(id)arg1 fromSourceView:(id)arg2 ;
-(void)roomCreateViewDidAddDescription:(id)arg1 ;
-(void)roomCreateViewDidTapCustomize:(id)arg1 ;
-(void)roomCreateView:(id)arg1 didChangeRoomName:(id)arg2 ;
-(void)_configureViewWithNewGroupThreadSummary:(id)arg1 ;
-(void)_didSelectCustomizeEmojiForNewRoom;
-(void)_didSelectCustomizeColorForNewRoom;
-(void)_updateNewGroupThreadSummaryWithGroupName:(id)arg1 ;
-(void)_presentThreadCustomizationPickerControllerForPickerType:(long long)arg1 pickerIdentifier:(id)arg2 ;
-(void)threadCustomizationPickerViewControllerDidCancel:(id)arg1 ;
-(void)pickerView:(id)arg1 didSelectItem:(id)arg2 ;
-(void)pickerView:(id)arg1 didDeselectItem:(id)arg2 ;
-(void)newGroupThreadSummaryUpdated:(id)arg1 ;
-(void)setNewGroupThreadSummaryUpdateRunner:(id)arg1 ;
-(BOOL)isShowingCustomizationOptions;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)prepareForReuse;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
