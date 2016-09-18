/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBCommentPublishTarget : FBValueObject <NSCopying> {

	NSString* _graphQLID;
	NSString* _legacyAPIPostID;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                    //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyAPIPostID;              //@synthesize legacyAPIPostID=_legacyAPIPostID - In the implementation block
-(NSString *)graphQLID;
-(id)initWithGraphQLID:(id)arg1 legacyAPIPostID:(id)arg2 ;
-(NSString *)legacyAPIPostID;
@end
