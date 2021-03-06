/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactImportInitiationListener.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/MNContactSyncControllerStatusListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNContactsSyncSettingControllerDelegate;
@class MNAddressBook, UITableViewCell, UIView, MNUserSettings, UIActionSheet, FBAnalytics, MNContactSyncController, UIAlertView, NSString;

@interface MNContactsSyncSettingController : NSObject <MNContactImportInitiationListener, UIActionSheetDelegate, MNContactSyncControllerStatusListener, FBClassProvidable> {

	MNAddressBook* _addressBook;
	BOOL _actionSheetOrAlertViewIsDismissing;
	UITableViewCell* _contactsSyncCell;
	UIView* _actionSheetPresenter;
	id<MNContactsSyncSettingControllerDelegate> _delegate;
	MNUserSettings* _userSettings;
	UIActionSheet* _turnOnActionSheet;
	UIActionSheet* _turnOffActionSheet;
	FBAnalytics* _analytics;
	MNContactSyncController* _contactSyncController;
	UIAlertView* _alertView;

}

@property (nonatomic,retain) MNUserSettings * userSettings;                                                          //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) UIActionSheet * turnOnActionSheet;                                                      //@synthesize turnOnActionSheet=_turnOnActionSheet - In the implementation block
@property (nonatomic,retain) UIActionSheet * turnOffActionSheet;                                                     //@synthesize turnOffActionSheet=_turnOffActionSheet - In the implementation block
@property (nonatomic,retain) FBAnalytics * analytics;                                                                //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) MNContactSyncController * contactSyncController;                                        //@synthesize contactSyncController=_contactSyncController - In the implementation block
@property (assign,nonatomic) BOOL actionSheetOrAlertViewIsDismissing;                                                //@synthesize actionSheetOrAlertViewIsDismissing=_actionSheetOrAlertViewIsDismissing - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                                                //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) UITableViewCell * contactsSyncCell;                                                     //@synthesize contactsSyncCell=_contactsSyncCell - In the implementation block
@property (nonatomic,retain) UIView * actionSheetPresenter;                                                          //@synthesize actionSheetPresenter=_actionSheetPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<MNContactsSyncSettingControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPresentingConfirmationDialog,nonatomic,readonly) BOOL presentingConfirmationDialog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAnalytics *)analytics;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(BOOL)isContactSyncEnabled;
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(void)allowContactImporting;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(BOOL)isPresentingConfirmationDialog;
-(void)contactSyncControllerDidChangeStatus:(id)arg1 ;
-(MNContactSyncController *)contactSyncController;
-(UIView *)actionSheetPresenter;
-(void)setActionSheetPresenter:(UIView *)arg1 ;
-(id)initWithUserSettings:(id)arg1 contactSyncController:(id)arg2 addressBook:(id)arg3 analytics:(id)arg4 ;
-(void)_updateContactsSyncCell;
-(void)setTurnOffActionSheet:(UIActionSheet *)arg1 ;
-(void)setTurnOnActionSheet:(UIActionSheet *)arg1 ;
-(void)turnOffContactSyncing;
-(void)setContactsSyncCell:(UITableViewCell *)arg1 ;
-(BOOL)canEnableContactSyncing;
-(void)contactsSyncCellTappedFromSourceView:(id)arg1 ;
-(UITableViewCell *)contactsSyncCell;
-(UIActionSheet *)turnOnActionSheet;
-(UIActionSheet *)turnOffActionSheet;
-(void)setContactSyncController:(MNContactSyncController *)arg1 ;
-(BOOL)actionSheetOrAlertViewIsDismissing;
-(void)setActionSheetOrAlertViewIsDismissing:(BOOL)arg1 ;
-(void)setDelegate:(id<MNContactsSyncSettingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactsSyncSettingControllerDelegate>)delegate;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_showErrorAlert;
-(MNUserSettings *)userSettings;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
@end

