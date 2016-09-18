/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
