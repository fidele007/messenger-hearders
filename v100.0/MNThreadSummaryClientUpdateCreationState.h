/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, FBMThreadKey, MNThreadReadMark;

@interface MNThreadSummaryClientUpdateCreationState : FBValueObject <NSCopying> {

	NSSet* _allowedUpdateTypes;
	FBMThreadKey* _threadKey;
	MNThreadReadMark* _implictReadMark;
	MNThreadReadMark* _explictReadMark;

}

@property (nonatomic,copy,readonly) NSSet * allowedUpdateTypes;                      //@synthesize allowedUpdateTypes=_allowedUpdateTypes - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                        //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) MNThreadReadMark * implictReadMark;              //@synthesize implictReadMark=_implictReadMark - In the implementation block
@property (nonatomic,copy,readonly) MNThreadReadMark * explictReadMark;              //@synthesize explictReadMark=_explictReadMark - In the implementation block
-(id)initWithAllowedUpdateTypes:(id)arg1 threadKey:(id)arg2 implictReadMark:(id)arg3 explictReadMark:(id)arg4 ;
-(NSSet *)allowedUpdateTypes;
-(MNThreadReadMark *)implictReadMark;
-(MNThreadReadMark *)explictReadMark;
-(FBMThreadKey *)threadKey;
@end

