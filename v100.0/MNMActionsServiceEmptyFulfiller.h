/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMActionsServiceFulfilling.h>

@interface MNMActionsServiceEmptyFulfiller : NSObject <MNMActionsServiceFulfilling>
-(void)addActions:(id)arg1 forThreadKey:(id)arg2 overwriteExisting:(BOOL)arg3 ;
-(void)deleteAction:(id)arg1 ;
-(void)actionsForThreadKey:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)actionsSnapshotForThreadKey:(id)arg1 ;
-(void)markAllActionsExpiredForThreadKey:(id)arg1 ;
-(void)markActionExpired:(id)arg1 ;
@end

