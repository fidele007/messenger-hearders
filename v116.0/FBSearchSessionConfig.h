/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSearchSessionConfig : FBValueObject <NSCopying> {

	BOOL _isPreviewing;
	BOOL _disableSearchBox;
	BOOL _enableDynamicTabs;
	BOOL _isConvertedFromEntitySuggestion;
	unsigned long long _searchEntryPointType;
	unsigned long long _defaultSelectedTabIndex;
	unsigned long long _suggestionType;
	NSString* _source;
	NSString* _entryPointSurface;
	NSString* _entryPointAction;

}

@property (nonatomic,readonly) unsigned long long searchEntryPointType;                 //@synthesize searchEntryPointType=_searchEntryPointType - In the implementation block
@property (nonatomic,readonly) BOOL isPreviewing;                                       //@synthesize isPreviewing=_isPreviewing - In the implementation block
@property (nonatomic,readonly) BOOL disableSearchBox;                                   //@synthesize disableSearchBox=_disableSearchBox - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultSelectedTabIndex;              //@synthesize defaultSelectedTabIndex=_defaultSelectedTabIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long suggestionType;                       //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                                  //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPointSurface;                       //@synthesize entryPointSurface=_entryPointSurface - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPointAction;                        //@synthesize entryPointAction=_entryPointAction - In the implementation block
@property (nonatomic,readonly) BOOL enableDynamicTabs;                                  //@synthesize enableDynamicTabs=_enableDynamicTabs - In the implementation block
@property (nonatomic,readonly) BOOL isConvertedFromEntitySuggestion;                    //@synthesize isConvertedFromEntitySuggestion=_isConvertedFromEntitySuggestion - In the implementation block
-(BOOL)isConvertedFromEntitySuggestion;
-(id)initWithSearchEntryPointType:(unsigned long long)arg1 isPreviewing:(BOOL)arg2 disableSearchBox:(BOOL)arg3 defaultSelectedTabIndex:(unsigned long long)arg4 suggestionType:(unsigned long long)arg5 source:(id)arg6 entryPointSurface:(id)arg7 entryPointAction:(id)arg8 enableDynamicTabs:(BOOL)arg9 isConvertedFromEntitySuggestion:(BOOL)arg10 ;
-(unsigned long long)searchEntryPointType;
-(BOOL)disableSearchBox;
-(unsigned long long)defaultSelectedTabIndex;
-(NSString *)entryPointSurface;
-(NSString *)entryPointAction;
-(BOOL)enableDynamicTabs;
-(BOOL)isPreviewing;
-(NSString *)source;
-(unsigned long long)suggestionType;
@end

