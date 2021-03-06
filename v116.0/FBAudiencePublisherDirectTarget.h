/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBAudiencePublisherDirectTarget : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _group_groupGraphQLID;
	NSString* _groupPeople_groupName;
	NSArray* _groupPeople_peopleGraphQLIDs;
	NSString* _individualPerson_shortName;
	NSString* _individualPerson_graphQLID;

}
+(id)groupPeopleWithGroupName:(id)arg1 peopleGraphQLIDs:(id)arg2 ;
+(id)groupWithGroupGraphQLID:(id)arg1 ;
+(id)individualPersonWithShortName:(id)arg1 graphQLID:(id)arg2 ;
-(void)matchGroup:(/*^block*/id)arg1 groupPeople:(/*^block*/id)arg2 individualPerson:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

