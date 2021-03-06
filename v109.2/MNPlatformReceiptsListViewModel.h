/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNPlatformReceiptsListViewModel : FBValueObject <NSCopying> {

	NSArray* _receiptsArray;
	long long _totalReceiptsCount;

}

@property (nonatomic,copy,readonly) NSArray * receiptsArray;              //@synthesize receiptsArray=_receiptsArray - In the implementation block
@property (nonatomic,readonly) long long totalReceiptsCount;              //@synthesize totalReceiptsCount=_totalReceiptsCount - In the implementation block
-(NSArray *)receiptsArray;
-(id)initWithReceiptsArray:(id)arg1 totalReceiptsCount:(long long)arg2 ;
-(long long)totalReceiptsCount;
@end

