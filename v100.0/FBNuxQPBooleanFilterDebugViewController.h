/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

