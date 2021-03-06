/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol FBMobileConfigAdvancedSettingsViewControllerDelegate;
@class NSString;

@interface FBMobileConfigAdvancedSettingsViewController : UITableViewController {

	NSString* _sessionStatus;
	NSString* _sessionlessStatus;
	id<FBMobileConfigAdvancedSettingsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMobileConfigAdvancedSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSessionStatus:(id)arg1 sessionlessStatus:(id)arg2 ;
-(void)setDelegate:(id<FBMobileConfigAdvancedSettingsViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBMobileConfigAdvancedSettingsViewControllerDelegate>)delegate;
@end

