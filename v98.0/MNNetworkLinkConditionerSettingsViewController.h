/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MNNetworkLinkConditionerSettingsSliderCell, NSString;

@interface MNNetworkLinkConditionerSettingsViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	MNNetworkLinkConditionerSettingsSliderCell* _upstreamCell;
	MNNetworkLinkConditionerSettingsSliderCell* _downstreamCell;
	MNNetworkLinkConditionerSettingsSliderCell* _latencyCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sliderChanges:(id)arg1 ;
-(id)_prepareOnOffSwitchCell;
-(void)_changeOption:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
@end
