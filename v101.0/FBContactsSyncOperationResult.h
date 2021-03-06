/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBContactsFetchContext;

@interface FBContactsSyncOperationResult : FBValueObject <NSCopying> {

	BOOL _shouldFetchMoreContacts;
	NSArray* _syncEvents;
	FBContactsFetchContext* _context;

}

@property (nonatomic,copy,readonly) NSArray * syncEvents;                          //@synthesize syncEvents=_syncEvents - In the implementation block
@property (nonatomic,copy,readonly) FBContactsFetchContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchMoreContacts;                       //@synthesize shouldFetchMoreContacts=_shouldFetchMoreContacts - In the implementation block
-(id)initWithSyncEvents:(id)arg1 context:(id)arg2 shouldFetchMoreContacts:(BOOL)arg3 ;
-(BOOL)shouldFetchMoreContacts;
-(FBContactsFetchContext *)context;
-(NSArray *)syncEvents;
@end

