/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL;

@interface MNMatchedSMSBridgeThread : FBValueObject <NSCopying> {

	NSString* _threadFbId;
	NSString* _customName;
	NSDictionary* _participantIdsToNamesExcludingSelf;
	NSURL* _imageURL;

}

@property (nonatomic,copy,readonly) NSString * threadFbId;                                          //@synthesize threadFbId=_threadFbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * customName;                                          //@synthesize customName=_customName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * participantIdsToNamesExcludingSelf;              //@synthesize participantIdsToNamesExcludingSelf=_participantIdsToNamesExcludingSelf - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                               //@synthesize imageURL=_imageURL - In the implementation block
-(NSDictionary *)participantIdsToNamesExcludingSelf;
-(id)initWithThreadFbId:(id)arg1 customName:(id)arg2 participantIdsToNamesExcludingSelf:(id)arg3 imageURL:(id)arg4 ;
-(NSString *)threadFbId;
-(NSURL *)imageURL;
-(NSString *)customName;
@end

