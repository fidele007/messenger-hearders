/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSimpleSearchServerSuggestionCache, NSPointerArray;

@interface FBSimpleSearchCacheServiceEntry : NSObject {

	FBSimpleSearchServerSuggestionCache* _cache;
	NSPointerArray* _references;

}

@property (nonatomic,readonly) FBSimpleSearchServerSuggestionCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSPointerArray * references;                              //@synthesize references=_references - In the implementation block
-(id)initWithCache:(id)arg1 references:(id)arg2 ;
-(FBSimpleSearchServerSuggestionCache *)cache;
-(NSPointerArray *)references;
@end

