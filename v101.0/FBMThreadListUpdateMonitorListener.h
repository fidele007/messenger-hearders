/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMThreadListUpdateMonitorListener <NSObject>
@required
-(void)threadListNeedsReload;
-(void)threadListDidChangeRowsWithLocalThreadKeys:(id)arg1;
-(void)threadListWillUpdateThreadWithLocalThreadKey:(id)arg1 action:(long long)arg2;
-(void)threadListFailedToUpdateThreadWithLocalThreadKey:(id)arg1 action:(long long)arg2 error:(id)arg3;
-(void)threadListWillUpdateBatchWithLocalThreadKeys:(id)arg1 action:(long long)arg2;
-(void)threadListFailedToUpdateBatchWithLocalThreadKeys:(id)arg1 action:(long long)arg2 error:(id)arg3;
-(void)threadListWillDeleteAllThreads:(long long)arg1;
-(void)threadListFailedToDeleteAllThreads:(long long)arg1 error:(id)arg2;
-(void)threadListFetchWillStartWithFetchType:(unsigned long long)arg1;
-(void)threadListFetchDidSucceedWithType:(unsigned long long)arg1;
-(void)threadListFetchDidFailWithType:(unsigned long long)arg1 error:(id)arg2;
-(void)threadListAdditionalInformationUpdated;

@end

