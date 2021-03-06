/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBNetworkerRequestDelegate.h>
#import <Messenger/FBPhotoDeletionProtocol.h>

@class FBUserSession, NSString;

@interface FBMediaDeletionController : NSObject <FBNetworkerRequestDelegate, FBPhotoDeletionProtocol> {

	FBUserSession* _session;
	/*^block*/id _successBlock;
	/*^block*/id _failBlock;
	NSString* _photoGraphQLID;
	NSString* _friendlyName;
	NSString* _requestPath;
	NSString* _requestName;

}

@property (nonatomic,copy) id successBlock;                         //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failBlock;                            //@synthesize failBlock=_failBlock - In the implementation block
@property (nonatomic,copy) NSString * photoGraphQLID;               //@synthesize photoGraphQLID=_photoGraphQLID - In the implementation block
@property (nonatomic,copy) NSString * friendlyName;                 //@synthesize friendlyName=_friendlyName - In the implementation block
@property (nonatomic,copy) NSString * requestPath;                  //@synthesize requestPath=_requestPath - In the implementation block
@property (nonatomic,copy) NSString * requestName;                  //@synthesize requestName=_requestName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteVideo:(id)arg1 successBlock:(/*^block*/id)arg2 failBlock:(/*^block*/id)arg3 ;
-(void)setFailBlock:(id)arg1 ;
-(void)setPhotoGraphQLID:(NSString *)arg1 ;
-(void)setRequestPath:(NSString *)arg1 ;
-(void)setRequestName:(NSString *)arg1 ;
-(id)_deletePhotoRequestForPhotoWithGraphQLID:(id)arg1 ;
-(void)deletePhoto:(id)arg1 successBlock:(/*^block*/id)arg2 failBlock:(/*^block*/id)arg3 ;
-(id)failBlock;
-(NSString *)photoGraphQLID;
-(NSString *)requestPath;
-(id)successBlock;
-(void)setSuccessBlock:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(NSString *)requestName;
-(void)setFriendlyName:(NSString *)arg1 ;
-(NSString *)friendlyName;
-(id)initWithSession:(id)arg1 ;
@end

