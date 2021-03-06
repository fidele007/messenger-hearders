/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBSerpContext;

@interface FBSearchResultsDownloaderConfig : FBValueObject <NSCopying> {

	BOOL _needDetailedPhotoInfo;
	BOOL _exactMatch;
	BOOL _fetchFilters;
	BOOL _fetchDebugInfo;
	BOOL _isAutoCorrected;
	BOOL _isOptionalized;
	NSString* _callSite;
	NSString* _semantic;
	NSArray* _filters;
	long long _filtersFetchPolicyType;
	NSArray* _supportedExperiences;
	NSArray* _supportedRoles;
	NSArray* _moduleSizes;
	unsigned long long _resultType;
	unsigned long long _experienceType;
	NSString* _typeaheadSessionID;
	NSString* _clientResultsSessionID;
	NSString* _secondRequestToken;
	NSArray* _preloadedEntityIds;
	NSArray* _preloadedStoryIds;
	long long _videoOptimizationLevel;
	FBSerpContext* _serpContext;
	Class _requestClass;

}

@property (nonatomic,copy,readonly) NSString * callSite;                            //@synthesize callSite=_callSite - In the implementation block
@property (nonatomic,copy,readonly) NSString * semantic;                            //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filters;                              //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) long long filtersFetchPolicyType;                    //@synthesize filtersFetchPolicyType=_filtersFetchPolicyType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedExperiences;                 //@synthesize supportedExperiences=_supportedExperiences - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedRoles;                       //@synthesize supportedRoles=_supportedRoles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moduleSizes;                          //@synthesize moduleSizes=_moduleSizes - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                       //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) unsigned long long experienceType;                   //@synthesize experienceType=_experienceType - In the implementation block
@property (nonatomic,readonly) BOOL needDetailedPhotoInfo;                          //@synthesize needDetailedPhotoInfo=_needDetailedPhotoInfo - In the implementation block
@property (nonatomic,readonly) BOOL exactMatch;                                     //@synthesize exactMatch=_exactMatch - In the implementation block
@property (nonatomic,readonly) BOOL fetchFilters;                                   //@synthesize fetchFilters=_fetchFilters - In the implementation block
@property (nonatomic,readonly) BOOL fetchDebugInfo;                                 //@synthesize fetchDebugInfo=_fetchDebugInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID;                  //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientResultsSessionID;              //@synthesize clientResultsSessionID=_clientResultsSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondRequestToken;                  //@synthesize secondRequestToken=_secondRequestToken - In the implementation block
@property (nonatomic,readonly) BOOL isAutoCorrected;                                //@synthesize isAutoCorrected=_isAutoCorrected - In the implementation block
@property (nonatomic,readonly) BOOL isOptionalized;                                 //@synthesize isOptionalized=_isOptionalized - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preloadedEntityIds;                   //@synthesize preloadedEntityIds=_preloadedEntityIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preloadedStoryIds;                    //@synthesize preloadedStoryIds=_preloadedStoryIds - In the implementation block
@property (nonatomic,readonly) long long videoOptimizationLevel;                    //@synthesize videoOptimizationLevel=_videoOptimizationLevel - In the implementation block
@property (nonatomic,copy,readonly) FBSerpContext * serpContext;                    //@synthesize serpContext=_serpContext - In the implementation block
@property (nonatomic,readonly) Class requestClass;                                  //@synthesize requestClass=_requestClass - In the implementation block
-(BOOL)exactMatch;
-(NSArray *)supportedRoles;
-(BOOL)fetchFilters;
-(FBSerpContext *)serpContext;
-(NSString *)callSite;
-(NSString *)clientResultsSessionID;
-(NSArray *)supportedExperiences;
-(unsigned long long)experienceType;
-(NSArray *)moduleSizes;
-(NSArray *)preloadedEntityIds;
-(NSArray *)preloadedStoryIds;
-(NSString *)secondRequestToken;
-(BOOL)isAutoCorrected;
-(BOOL)isOptionalized;
-(long long)videoOptimizationLevel;
-(BOOL)fetchDebugInfo;
-(id)initWithCallSite:(id)arg1 semantic:(id)arg2 filters:(id)arg3 filtersFetchPolicyType:(long long)arg4 supportedExperiences:(id)arg5 supportedRoles:(id)arg6 moduleSizes:(id)arg7 resultType:(unsigned long long)arg8 experienceType:(unsigned long long)arg9 needDetailedPhotoInfo:(BOOL)arg10 exactMatch:(BOOL)arg11 fetchFilters:(BOOL)arg12 fetchDebugInfo:(BOOL)arg13 typeaheadSessionID:(id)arg14 clientResultsSessionID:(id)arg15 secondRequestToken:(id)arg16 isAutoCorrected:(BOOL)arg17 isOptionalized:(BOOL)arg18 preloadedEntityIds:(id)arg19 preloadedStoryIds:(id)arg20 videoOptimizationLevel:(long long)arg21 serpContext:(id)arg22 requestClass:(Class)arg23 ;
-(long long)filtersFetchPolicyType;
-(BOOL)needDetailedPhotoInfo;
-(NSString *)typeaheadSessionID;
-(NSArray *)filters;
-(unsigned long long)resultType;
-(NSString *)semantic;
-(Class)requestClass;
@end

