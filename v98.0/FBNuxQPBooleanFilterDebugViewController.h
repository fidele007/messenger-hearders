/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSMutableArray;

@interface FBNuxQPBooleanFilterDebugViewController : UITableViewController {

	NSMutableArray* _cellsInfo;

}
-(BOOL)fb_showNavBarSearchField;
-(void)_createCellsInfoFromClauseDebugInfo:(id)arg1 indentationLevel:(long long)arg2 ;
-(id)_createCellInfoForClauseDebugInfo:(id)arg1 indentationLevel:(long long)arg2 ;
-(id)_createCellInfoForFilterDebugInfo:(id)arg1 indentationLevel:(long long)arg2 ;
-(double)_heightForDetailText:(id)arg1 fontSize:(double)arg2 ;
-(id)initWithBooleanFilterDebugInfo:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

