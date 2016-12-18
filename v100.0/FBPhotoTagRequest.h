/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBPhotoTagRequest : FBNetworkerRequest {

	NSString* _tagsJSON;
	NSString* _photoFBID;
	NSString* _httpMethod;
	NSString* _photoOwnerFBID;
	unsigned long long _tagsCount;
	NSString* _userFBID;

}

@property (nonatomic,copy) NSString * httpMethod;                       //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy) NSString * photoOwnerFBID;                   //@synthesize photoOwnerFBID=_photoOwnerFBID - In the implementation block
@property (assign,nonatomic) unsigned long long tagsCount;              //@synthesize tagsCount=_tagsCount - In the implementation block
@property (nonatomic,copy) NSString * userFBID;                         //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,retain) NSString * tagsJSON;                       //@synthesize tagsJSON=_tagsJSON - In the implementation block
@property (nonatomic,retain) NSString * photoFBID;                      //@synthesize photoFBID=_photoFBID - In the implementation block
-(NSString *)userFBID;
-(id)networkRequest;
-(void)setPhotoOwnerFBID:(NSString *)arg1 ;
-(NSString *)photoOwnerFBID;
-(id)initWithPublishedPhotoTags:(id)arg1 photoFBID:(id)arg2 photoOwnerFBID:(id)arg3 userFBID:(id)arg4 callbackPerformer:(id)arg5 isDeleteRequest:(BOOL)arg6 ;
-(void)logTagRequestStart;
-(void)logTagRequestSuccess;
-(void)logTagRequestFailure;
-(NSString *)photoFBID;
-(NSString *)tagsJSON;
-(void)_logTagRequest:(id)arg1 ;
-(void)setTagsJSON:(NSString *)arg1 ;
-(void)setPhotoFBID:(NSString *)arg1 ;
-(void)setTagsCount:(unsigned long long)arg1 ;
-(void)setUserFBID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHttpMethod:(NSString *)arg1 ;
-(unsigned long long)tagsCount;
-(NSString *)httpMethod;
@end

