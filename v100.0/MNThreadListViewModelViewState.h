/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadClientUpdate, MNThreadListViewModelLastClientUpdateWithError, MNSimpleResult;

@interface MNThreadListViewModelViewState : FBValueObject <NSCopying> {

	BOOL _isPerformingSnapshot;
	MNThreadClientUpdate* _lastAttemptedClientUpdate;
	MNThreadListViewModelLastClientUpdateWithError* _lastFailedClientUpdateWithError;
	MNSimpleResult* _lastSnapshotResult;

}

@property (nonatomic,copy,readonly) MNThreadClientUpdate * lastAttemptedClientUpdate;                                              //@synthesize lastAttemptedClientUpdate=_lastAttemptedClientUpdate - In the implementation block
@property (nonatomic,copy,readonly) MNThreadListViewModelLastClientUpdateWithError * lastFailedClientUpdateWithError;              //@synthesize lastFailedClientUpdateWithError=_lastFailedClientUpdateWithError - In the implementation block
@property (nonatomic,copy,readonly) MNSimpleResult * lastSnapshotResult;                                                           //@synthesize lastSnapshotResult=_lastSnapshotResult - In the implementation block
@property (nonatomic,readonly) BOOL isPerformingSnapshot;                                                                          //@synthesize isPerformingSnapshot=_isPerformingSnapshot - In the implementation block
-(MNThreadClientUpdate *)lastAttemptedClientUpdate;
-(BOOL)isPerformingSnapshot;
-(MNThreadListViewModelLastClientUpdateWithError *)lastFailedClientUpdateWithError;
-(MNSimpleResult *)lastSnapshotResult;
-(id)initWithLastAttemptedClientUpdate:(id)arg1 lastFailedClientUpdateWithError:(id)arg2 lastSnapshotResult:(id)arg3 isPerformingSnapshot:(BOOL)arg4 ;
@end

