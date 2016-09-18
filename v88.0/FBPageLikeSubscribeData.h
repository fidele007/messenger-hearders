/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBPageLikeSubscribeData : FBGraphQLInput {

	NSString* _clientSubscriptionId;
	NSString* _pageId;
	NSString* _actorId;

}

@property (nonatomic,copy) NSString * clientSubscriptionId;              //@synthesize clientSubscriptionId=_clientSubscriptionId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                            //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                           //@synthesize actorId=_actorId - In the implementation block
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(void)setClientSubscriptionId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientSubscriptionId;
@end
