/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBUserSession, NSString;

@interface FBFacecastVideoSubscriptionRequest : FBNetworkerRequest {

	BOOL _shouldSubscribe;
	FBUserSession* _session;
	NSString* _videoID;
	NSString* _videoOwnerID;
	NSString* _surface;

}

@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * videoID;                     //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy) NSString * videoOwnerID;                //@synthesize videoOwnerID=_videoOwnerID - In the implementation block
@property (nonatomic,copy) NSString * surface;                     //@synthesize surface=_surface - In the implementation block
@property (assign,nonatomic) BOOL shouldSubscribe;                 //@synthesize shouldSubscribe=_shouldSubscribe - In the implementation block
+(id)subscriptionStatusOn;
+(id)subscriptionStatusOff;
-(NSString *)videoID;
-(id)networkRequest;
-(void)setSurface:(NSString *)arg1 ;
-(void)setVideoID:(NSString *)arg1 ;
-(NSString *)videoOwnerID;
-(BOOL)shouldSubscribe;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 videoOwnerID:(id)arg3 surface:(id)arg4 shouldSubscribe:(BOOL)arg5 ;
-(void)setVideoOwnerID:(NSString *)arg1 ;
-(void)setShouldSubscribe:(BOOL)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(NSString *)surface;
@end
