/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerGroupCommerceLocalMarketInfo : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	BOOL _shouldPostToMarketplace;
	NSString* _marketplaceID;
	NSString* _originatedGroupID;

}

@property (nonatomic,copy,readonly) NSString * marketplaceID;                  //@synthesize marketplaceID=_marketplaceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatedGroupID;              //@synthesize originatedGroupID=_originatedGroupID - In the implementation block
@property (nonatomic,readonly) BOOL shouldPostToMarketplace;                   //@synthesize shouldPostToMarketplace=_shouldPostToMarketplace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMarketplaceID:(id)arg1 originatedGroupID:(id)arg2 shouldPostToMarketplace:(BOOL)arg3 ;
-(NSString *)marketplaceID;
-(NSString *)originatedGroupID;
-(BOOL)shouldPostToMarketplace;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shallowCopy;
@end
