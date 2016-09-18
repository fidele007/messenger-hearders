/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSMutableArray, FBBugReportCoordinator, NSString;

@interface FBBugReportCategoryDataSource : NSObject <UITableViewDataSource> {

	NSMutableArray* _categories;
	FBBugReportCoordinator* _coordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoordinator:(id)arg1 ;
-(void)setupCategoryList;
-(id)categoryDescriptionForRow:(long long)arg1 ;
-(id)categoryIDForRow:(long long)arg1 ;
-(id)categoryForRow:(long long)arg1 ;
-(unsigned long long)numCategories;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

