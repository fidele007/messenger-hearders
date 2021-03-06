/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNDataConsistencySnapshotDataset;

@interface MNDataConsistencySampleSet : FBValueObject <NSCopying> {

	MNDataConsistencySnapshotDataset* _clientSnapshot;
	MNDataConsistencySnapshotDataset* _serverSnapshot;

}

@property (nonatomic,copy,readonly) MNDataConsistencySnapshotDataset * clientSnapshot;              //@synthesize clientSnapshot=_clientSnapshot - In the implementation block
@property (nonatomic,copy,readonly) MNDataConsistencySnapshotDataset * serverSnapshot;              //@synthesize serverSnapshot=_serverSnapshot - In the implementation block
-(id)initWithClientSnapshot:(id)arg1 serverSnapshot:(id)arg2 ;
-(MNDataConsistencySnapshotDataset *)clientSnapshot;
-(MNDataConsistencySnapshotDataset *)serverSnapshot;
@end

