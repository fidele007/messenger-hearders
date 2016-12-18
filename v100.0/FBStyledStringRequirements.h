/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBStyledStringRequirements : FBValueObject <NSCopying> {

	NSString* _token;
	NSString* _replacement;
	NSDictionary* _attributes;

}

@property (nonatomic,copy,readonly) NSString * token;                       //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacement;                 //@synthesize replacement=_replacement - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)initWithToken:(id)arg1 replacement:(id)arg2 attributes:(id)arg3 ;
-(NSDictionary *)attributes;
-(NSString *)token;
-(NSString *)replacement;
@end

