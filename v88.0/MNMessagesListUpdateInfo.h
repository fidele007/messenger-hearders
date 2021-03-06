/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagesListUpdateInfo : FBValueObject <NSCopying> {

	BOOL _initialUpdate;
	BOOL _containsTooManyUpdates;
	BOOL _selfSendingHotLikeInserted;
	BOOL _threadMontageInsertion;
	BOOL _containsPopUpMontageUpdate;
	unsigned long long _detailsExpandedIndex;
	unsigned long long _detailsCollapsedIndex;
	long long _insertedLastRowType;
	unsigned long long _loadingUpdate;

}

@property (nonatomic,readonly) BOOL initialUpdate;                                    //@synthesize initialUpdate=_initialUpdate - In the implementation block
@property (nonatomic,readonly) BOOL containsTooManyUpdates;                           //@synthesize containsTooManyUpdates=_containsTooManyUpdates - In the implementation block
@property (nonatomic,readonly) BOOL selfSendingHotLikeInserted;                       //@synthesize selfSendingHotLikeInserted=_selfSendingHotLikeInserted - In the implementation block
@property (nonatomic,readonly) BOOL threadMontageInsertion;                           //@synthesize threadMontageInsertion=_threadMontageInsertion - In the implementation block
@property (nonatomic,readonly) BOOL containsPopUpMontageUpdate;                       //@synthesize containsPopUpMontageUpdate=_containsPopUpMontageUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long detailsExpandedIndex;               //@synthesize detailsExpandedIndex=_detailsExpandedIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long detailsCollapsedIndex;              //@synthesize detailsCollapsedIndex=_detailsCollapsedIndex - In the implementation block
@property (nonatomic,readonly) long long insertedLastRowType;                         //@synthesize insertedLastRowType=_insertedLastRowType - In the implementation block
@property (nonatomic,readonly) unsigned long long loadingUpdate;                      //@synthesize loadingUpdate=_loadingUpdate - In the implementation block
-(BOOL)initialUpdate;
-(BOOL)selfSendingHotLikeInserted;
-(long long)insertedLastRowType;
-(id)initWithInitialUpdate:(BOOL)arg1 containsTooManyUpdates:(BOOL)arg2 selfSendingHotLikeInserted:(BOOL)arg3 threadMontageInsertion:(BOOL)arg4 containsPopUpMontageUpdate:(BOOL)arg5 detailsExpandedIndex:(unsigned long long)arg6 detailsCollapsedIndex:(unsigned long long)arg7 insertedLastRowType:(long long)arg8 loadingUpdate:(unsigned long long)arg9 ;
-(BOOL)containsTooManyUpdates;
-(BOOL)threadMontageInsertion;
-(BOOL)containsPopUpMontageUpdate;
-(unsigned long long)detailsExpandedIndex;
-(unsigned long long)detailsCollapsedIndex;
-(unsigned long long)loadingUpdate;
@end

