/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemGraphSearchQuery, NSString;

@interface FBSearchResultsQueryRewriteModel : FBValueObject <NSCopying> {

	BOOL _isAutoCorrectable;
	BOOL _isOptionalizable;
	BOOL _isEntityRequery;
	FBMemGraphSearchQuery* _currentQuery;
	FBMemGraphSearchQuery* _suggestedQuery;
	NSString* _spellerConfidence;
	NSString* _secondRequestToken;

}

@property (nonatomic,copy,readonly) FBMemGraphSearchQuery * currentQuery;                //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,copy,readonly) FBMemGraphSearchQuery * suggestedQuery;              //@synthesize suggestedQuery=_suggestedQuery - In the implementation block
@property (nonatomic,copy,readonly) NSString * spellerConfidence;                        //@synthesize spellerConfidence=_spellerConfidence - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondRequestToken;                       //@synthesize secondRequestToken=_secondRequestToken - In the implementation block
@property (nonatomic,readonly) BOOL isAutoCorrectable;                                   //@synthesize isAutoCorrectable=_isAutoCorrectable - In the implementation block
@property (nonatomic,readonly) BOOL isOptionalizable;                                    //@synthesize isOptionalizable=_isOptionalizable - In the implementation block
@property (nonatomic,readonly) BOOL isEntityRequery;                                     //@synthesize isEntityRequery=_isEntityRequery - In the implementation block
-(BOOL)_isValidSpellingCorrectionModel:(id)arg1 ;
-(id)asSpellingCorrectionModel;
-(NSString *)secondRequestToken;
-(id)initWithCurrentQuery:(id)arg1 suggestedQuery:(id)arg2 spellerConfidence:(id)arg3 secondRequestToken:(id)arg4 isAutoCorrectable:(BOOL)arg5 isOptionalizable:(BOOL)arg6 isEntityRequery:(BOOL)arg7 ;
-(NSString *)spellerConfidence;
-(BOOL)isAutoCorrectable;
-(BOOL)isOptionalizable;
-(BOOL)isEntityRequery;
-(FBMemGraphSearchQuery *)suggestedQuery;
-(FBMemGraphSearchQuery *)currentQuery;
@end

