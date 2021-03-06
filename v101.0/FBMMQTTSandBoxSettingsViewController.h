/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSettingsSingleTextFieldViewController.h>

@protocol FBMMQTTSandBoxSettingsCallback;
@class NSArray;

@interface FBMMQTTSandBoxSettingsViewController : FBSettingsSingleTextFieldViewController {

	id<FBMMQTTSandBoxSettingsCallback> _delegate;
	NSArray* _shortcutSandboxes;
	NSArray* _shortcutButtons;

}

@property (nonatomic,copy) NSArray * shortcutSandboxes;                                       //@synthesize shortcutSandboxes=_shortcutSandboxes - In the implementation block
@property (nonatomic,copy) NSArray * shortcutButtons;                                         //@synthesize shortcutButtons=_shortcutButtons - In the implementation block
@property (assign,nonatomic,__weak) id<FBMMQTTSandBoxSettingsCallback> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)currentSandBoxSetting;
-(id)analyticsModule;
-(BOOL)fb_showAuxiliaryViewController;
-(id)_recentSandboxes;
-(NSArray *)shortcutSandboxes;
-(void)_didTapShortutButton:(id)arg1 ;
-(void)setShortcutButtons:(NSArray *)arg1 ;
-(void)_setSandbox:(id)arg1 ;
-(void)_addRecentSandbox:(id)arg1 ;
-(void)_saveSandBox:(id)arg1 ;
-(void)_configureShortcuts;
-(NSArray *)shortcutButtons;
-(void)setShortcutSandboxes:(NSArray *)arg1 ;
-(void)setDelegate:(id<FBMMQTTSandBoxSettingsCallback>)arg1 ;
-(id)init;
-(id<FBMMQTTSandBoxSettingsCallback>)delegate;
-(void)viewDidLayoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

