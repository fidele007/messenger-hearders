/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPublishedTaggedUserBuilder : NSObject {

	NSString* _graphQLID;
	NSString* _graphQLTypeName;
	NSString* _name;

}
+(id)publishedTaggedUser;
+(id)publishedTaggedUserFromExistingPublishedTaggedUser:(id)arg1 ;
-(id)withName:(id)arg1 ;
-(id)withGraphQLID:(id)arg1 ;
-(id)withGraphQLTypeName:(id)arg1 ;
-(id)build;
@end

