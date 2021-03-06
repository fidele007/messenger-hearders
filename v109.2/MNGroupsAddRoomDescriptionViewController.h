/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNNewGroupThreadSummaryUpdateListener.h>
#import <Messenger/MNNewGroupThreadSummaryUpdating.h>

@protocol MNNewGroupThreadSummaryUpdateRunning, MNGroupsAddRoomDescriptionViewControllerDelegate;
@class MNGroupsAddRoomDescriptionView, MNNewGroupThreadSummary, NSString;

@interface MNGroupsAddRoomDescriptionViewController : UIViewController <MNNewGroupThreadSummaryUpdateListener, MNNewGroupThreadSummaryUpdating> {

	MNGroupsAddRoomDescriptionView* _addDescriptionView;
	id<MNNewGroupThreadSummaryUpdateRunning> _newGroupThreadSummaryUpdateRunner;
	MNNewGroupThreadSummary* _groupThreadSummary;
	id<MNGroupsAddRoomDescriptionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsAddRoomDescriptionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)newGroupThreadSummaryUpdated:(id)arg1 ;
-(void)setNewGroupThreadSummaryUpdateRunner:(id)arg1 ;
-(id)_addDescriptionView;
-(void)_configureNavBar;
-(void)_configureNavBarTheme;
-(void)_didTapSaveButton;
-(void)_didTapCancelButton;
-(void)setGroupDescription:(id)arg1 ;
-(void)setDelegate:(id<MNGroupsAddRoomDescriptionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGroupsAddRoomDescriptionViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

