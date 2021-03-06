/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBComponentTableViewDataSourceEventListener.h>

@class NSString;

@interface FBComponentTableViewDataSourceEventListenerAnnouncer : FBAnnouncerBase <FBComponentTableViewDataSourceEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSourceWillBeginUpdates:(id)arg1 ;
-(void)dataSourceWillEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)dataSource:(id)arg1 willEnqueueChangeset:(Changeset*)arg2 ;
-(void)dataSource:(id)arg1 didEnqueueChangeset:(Changeset*)arg2 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)dataSourceWillReloadRowHeights:(id)arg1 ;
-(void)dataSourceDidReloadRowHeights:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

