/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNViewModelElementKey, MNViewModelUpdateType;

@interface MNSingleViewModelLoadingRequest : NSObject <NSCopying> {

	MNViewModelElementKey* _key;
	MNViewModelUpdateType* _updateType;
	/*^block*/id _successBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _failureBlock;

}

@property (nonatomic,copy,readonly) MNViewModelElementKey * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) MNViewModelUpdateType * updateType;              //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) id successBlock;                                      //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,readonly) id progressBlock;                                     //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,readonly) id failureBlock;                                      //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)successBlock;
-(id)initWithKey:(id)arg1 updateType:(id)arg2 successBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)description;
-(MNViewModelElementKey *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)progressBlock;
-(MNViewModelUpdateType *)updateType;
-(id)failureBlock;
@end
