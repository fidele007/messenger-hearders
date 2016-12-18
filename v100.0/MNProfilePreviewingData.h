/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadKey, NSArray, FBStringWithRedactedDescription;

@interface MNProfilePreviewingData : FBValueObject <NSCopying> {

	FBMThreadKey* _threadKey;
	NSArray* _profileImageModelWrapper;
	FBStringWithRedactedDescription* _threadName;

}

@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                                  //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * profileImageModelWrapper;                        //@synthesize profileImageModelWrapper=_profileImageModelWrapper - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * threadName;              //@synthesize threadName=_threadName - In the implementation block
-(id)initWithThreadKey:(id)arg1 profileImageModelWrapper:(id)arg2 threadName:(id)arg3 ;
-(NSArray *)profileImageModelWrapper;
-(FBStringWithRedactedDescription *)threadName;
-(FBMThreadKey *)threadKey;
@end

