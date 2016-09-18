/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTableViewMutating <NSObject>
@required
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(id)dataSourceForIndexPath:(id)arg1 translatedIndexPath:(id*)arg2;
-(id)rootTableView;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(id)cellForRowAtIndexPath:(id)arg1 forDataSource:(id)arg2;
-(id)absoluteIndexPathFor:(id)arg1 fromDataSource:(id)arg2;
-(id)indexPathsForVisibleRowsInDataSource:(id)arg1;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 forDataSource:(id)arg3;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 forDataSource:(id)arg3;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 forDataSource:(id)arg3;
-(CGRect*)rectForRowAtIndexPath:(id)arg1 forDataSource:(id)arg2;
-(unsigned long long)numberOfRowsInSection:(unsigned long long)arg1 forDataSource:(id)arg2;
-(void)reloadData;
-(void)beginUpdates;
-(void)endUpdates;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;

@end
