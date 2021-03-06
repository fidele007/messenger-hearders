/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableDictionary, NSDictionary;

@interface FBQuickPromotionFiltersHelper : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _filterOverrideMap;
	NSDictionary* _filterKeyClassMap;

}

@property (nonatomic,copy) NSDictionary * filterKeyClassMap;              //@synthesize filterKeyClassMap=_filterKeyClassMap - In the implementation block
+(id)_registeredFilters;
-(id)filtersFromJSON:(id)arg1 withPromotion:(id)arg2 ;
-(id)_filterFromJson:(id)arg1 withPromotion:(id)arg2 ;
-(BOOL)checkFilter:(id)arg1 withContext:(id)arg2 withDebugInfo:(id*)arg3 ;
-(int)filterOverrideForFilterTypeKey:(id)arg1 ;
-(id)overrideStringWithEnum:(int)arg1 ;
-(BOOL)checkAllFiltersForPromotion:(id)arg1 withContext:(id)arg2 withDebugInfo:(id*)arg3 ;
-(void)resetFilterOverrides;
-(void)setFilterOverrideForFilterTypeKey:(id)arg1 override:(int)arg2 ;
-(NSDictionary *)filterKeyClassMap;
-(void)setFilterKeyClassMap:(NSDictionary *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

