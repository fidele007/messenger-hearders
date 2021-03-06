/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStreamAnalytics, FBGraphQLConnectionInsertionLocation;

@interface FBStreamResponseHandlerBuilderParameters : FBValueObject <NSCopying> {

	NSString* _graphQLRequestTargetID;
	FBStreamAnalytics* _streamAnalytics;
	unsigned long long _loadType;
	FBGraphQLConnectionInsertionLocation* _insertionLocation;

}

@property (nonatomic,copy,readonly) NSString * graphQLRequestTargetID;                                     //@synthesize graphQLRequestTargetID=_graphQLRequestTargetID - In the implementation block
@property (nonatomic,copy,readonly) FBStreamAnalytics * streamAnalytics;                                   //@synthesize streamAnalytics=_streamAnalytics - In the implementation block
@property (nonatomic,readonly) unsigned long long loadType;                                                //@synthesize loadType=_loadType - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionInsertionLocation * insertionLocation;              //@synthesize insertionLocation=_insertionLocation - In the implementation block
-(NSString *)graphQLRequestTargetID;
-(FBGraphQLConnectionInsertionLocation *)insertionLocation;
-(FBStreamAnalytics *)streamAnalytics;
-(id)initWithGraphQLRequestTargetID:(id)arg1 streamAnalytics:(id)arg2 loadType:(unsigned long long)arg3 insertionLocation:(id)arg4 ;
-(unsigned long long)loadType;
@end

