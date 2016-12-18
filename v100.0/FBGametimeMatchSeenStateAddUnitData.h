/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBGametimeMatchSeenStateAddUnitData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageId;
	NSString* _unitId;
	NSString* _surface;
	NSNumber* _latestTimestamp;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                        //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * unitId;                        //@synthesize unitId=_unitId - In the implementation block
@property (nonatomic,copy) NSString * surface;                       //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSNumber * latestTimestamp;               //@synthesize latestTimestamp=_latestTimestamp - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(void)setUnitId:(NSString *)arg1 ;
-(NSString *)unitId;
-(NSString *)clientMutationId;
-(NSString *)pageId;
-(void)setSurface:(NSString *)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)latestTimestamp;
-(void)setLatestTimestamp:(NSNumber *)arg1 ;
-(NSString *)surface;
@end

