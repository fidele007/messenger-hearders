/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

