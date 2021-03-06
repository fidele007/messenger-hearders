/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBLocationManagerInfoLocation, NSArray;

@interface FBMessengerViewerLiveLocationUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	FBLocationManagerInfoLocation* _location;
	NSArray* _threadIds;

}

@property (nonatomic,copy) NSString * clientMutationId;                           //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                    //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) FBLocationManagerInfoLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSArray * threadIds;                                   //@synthesize threadIds=_threadIds - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setThreadIds:(NSArray *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)threadIds;
-(FBLocationManagerInfoLocation *)location;
-(void)setLocation:(FBLocationManagerInfoLocation *)arg1 ;
@end

