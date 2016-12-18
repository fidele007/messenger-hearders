/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBMessengerThreadData : FBGraphQLInput {

	NSNumber* _otherUserId;
	NSNumber* _threadFbid;

}

@property (nonatomic,copy) NSNumber * otherUserId;              //@synthesize otherUserId=_otherUserId - In the implementation block
@property (nonatomic,copy) NSNumber * threadFbid;               //@synthesize threadFbid=_threadFbid - In the implementation block
-(NSNumber *)threadFbid;
-(void)setThreadFbid:(NSNumber *)arg1 ;
-(NSNumber *)otherUserId;
-(void)setOtherUserId:(NSNumber *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
@end

