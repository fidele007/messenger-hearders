/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchSuggestionProtocol;
@class FBUserSession, NSString, FBSearchTypeaheadActivityListenerAnnouncer;

@interface FBSearchSuggestionTableViewCellCompositeModel : NSObject {

	BOOL _isLastCellInSection;
	FBUserSession* _session;
	id<FBSearchSuggestionProtocol> _searchSuggestion;
	unsigned long long _modelIndex;
	NSString* _queryString;
	FBSearchTypeaheadActivityListenerAnnouncer* _typeaheadActivityAnnouncer;

}

@property (nonatomic,readonly) FBUserSession * session;                                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BOOL isLastCellInSection;                                                             //@synthesize isLastCellInSection=_isLastCellInSection - In the implementation block
@property (nonatomic,readonly) id<FBSearchSuggestionProtocol> searchSuggestion;                                      //@synthesize searchSuggestion=_searchSuggestion - In the implementation block
@property (nonatomic,readonly) unsigned long long modelIndex;                                                        //@synthesize modelIndex=_modelIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;                                                          //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,readonly) FBSearchTypeaheadActivityListenerAnnouncer * typeaheadActivityAnnouncer;              //@synthesize typeaheadActivityAnnouncer=_typeaheadActivityAnnouncer - In the implementation block
-(FBSearchTypeaheadActivityListenerAnnouncer *)typeaheadActivityAnnouncer;
-(id)initWithSession:(id)arg1 isLastCellInSection:(BOOL)arg2 searchSuggestion:(id)arg3 modelIndex:(unsigned long long)arg4 queryString:(id)arg5 typeaheadActivityAnnouncer:(id)arg6 ;
-(BOOL)isLastCellInSection;
-(id<FBSearchSuggestionProtocol>)searchSuggestion;
-(unsigned long long)modelIndex;
-(NSString *)queryString;
-(FBUserSession *)session;
@end

