/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAutoDownloadVideoSettingControllerDelegate;
@class MNUserSettings, UIActionSheet, MNAutoDownloadSettingListenerAnnouncer, UIView, UITableViewCell, NSString;

@interface MNAutoDownloadVideoSettingController : NSObject <UIActionSheetDelegate, FBClassProvidable> {

	MNUserSettings* _userSettings;
	unsigned long long _currentMode;
	UIActionSheet* _changeDownloadSettingActionSheet;
	long long _onButtonIndex;
	long long _wifiButtonIndex;
	long long _offButtonIndex;
	MNAutoDownloadSettingListenerAnnouncer* _announcer;
	UIView* _actionSheetPresenter;
	UITableViewCell* _autoDownloadCell;
	id<MNAutoDownloadVideoSettingControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIView * actionSheetPresenter;                                                 //@synthesize actionSheetPresenter=_actionSheetPresenter - In the implementation block
@property (nonatomic,retain) UITableViewCell * autoDownloadCell;                                            //@synthesize autoDownloadCell=_autoDownloadCell - In the implementation block
@property (assign,nonatomic,__weak) id<MNAutoDownloadVideoSettingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAutoDownloadModeString:(unsigned long long)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(UIView *)actionSheetPresenter;
-(void)setActionSheetPresenter:(UIView *)arg1 ;
-(void)_refreshAutoDownloadMode;
-(void)setAutoDownloadCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)autoDownloadCell;
-(void)autoDownloadVideoCellTappedFromSourceView:(id)arg1 ;
-(void)setDelegate:(id<MNAutoDownloadVideoSettingControllerDelegate>)arg1 ;
-(id<MNAutoDownloadVideoSettingControllerDelegate>)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
