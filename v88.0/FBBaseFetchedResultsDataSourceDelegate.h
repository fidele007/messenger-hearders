/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBaseFetchedResultsDataSourceDelegate <NSObject>
@optional
-(unsigned long long)fetchedResultsDataSource:(id)arg1 numberOfRowsForNumberOfObjects:(unsigned long long)arg2;
-(void)fetchedResultsDataSourceDidUpdateTableView:(id)arg1;
-(void)fetchedResultsDataSource:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
-(BOOL)fetchedResultsDataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;
-(void)fetchedResultsDataSourceDidFetch:(id)arg1;

@required
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end

