/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class CKTransactionalComponentDataSourceChangeset;

@interface FBImmutableChangesetList : NSObject {

	CKTransactionalComponentDataSourceChangeset* _headValue;
	FBImmutableChangesetList* _tail;

}

@property (nonatomic,readonly) CKTransactionalComponentDataSourceChangeset * headValue;              //@synthesize headValue=_headValue - In the implementation block
@property (nonatomic,copy,readonly) FBImmutableChangesetList * tail;                                 //@synthesize tail=_tail - In the implementation block
-(id)initWithHeadValue:(id)arg1 tail:(id)arg2 ;
-(CKTransactionalComponentDataSourceChangeset *)headValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBImmutableChangesetList *)tail;
@end
