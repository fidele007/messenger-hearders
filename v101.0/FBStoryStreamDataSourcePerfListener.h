/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStoryStreamDataSourcePerfListener <NSObject>
@required
-(void)dataSource:(id)arg1 didInsertEdges:(unsigned long long)arg2 fromSource:(id)arg3;
-(void)dataSource:(id)arg1 willEnqueueChangesetToPreparationQueueFromSource:(id)arg2;
-(void)dataSource:(id)arg1 didEnqueueChangesetToPreparationQueueFromSource:(id)arg2 batchID:(unsigned long long)arg3;

@end

