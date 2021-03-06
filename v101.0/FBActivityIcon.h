/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBActivityIcon : FBValueObject <NSCopying, NSCoding> {

	NSString* _largeIconUri;
	NSString* _smallIconUri;
	NSString* _graphqlId;
	NSString* _legacyApiId;

}

@property (nonatomic,copy,readonly) NSString * largeIconUri;              //@synthesize largeIconUri=_largeIconUri - In the implementation block
@property (nonatomic,copy,readonly) NSString * smallIconUri;              //@synthesize smallIconUri=_smallIconUri - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphqlId;                 //@synthesize graphqlId=_graphqlId - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyApiId;               //@synthesize legacyApiId=_legacyApiId - In the implementation block
-(id)initWithLargeIconUri:(id)arg1 smallIconUri:(id)arg2 graphqlId:(id)arg3 legacyApiId:(id)arg4 ;
-(NSString *)largeIconUri;
-(NSString *)smallIconUri;
-(NSString *)graphqlId;
-(NSString *)legacyApiId;
@end

