/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

