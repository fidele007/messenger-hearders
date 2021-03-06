/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MNPlatformReceiptsListViewModel;

@interface MNPlatformThreadDetailsViewModel : FBValueObject <NSCopying> {

	NSArray* _ctasArray;
	MNPlatformReceiptsListViewModel* _receipts;

}

@property (nonatomic,copy,readonly) NSArray * ctasArray;                                     //@synthesize ctasArray=_ctasArray - In the implementation block
@property (nonatomic,copy,readonly) MNPlatformReceiptsListViewModel * receipts;              //@synthesize receipts=_receipts - In the implementation block
-(NSArray *)ctasArray;
-(MNPlatformReceiptsListViewModel *)receipts;
-(id)initWithCtasArray:(id)arg1 receipts:(id)arg2 ;
@end

