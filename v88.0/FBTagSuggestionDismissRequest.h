/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBTagSuggestionDismissRequest : FBNetworkerRequest {

	NSString* _photoFBID;
	NSString* _faceboxFBID;
	NSString* _dismissSource;

}

@property (nonatomic,copy) NSString * photoFBID;                  //@synthesize photoFBID=_photoFBID - In the implementation block
@property (nonatomic,copy) NSString * faceboxFBID;                //@synthesize faceboxFBID=_faceboxFBID - In the implementation block
@property (nonatomic,copy) NSString * dismissSource;              //@synthesize dismissSource=_dismissSource - In the implementation block
-(id)networkRequest;
-(NSString *)photoFBID;
-(id)initWithPhotoFBID:(id)arg1 faceboxFBID:(id)arg2 dismissSource:(id)arg3 callbackPerformer:(id)arg4 ;
-(void)setPhotoFBID:(NSString *)arg1 ;
-(NSString *)faceboxFBID;
-(void)setFaceboxFBID:(NSString *)arg1 ;
-(NSString *)dismissSource;
-(void)setDismissSource:(NSString *)arg1 ;
@end
