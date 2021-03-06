/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)setGroupDescription:(id)arg1 ;
-(void)setNewGroupThreadSummaryUpdateRunner:(id)arg1 ;
-(void)newGroupThreadSummaryUpdated:(id)arg1 ;
-(id)_addDescriptionView;
-(void)_configureNavBar;
-(void)_configureNavBarTheme;
-(void)_didTapSaveButton;
-(void)_didTapCancelButton;
-(void)setDelegate:(id<MNGroupsAddRoomDescriptionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGroupsAddRoomDescriptionViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

